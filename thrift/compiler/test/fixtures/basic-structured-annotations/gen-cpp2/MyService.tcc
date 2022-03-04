/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/MyService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyService_first_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::cpp2::annotated_inline_string*>> MyService_first_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>> MyService_second_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>> MyService_second_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_first(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_first<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_first(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_first_pargs args;
  try {
    simpleDeserializeRequest<ProtocolIn_>(args, apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "first");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::cpp2::annotated_inline_string>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , apache::thrift::detail::ServerRequestHelper::contextStack(std::move(serverRequest))
    , return_first<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_first<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    
    );
  iface_->async_tm_first(std::move(callback));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_first(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_first_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.first", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "first");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::cpp2::annotated_inline_string>>>(std::move(req), std::move(ctxStack), return_first<ProtocolIn_,ProtocolOut_>, throw_wrapped_first<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_first(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_first(apache::thrift::ContextStack* ctx, ::cpp2::annotated_inline_string const& _return) {
  ProtocolOut_ prot;
  MyService_first_presult result;
  result.get<0>().value = const_cast<::cpp2::annotated_inline_string*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_first(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "first");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_second(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_second<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_second(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_second_pargs args;
  ::std::int64_t uarg_count{0};
  args.get<0>().value = &uarg_count;
  try {
    simpleDeserializeRequest<ProtocolIn_>(args, apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "second");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , apache::thrift::detail::ServerRequestHelper::contextStack(std::move(serverRequest))
    , return_second<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_second<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    
    );
  iface_->async_tm_second(std::move(callback), args.get<0>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_second(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_second_pargs args;
  ::std::int64_t uarg_count{0};
  args.get<0>().value = &uarg_count;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.second", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "second");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(std::move(req), std::move(ctxStack), return_second<ProtocolIn_,ProtocolOut_>, throw_wrapped_second<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_second(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_second(apache::thrift::ContextStack* ctx, bool const& _return) {
  ProtocolOut_ prot;
  MyService_second_presult result;
  result.get<0>().value = const_cast<bool*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_second(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "second");
    return;
  }
}


} // cpp2
