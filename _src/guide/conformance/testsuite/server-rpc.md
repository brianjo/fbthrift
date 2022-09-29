---
state: draft
sidebar_position: 3
---
# Server RPC tests
## Framework
The following diagram shows the server RPC conformance test framework.

![Server RPC test framework](server-rpc-test.png)

Server RPC test framework consist of a test runner and a C++ client. Test runner spawns a new test server for the target language and execute the tests. Each test runs in 3 steps.

1. Client notifies the server with the `sendTestCase` API, sends `RpcTestCase` which contains `ServerInstruction`. Server **should** store `RpcTestCase` temporarily for the next step.
2. Client executes the test with an optional parameter defined in `ClientInstruction`. Server performs instructions defined in `ServerInstruction`. Server stores the result in temporary `ServerTestResult`, and client stores response in temporary `ClientTestResult`.
3. Client compares the `ClientTestResult` from the expected `RpcTestCase` and actual result from server. Client requests server for stored `ServerTestResult` with `getTestResult` method. Server responds with stored `ServerTestResult` from step #2. Client compares it with `ServerTestResult` from the expected `RpcTestCase`.

Note that, the server stores state between each test steps. Some servers (i.e Hack) may not store state as each of the steps may go to a different instance of the servers. A stateless version which merge 3 steps into one is also available. This might have some limitation for the test cases though, i.e if the server has to be configured before step #2.

## Test cases
Test cases below describes available tests, the behavior in step #2, test API invoked by the test client in step #2 and the expected result in `ServerTestResult`.

### Request response

| Test | Description | Expected result in ServerTestResult |
| :--- | :----------- | :---|
| Basic | Server receives a request-response request from a client and runs the corresponding RPC handler for the RPC specified in the request and sends back the response defined in `RequestResponseBasicServerInstruction.response`.<br/><br/> `Response requestResponseBasic(1: Request req);` | Initial request |
| Server throws user-declared exception | Server receives a request-response request from a client, runs the RPC handler for the method specified in the request, the handler throws a user-declared exception defined in `RequestResponseDeclaredExceptionServerInstruction.userException`.<br/><br/> `void requestResponseDeclaredException(1: Request req) throws (1: UserException e,);` | Initial request |
| Server throws undeclared exception | Server receives a request-response request from a client, runs the RPC handler for the method specified in the request, the handler throws a runtime exception with `RequestResponseUndeclaredExceptionServerInstruction.exceptionMessage` which is serialized as a `TApplicationException` and sent to the client.<br/><br/> `void requestResponseUndeclaredException(1: Request req);` | Initial request |
| No Argument and void response | Server receives a request with no argument, and response with a void response.<br/><br/> `void requestResponseNoArgVoidResponse();` | |
| Fragmentation | Server receives fragmented request-response request and sends a large response utilizing fragmentation. It reuses request-response basic testcase. | Initial request |
### Streaming

| Test | Description | Expected result in ServerTestResult |
| :--- | :----------- | :---|
| Basic | Server receives a stream request from a client and sends stream payloads and completes the stream.<br/><br/> `stream<Response> streamBasic(1: Request req);`| Initial request |
| Initial response payload | Server receives a stream request from a client and responds with a first response payload as well as stream payloads and completes the stream.<br/><br/> `Response, stream<Response> streamInitialResponse(1: Request req);` | Initial request |
| Credit timeout | Server receives a stream request from a client and sends payloads until it has no credits remaining, at which point the credit timeout will begin and eventually expire, causing the server to send a credit timeout exception and closing the stream.<br/><br/> `stream<Response> streamCreditTimeout(1: Request req);` | Initial request |

### Sink

| Test | Description | Expected result in ServerTestResult |
| :--- | :----------- | :---|
| Basic | Server receives a sink request and receives sink payloads from client and sends a final response after the sink completes.<br/><br/> `sink<Request, Response> sinkBasic(1: Request req);` | Initial request and received payloads |
| Chunk timeout | Server receives a sink request and waits for sink chunk timeout to expire (since client is not sending any payloads) and sends a chunk timeout error to the client.<br/><br/> `sink<Request, Response> sinkChunkTimeout(1: Request req);` | Initial request, received payloads and chunk timeout flag |
