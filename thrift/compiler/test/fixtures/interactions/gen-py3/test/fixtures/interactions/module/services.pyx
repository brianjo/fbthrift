#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext, pass_context
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.py3.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

if PY_VERSION_HEX >= 0x030702F0:  # 3.7.2 Final
    from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

from thrift.py3.std_libcpp cimport optional
from thrift.py3.stream cimport cServerStream, cServerStreamPublisher, cResponseAndServerStream, createResponseAndServerStream, createAsyncIteratorFromPyIterator, pythonFuncToCppFunc, ServerStream, ServerPublisher
cimport test.fixtures.interactions.module.types as _test_fixtures_interactions_module_types
import test.fixtures.interactions.module.types as _test_fixtures_interactions_module_types

cimport test.fixtures.interactions.module.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from test.fixtures.interactions.module.services_wrapper cimport cMyServiceInterface
cdef class ServerPublisher_cbool(ServerPublisher):
    cdef unique_ptr[cServerStreamPublisher[cbool]] cPublisher

    def complete(ServerPublisher self):
        cmove(deref(self.cPublisher)).complete()

    # Calling this send instead of the wrapped method name of next because next is
    # a python keyword and makes the linter complain
    def send(ServerPublisher self, pbool item):
        deref(self.cPublisher).next(<cbool?>item)

    @staticmethod
    cdef create(cServerStreamPublisher[cbool] cPublisher):
        cdef ServerPublisher_cbool inst = ServerPublisher_cbool.__new__(ServerPublisher_cbool)
        inst.cPublisher = make_unique[cServerStreamPublisher[cbool]](cmove(cPublisher))
        return inst

cdef class ServerStream_cbool(ServerStream):
    cdef unique_ptr[cServerStream[cbool]] cStream

    @staticmethod
    cdef create(cServerStream[cbool] cStream):
        cdef ServerStream_cbool inst = ServerStream_cbool.__new__(ServerStream_cbool)
        inst.cStream = make_unique[cServerStream[cbool]](cmove(cStream))
        return inst



@cython.auto_pickle(False)
cdef class Promise_cServerStream__cbool:
    cdef cFollyPromise[cServerStream[cbool]] cPromise

    @staticmethod
    cdef create(cFollyPromise[cServerStream[cbool]] cPromise):
        cdef Promise_cServerStream__cbool inst = Promise_cServerStream__cbool.__new__(Promise_cServerStream__cbool)
        inst.cPromise = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cint32_t:
    cdef cFollyPromise[cint32_t] cPromise

    @staticmethod
    cdef create(cFollyPromise[cint32_t] cPromise):
        cdef Promise_cint32_t inst = Promise_cint32_t.__new__(Promise_cint32_t)
        inst.cPromise = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit] cPromise

    @staticmethod
    cdef create(cFollyPromise[cFollyUnit] cPromise):
        cdef Promise_cFollyUnit inst = Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cbool_Stream:
    cdef cFollyPromise[optional[cbool]] cPromise

    @staticmethod
    cdef create(cFollyPromise[optional[cbool]] cPromise):
        cdef Promise_cbool_Stream inst = Promise_cbool_Stream.__new__(Promise_cbool_Stream)
        inst.cPromise = cmove(cPromise)
        return inst

cdef object _MyService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class MyServiceInterface(
    ServiceInterface
):
    annotations = _MyService_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_foo(fn):
        return pass_context(fn)

    async def foo(
            self):
        raise NotImplementedError("async def foo is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__MyService(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cMyServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyService"



cdef api void call_cy_MyService_foo(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit.create(cmove(cPromise))
    __context = RequestContext.create(ctx)
    if PY_VERSION_HEX >= 0x030702F0:  # 3.7.2 Final
        __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
        __context = None
    asyncio.get_event_loop().create_task(
        MyService_foo_coro(
            self,
            __context,
            __promise
        )
    )
    if PY_VERSION_HEX >= 0x030702F0:  # 3.7.2 Final
        __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyService_foo_coro(
    object self,
    object ctx,
    Promise_cFollyUnit promise
):
    try:
        if ctx and getattr(self.foo, "pass_context", False):
            result = await self.foo(ctx,)
        else:
            result = await self.foo()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler foo:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler foo:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

