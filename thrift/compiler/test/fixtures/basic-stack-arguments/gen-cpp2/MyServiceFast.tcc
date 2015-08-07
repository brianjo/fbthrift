/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "MyServiceFast.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/MoveWrapper.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

namespace cpp2 {

typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t>> MyServiceFast_hasDataById_args;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>> MyServiceFast_hasDataById_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_BOOL, bool*>> MyServiceFast_hasDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t>> MyServiceFast_getDataById_args;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>> MyServiceFast_getDataById_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRING, std::string*>> MyServiceFast_getDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRING, std::string>> MyServiceFast_putDataById_args;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRING, std::string*>> MyServiceFast_putDataById_pargs;
typedef apache::thrift::ThriftPresult<true> MyServiceFast_putDataById_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRING, std::string>> MyServiceFast_lobDataById_args;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I64, int64_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRING, std::string*>> MyServiceFast_lobDataById_pargs;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceFastAsyncProcessor::process_hasDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  MyServiceFast_hasDataById_args args;
  std::unique_ptr<apache::thrift::ContextStack> c(this->getContextStack(this->getServiceName(), "MyServiceFast.hasDataById", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), c.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function hasDataById";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("hasDataById", &prot, iprot->getSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      auto queue_mw = folly::makeMoveWrapper(std::move(queue));
      auto req_mw = folly::makeMoveWrapper(std::move(req));
      eb->runInEventBaseThread([=]() mutable {
        (*req_mw)->sendReply(queue_mw->move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function hasDataById";
    }
  }
  auto callback = folly::make_unique<apache::thrift::HandlerCallback<bool>>(std::move(req), std::move(c), return_hasDataById<ProtocolIn_,ProtocolOut_>, throw_hasDataById<ProtocolIn_, ProtocolOut_>, throw_wrapped_hasDataById<ProtocolIn_, ProtocolOut_>, iprot->getSeqId(), eb, tm, ctx);
  ctx->setStartedProcessing();
  iface_->async_eb_hasDataById(std::move(callback), args.get<0>().value);
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyServiceFastAsyncProcessor::return_hasDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return) {
  ProtocolOut_ prot;
  MyServiceFast_hasDataById_presult result;
  result.get<0>().value = const_cast<bool*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("hasDataById", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceFastAsyncProcessor::throw_hasDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx) {
  ProtocolOut_ prot;
  try {
    std::rethrow_exception(ep);
  }
  catch (const std::exception& e) {
    if (req) {
      LOG(ERROR) << folly::exceptionStr(e).toStdString() << " in function hasDataById";
      apache::thrift::TApplicationException x(folly::exceptionStr(e).toStdString());
      ctx->userException(folly::demangle(typeid(e)).toStdString(), e.what());
      folly::IOBufQueue queue = serializeException("hasDataById", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << folly::exceptionStr(e).toStdString() << " in oneway function hasDataById";
    }
  }
  catch (...) {
    if (req) {
      LOG(ERROR) << "<unknown exception>" << " in function hasDataById";
      apache::thrift::TApplicationException x("<unknown exception>");
      folly::IOBufQueue queue = serializeException("hasDataById", &prot, protoSeqId, nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << "<unknown exception>" << " in oneway function hasDataById";
    }
  }
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceFastAsyncProcessor::throw_wrapped_hasDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew.what().toStdString() << " in function hasDataById";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userException(ew.class_name().toStdString(), ew.what().toStdString());
      folly::IOBufQueue queue = serializeException("hasDataById", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew.what().toStdString() << " in oneway function hasDataById";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceFastAsyncProcessor::process_getDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  MyServiceFast_getDataById_args args;
  std::unique_ptr<apache::thrift::ContextStack> c(this->getContextStack(this->getServiceName(), "MyServiceFast.getDataById", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), c.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function getDataById";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("getDataById", &prot, iprot->getSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      auto queue_mw = folly::makeMoveWrapper(std::move(queue));
      auto req_mw = folly::makeMoveWrapper(std::move(req));
      eb->runInEventBaseThread([=]() mutable {
        (*req_mw)->sendReply(queue_mw->move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function getDataById";
    }
  }
  auto callback = folly::make_unique<apache::thrift::HandlerCallback<std::string>>(std::move(req), std::move(c), return_getDataById<ProtocolIn_,ProtocolOut_>, throw_getDataById<ProtocolIn_, ProtocolOut_>, throw_wrapped_getDataById<ProtocolIn_, ProtocolOut_>, iprot->getSeqId(), eb, tm, ctx);
  ctx->setStartedProcessing();
  iface_->async_eb_getDataById(std::move(callback), args.get<0>().value);
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyServiceFastAsyncProcessor::return_getDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::string const& _return) {
  ProtocolOut_ prot;
  MyServiceFast_getDataById_presult result;
  result.get<0>().value = const_cast<std::string*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("getDataById", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceFastAsyncProcessor::throw_getDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx) {
  ProtocolOut_ prot;
  try {
    std::rethrow_exception(ep);
  }
  catch (const std::exception& e) {
    if (req) {
      LOG(ERROR) << folly::exceptionStr(e).toStdString() << " in function getDataById";
      apache::thrift::TApplicationException x(folly::exceptionStr(e).toStdString());
      ctx->userException(folly::demangle(typeid(e)).toStdString(), e.what());
      folly::IOBufQueue queue = serializeException("getDataById", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << folly::exceptionStr(e).toStdString() << " in oneway function getDataById";
    }
  }
  catch (...) {
    if (req) {
      LOG(ERROR) << "<unknown exception>" << " in function getDataById";
      apache::thrift::TApplicationException x("<unknown exception>");
      folly::IOBufQueue queue = serializeException("getDataById", &prot, protoSeqId, nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << "<unknown exception>" << " in oneway function getDataById";
    }
  }
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceFastAsyncProcessor::throw_wrapped_getDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew.what().toStdString() << " in function getDataById";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userException(ew.class_name().toStdString(), ew.what().toStdString());
      folly::IOBufQueue queue = serializeException("getDataById", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew.what().toStdString() << " in oneway function getDataById";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceFastAsyncProcessor::process_putDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  MyServiceFast_putDataById_args args;
  std::unique_ptr<apache::thrift::ContextStack> c(this->getContextStack(this->getServiceName(), "MyServiceFast.putDataById", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), c.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function putDataById";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("putDataById", &prot, iprot->getSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      auto queue_mw = folly::makeMoveWrapper(std::move(queue));
      auto req_mw = folly::makeMoveWrapper(std::move(req));
      eb->runInEventBaseThread([=]() mutable {
        (*req_mw)->sendReply(queue_mw->move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function putDataById";
    }
  }
  auto callback = folly::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(c), return_putDataById<ProtocolIn_,ProtocolOut_>, throw_putDataById<ProtocolIn_, ProtocolOut_>, throw_wrapped_putDataById<ProtocolIn_, ProtocolOut_>, iprot->getSeqId(), eb, tm, ctx);
  ctx->setStartedProcessing();
  iface_->async_eb_putDataById(std::move(callback), args.get<0>().value, args.get<1>().value);
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyServiceFastAsyncProcessor::return_putDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  MyServiceFast_putDataById_presult result;
  return serializeResponse("putDataById", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceFastAsyncProcessor::throw_putDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx) {
  ProtocolOut_ prot;
  try {
    std::rethrow_exception(ep);
  }
  catch (const std::exception& e) {
    if (req) {
      LOG(ERROR) << folly::exceptionStr(e).toStdString() << " in function putDataById";
      apache::thrift::TApplicationException x(folly::exceptionStr(e).toStdString());
      ctx->userException(folly::demangle(typeid(e)).toStdString(), e.what());
      folly::IOBufQueue queue = serializeException("putDataById", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << folly::exceptionStr(e).toStdString() << " in oneway function putDataById";
    }
  }
  catch (...) {
    if (req) {
      LOG(ERROR) << "<unknown exception>" << " in function putDataById";
      apache::thrift::TApplicationException x("<unknown exception>");
      folly::IOBufQueue queue = serializeException("putDataById", &prot, protoSeqId, nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << "<unknown exception>" << " in oneway function putDataById";
    }
  }
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceFastAsyncProcessor::throw_wrapped_putDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew.what().toStdString() << " in function putDataById";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userException(ew.class_name().toStdString(), ew.what().toStdString());
      folly::IOBufQueue queue = serializeException("putDataById", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew.what().toStdString() << " in oneway function putDataById";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceFastAsyncProcessor::process_lobDataById(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->isOneway()) {
    req->sendReply(std::unique_ptr<folly::IOBuf>());
  }
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  MyServiceFast_lobDataById_args args;
  std::unique_ptr<apache::thrift::ContextStack> c(this->getContextStack(this->getServiceName(), "MyServiceFast.lobDataById", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), c.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function noResponse";
    return;
  }
  std::unique_ptr<apache::thrift::HandlerCallbackBase> callback(new apache::thrift::HandlerCallbackBase(std::move(req), std::move(c), nullptr, nullptr, eb, tm, ctx));
  ctx->setStartedProcessing();
  iface_->async_eb_lobDataById(std::move(callback), args.get<0>().value, args.get<1>().value);
}

template <typename Protocol_>
void MyServiceFastAsyncClient::hasDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  auto header = std::make_shared<apache::thrift::transport::THeader>();
  header->setProtocolId(getChannel()->getProtocolId());
  header->setHeaders(rpcOptions.releaseWriteHeaders());
  getChannel()->flushWriteHeaders(header.get());
  connectionContext_->setRequestHeader(header.get());
  std::unique_ptr<apache::thrift::ContextStack> ctx = this->getContextStack(this->getServiceName(), "MyServiceFast.hasDataById", connectionContext_.get());
  MyServiceFast_hasDataById_pargs args;
  args.get<0>().value = &id;
  apache::thrift::clientSendT<false>(prot, rpcOptions, std::move(callback), std::move(ctx), header, channel_.get(), args, "hasDataById", [](Protocol_* prot, MyServiceFast_hasDataById_pargs& args) { args.write(prot); }, [](Protocol_* prot, MyServiceFast_hasDataById_pargs& args) { return args.serializedSizeZC(prot); });
  connectionContext_->setRequestHeader(nullptr);
}

template <typename Protocol_>
folly::exception_wrapper MyServiceFastAsyncClient::recv_wrapped_hasDataByIdT(Protocol_* prot, bool& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return state.exceptionWrapper();
  }
  prot->setInput(state.buf());
  auto guard = folly::makeGuard([&] {prot->setInput(nullptr);});
  apache::thrift::ContextStack* ctx = state.ctx();
  std::string fname;
  int32_t protoSeqId = 0;
  apache::thrift::MessageType mtype;
  ctx->preRead();
  folly::exception_wrapper interior_ew;
  auto caught_ew = folly::try_and_catch<apache::thrift::TException, apache::thrift::protocol::TProtocolException>([&]() {
    prot->readMessageBegin(fname, mtype, protoSeqId);
    if (mtype == apache::thrift::T_EXCEPTION) {
      apache::thrift::TApplicationException x;
      x.read(prot);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(x);
      return; // from try_and_catch
    }
    if (mtype != apache::thrift::T_REPLY) {
      prot->skip(apache::thrift::protocol::T_STRUCT);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::INVALID_MESSAGE_TYPE);
      return; // from try_and_catch
    }
    if (fname.compare("hasDataById") != 0) {
      prot->skip(apache::thrift::protocol::T_STRUCT);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::WRONG_METHOD_NAME);
      return; // from try_and_catch
    }
    ::apache::thrift::SerializedMessage smsg;
    smsg.protocolType = prot->protocolType();
    smsg.buffer = state.buf();
    ctx->onReadData(smsg);
    MyServiceFast_hasDataById_presult result;
    result.get<0>().value = &_return;
    result.read(prot);
    prot->readMessageEnd();
    ctx->postRead(state.header(), state.buf()->length());
    if (result.getIsSet(0)) {
      // _return pointer has been filled
      return; // from try_and_catch
    }
    else {
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::MISSING_RESULT, "failed: unknown result");
      return; // from try_and_catch
    }
  }
  );
  if (interior_ew || caught_ew) {
    ctx->handlerError();
    return interior_ew ? interior_ew : caught_ew;
  }
  return folly::exception_wrapper();
}

template <typename Protocol_>
bool MyServiceFastAsyncClient::recv_hasDataByIdT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state) {
  bool _return;
  auto ew = recv_wrapped_hasDataByIdT(prot, _return, state);
  if (ew) {
    ew.throwException();
  }
  return _return;
}

template <typename Protocol_>
void MyServiceFastAsyncClient::getDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  auto header = std::make_shared<apache::thrift::transport::THeader>();
  header->setProtocolId(getChannel()->getProtocolId());
  header->setHeaders(rpcOptions.releaseWriteHeaders());
  getChannel()->flushWriteHeaders(header.get());
  connectionContext_->setRequestHeader(header.get());
  std::unique_ptr<apache::thrift::ContextStack> ctx = this->getContextStack(this->getServiceName(), "MyServiceFast.getDataById", connectionContext_.get());
  MyServiceFast_getDataById_pargs args;
  args.get<0>().value = &id;
  apache::thrift::clientSendT<false>(prot, rpcOptions, std::move(callback), std::move(ctx), header, channel_.get(), args, "getDataById", [](Protocol_* prot, MyServiceFast_getDataById_pargs& args) { args.write(prot); }, [](Protocol_* prot, MyServiceFast_getDataById_pargs& args) { return args.serializedSizeZC(prot); });
  connectionContext_->setRequestHeader(nullptr);
}

template <typename Protocol_>
folly::exception_wrapper MyServiceFastAsyncClient::recv_wrapped_getDataByIdT(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return state.exceptionWrapper();
  }
  prot->setInput(state.buf());
  auto guard = folly::makeGuard([&] {prot->setInput(nullptr);});
  apache::thrift::ContextStack* ctx = state.ctx();
  std::string fname;
  int32_t protoSeqId = 0;
  apache::thrift::MessageType mtype;
  ctx->preRead();
  folly::exception_wrapper interior_ew;
  auto caught_ew = folly::try_and_catch<apache::thrift::TException, apache::thrift::protocol::TProtocolException>([&]() {
    prot->readMessageBegin(fname, mtype, protoSeqId);
    if (mtype == apache::thrift::T_EXCEPTION) {
      apache::thrift::TApplicationException x;
      x.read(prot);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(x);
      return; // from try_and_catch
    }
    if (mtype != apache::thrift::T_REPLY) {
      prot->skip(apache::thrift::protocol::T_STRUCT);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::INVALID_MESSAGE_TYPE);
      return; // from try_and_catch
    }
    if (fname.compare("getDataById") != 0) {
      prot->skip(apache::thrift::protocol::T_STRUCT);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::WRONG_METHOD_NAME);
      return; // from try_and_catch
    }
    ::apache::thrift::SerializedMessage smsg;
    smsg.protocolType = prot->protocolType();
    smsg.buffer = state.buf();
    ctx->onReadData(smsg);
    MyServiceFast_getDataById_presult result;
    result.get<0>().value = &_return;
    result.read(prot);
    prot->readMessageEnd();
    ctx->postRead(state.header(), state.buf()->length());
    if (result.getIsSet(0)) {
      // _return pointer has been filled
      return; // from try_and_catch
    }
    else {
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::MISSING_RESULT, "failed: unknown result");
      return; // from try_and_catch
    }
  }
  );
  if (interior_ew || caught_ew) {
    ctx->handlerError();
    return interior_ew ? interior_ew : caught_ew;
  }
  return folly::exception_wrapper();
}

template <typename Protocol_>
void MyServiceFastAsyncClient::recv_getDataByIdT(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataByIdT(prot, _return, state);
  if (ew) {
    ew.throwException();
  }
}

template <typename Protocol_>
void MyServiceFastAsyncClient::putDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  auto header = std::make_shared<apache::thrift::transport::THeader>();
  header->setProtocolId(getChannel()->getProtocolId());
  header->setHeaders(rpcOptions.releaseWriteHeaders());
  getChannel()->flushWriteHeaders(header.get());
  connectionContext_->setRequestHeader(header.get());
  std::unique_ptr<apache::thrift::ContextStack> ctx = this->getContextStack(this->getServiceName(), "MyServiceFast.putDataById", connectionContext_.get());
  MyServiceFast_putDataById_pargs args;
  args.get<0>().value = &id;
  args.get<1>().value = const_cast<std::string*>(&data);
  apache::thrift::clientSendT<false>(prot, rpcOptions, std::move(callback), std::move(ctx), header, channel_.get(), args, "putDataById", [](Protocol_* prot, MyServiceFast_putDataById_pargs& args) { args.write(prot); }, [](Protocol_* prot, MyServiceFast_putDataById_pargs& args) { return args.serializedSizeZC(prot); });
  connectionContext_->setRequestHeader(nullptr);
}

template <typename Protocol_>
folly::exception_wrapper MyServiceFastAsyncClient::recv_wrapped_putDataByIdT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return state.exceptionWrapper();
  }
  prot->setInput(state.buf());
  auto guard = folly::makeGuard([&] {prot->setInput(nullptr);});
  apache::thrift::ContextStack* ctx = state.ctx();
  std::string fname;
  int32_t protoSeqId = 0;
  apache::thrift::MessageType mtype;
  ctx->preRead();
  folly::exception_wrapper interior_ew;
  auto caught_ew = folly::try_and_catch<apache::thrift::TException, apache::thrift::protocol::TProtocolException>([&]() {
    prot->readMessageBegin(fname, mtype, protoSeqId);
    if (mtype == apache::thrift::T_EXCEPTION) {
      apache::thrift::TApplicationException x;
      x.read(prot);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(x);
      return; // from try_and_catch
    }
    if (mtype != apache::thrift::T_REPLY) {
      prot->skip(apache::thrift::protocol::T_STRUCT);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::INVALID_MESSAGE_TYPE);
      return; // from try_and_catch
    }
    if (fname.compare("putDataById") != 0) {
      prot->skip(apache::thrift::protocol::T_STRUCT);
      prot->readMessageEnd();
      interior_ew = folly::make_exception_wrapper<apache::thrift::TApplicationException>(apache::thrift::TApplicationException::TApplicationExceptionType::WRONG_METHOD_NAME);
      return; // from try_and_catch
    }
    ::apache::thrift::SerializedMessage smsg;
    smsg.protocolType = prot->protocolType();
    smsg.buffer = state.buf();
    ctx->onReadData(smsg);
    MyServiceFast_putDataById_presult result;
    result.read(prot);
    prot->readMessageEnd();
    ctx->postRead(state.header(), state.buf()->length());
  }
  );
  if (interior_ew || caught_ew) {
    ctx->handlerError();
    return interior_ew ? interior_ew : caught_ew;
  }
  return folly::exception_wrapper();
}

template <typename Protocol_>
void MyServiceFastAsyncClient::recv_putDataByIdT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_putDataByIdT(prot, state);
  if (ew) {
    ew.throwException();
  }
}

template <typename Protocol_>
void MyServiceFastAsyncClient::lobDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  auto header = std::make_shared<apache::thrift::transport::THeader>();
  header->setProtocolId(getChannel()->getProtocolId());
  header->setHeaders(rpcOptions.releaseWriteHeaders());
  getChannel()->flushWriteHeaders(header.get());
  connectionContext_->setRequestHeader(header.get());
  std::unique_ptr<apache::thrift::ContextStack> ctx = this->getContextStack(this->getServiceName(), "MyServiceFast.lobDataById", connectionContext_.get());
  MyServiceFast_lobDataById_pargs args;
  args.get<0>().value = &id;
  args.get<1>().value = const_cast<std::string*>(&data);
  apache::thrift::clientSendT<true>(prot, rpcOptions, std::move(callback), std::move(ctx), header, channel_.get(), args, "lobDataById", [](Protocol_* prot, MyServiceFast_lobDataById_pargs& args) { args.write(prot); }, [](Protocol_* prot, MyServiceFast_lobDataById_pargs& args) { return args.serializedSizeZC(prot); });
  connectionContext_->setRequestHeader(nullptr);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift