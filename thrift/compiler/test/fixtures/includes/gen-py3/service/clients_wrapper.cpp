/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/service/clients_wrapper.h>

namespace cpp2 {


folly::Future<folly::Unit>
MyServiceClientWrapper::query(
    apache::thrift::RpcOptions& rpcOptions,
    ::cpp2::MyStruct arg_s,
    ::cpp2::Included arg_i) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_query, channel_);
  try {
    client->query(
      rpcOptions,
      std::move(callback),
      arg_s,
      arg_i
    );
  } catch (const std::exception& ex) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception(), ex
    ));
  }
  return _future;
}

folly::Future<folly::Unit>
MyServiceClientWrapper::has_arg_docs(
    apache::thrift::RpcOptions& rpcOptions,
    ::cpp2::MyStruct arg_s,
    ::cpp2::Included arg_i) {
  auto* client = static_cast<::cpp2::MyServiceAsyncClient*>(async_client_.get());
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_has_arg_docs, channel_);
  try {
    client->has_arg_docs(
      rpcOptions,
      std::move(callback),
      arg_s,
      arg_i
    );
  } catch (const std::exception& ex) {
    return folly::makeFuture<folly::Unit>(folly::exception_wrapper(
      std::current_exception(), ex
    ));
  }
  return _future;
}

} // namespace cpp2
