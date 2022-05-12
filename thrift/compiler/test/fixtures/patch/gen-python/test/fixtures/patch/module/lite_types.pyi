#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions

import facebook.thrift.annotation.thrift.lite_types

import facebook.thrift.op.patch.lite_types


class MyData(_fbthrift_py3lite_types.Struct):
    data1: _typing.Final[_typing.Optional[str]] = ...
    data2: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        data1: _typing.Optional[str]=...,
        data2: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        data1: _typing.Optional[str]=...,
        data2: _typing.Optional[int]=...
    ) -> MyData: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...


class MyUnion(_fbthrift_py3lite_types.Union):
    option1: _typing.Final[str] = ...
    option2: _typing.Final[int] = ...
    def __init__(
        self, *,
        option1: _typing.Optional[str]=...,
        option2: _typing.Optional[int]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: MyUnion.Type = ...
        option1: MyUnion.Type = ...
        option2: MyUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, str, int]) -> MyUnion: ...
    value: _typing.Final[_typing.Union[None, str, int]]
    type: Type
    def get_type(self) -> Type:...


class MyStruct(_fbthrift_py3lite_types.Struct):
    boolVal: _typing.Final[_typing.Optional[bool]] = ...
    byteVal: _typing.Final[_typing.Optional[int]] = ...
    i16Val: _typing.Final[_typing.Optional[int]] = ...
    i32Val: _typing.Final[_typing.Optional[int]] = ...
    i64Val: _typing.Final[_typing.Optional[int]] = ...
    floatVal: _typing.Final[_typing.Optional[float]] = ...
    doubleVal: _typing.Final[_typing.Optional[float]] = ...
    stringVal: _typing.Final[_typing.Optional[str]] = ...
    binaryVal: _typing.Final[_typing.Optional[bytes]] = ...
    structVal: _typing.Final[_typing.Optional[MyData]] = ...
    optBoolVal: _typing.Final[_typing.Optional[bool]] = ...
    optByteVal: _typing.Final[_typing.Optional[int]] = ...
    optI16Val: _typing.Final[_typing.Optional[int]] = ...
    optI32Val: _typing.Final[_typing.Optional[int]] = ...
    optI64Val: _typing.Final[_typing.Optional[int]] = ...
    optFloatVal: _typing.Final[_typing.Optional[float]] = ...
    optDoubleVal: _typing.Final[_typing.Optional[float]] = ...
    optStringVal: _typing.Final[_typing.Optional[str]] = ...
    optBinaryVal: _typing.Final[_typing.Optional[bytes]] = ...
    optStructVal: _typing.Final[_typing.Optional[MyData]] = ...
    optListVal: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    optSetVal: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    optMapVal: _typing.Final[_typing.Optional[_typing.Mapping[str, str]]] = ...
    unionVal: _typing.Final[_typing.Optional[MyUnion]] = ...
    def __init__(
        self, *,
        boolVal: _typing.Optional[bool]=...,
        byteVal: _typing.Optional[int]=...,
        i16Val: _typing.Optional[int]=...,
        i32Val: _typing.Optional[int]=...,
        i64Val: _typing.Optional[int]=...,
        floatVal: _typing.Optional[float]=...,
        doubleVal: _typing.Optional[float]=...,
        stringVal: _typing.Optional[str]=...,
        binaryVal: _typing.Optional[bytes]=...,
        structVal: _typing.Optional[MyData]=...,
        optBoolVal: _typing.Optional[bool]=...,
        optByteVal: _typing.Optional[int]=...,
        optI16Val: _typing.Optional[int]=...,
        optI32Val: _typing.Optional[int]=...,
        optI64Val: _typing.Optional[int]=...,
        optFloatVal: _typing.Optional[float]=...,
        optDoubleVal: _typing.Optional[float]=...,
        optStringVal: _typing.Optional[str]=...,
        optBinaryVal: _typing.Optional[bytes]=...,
        optStructVal: _typing.Optional[MyData]=...,
        optListVal: _typing.Optional[_typing.Sequence[int]]=...,
        optSetVal: _typing.Optional[_typing.AbstractSet[str]]=...,
        optMapVal: _typing.Optional[_typing.Mapping[str, str]]=...,
        unionVal: _typing.Optional[MyUnion]=...
    ) -> None: ...

    def __call__(
        self, *,
        boolVal: _typing.Optional[bool]=...,
        byteVal: _typing.Optional[int]=...,
        i16Val: _typing.Optional[int]=...,
        i32Val: _typing.Optional[int]=...,
        i64Val: _typing.Optional[int]=...,
        floatVal: _typing.Optional[float]=...,
        doubleVal: _typing.Optional[float]=...,
        stringVal: _typing.Optional[str]=...,
        binaryVal: _typing.Optional[bytes]=...,
        structVal: _typing.Optional[MyData]=...,
        optBoolVal: _typing.Optional[bool]=...,
        optByteVal: _typing.Optional[int]=...,
        optI16Val: _typing.Optional[int]=...,
        optI32Val: _typing.Optional[int]=...,
        optI64Val: _typing.Optional[int]=...,
        optFloatVal: _typing.Optional[float]=...,
        optDoubleVal: _typing.Optional[float]=...,
        optStringVal: _typing.Optional[str]=...,
        optBinaryVal: _typing.Optional[bytes]=...,
        optStructVal: _typing.Optional[MyData]=...,
        optListVal: _typing.Optional[_typing.Sequence[int]]=...,
        optSetVal: _typing.Optional[_typing.AbstractSet[str]]=...,
        optMapVal: _typing.Optional[_typing.Mapping[str, str]]=...,
        unionVal: _typing.Optional[MyUnion]=...
    ) -> MyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, int, int, int, int, float, float, str, bytes, MyData, bool, int, int, int, int, float, float, str, bytes, MyData, _typing.Sequence[int], _typing.AbstractSet[str], _typing.Mapping[str, str], MyUnion]]]: ...


class MyDataPatch(_fbthrift_py3lite_types.Struct):
    data1: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]] = ...
    data2: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]] = ...
    def __init__(
        self, *,
        data1: _typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]=...,
        data2: _typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        data1: _typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]=...,
        data2: _typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]=...
    ) -> MyDataPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[facebook.thrift.op.patch.lite_types.StringPatch, facebook.thrift.op.patch.lite_types.I32Patch]]]: ...


class MyDataValuePatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[MyData]] = ...
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyDataPatch]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[MyData]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[MyData]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataPatch]=...
    ) -> MyDataValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyData, bool, MyDataPatch]]]: ...


class OptionalMyDataValuePatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyDataValuePatch]] = ...
    ensure: _typing.Final[_typing.Optional[MyData]] = ...
    patchAfter: _typing.Final[_typing.Optional[MyDataValuePatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataValuePatch]=...,
        ensure: _typing.Optional[MyData]=...,
        patchAfter: _typing.Optional[MyDataValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyDataValuePatch]=...,
        ensure: _typing.Optional[MyData]=...,
        patchAfter: _typing.Optional[MyDataValuePatch]=...
    ) -> OptionalMyDataValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyDataValuePatch, MyData, MyDataValuePatch]]]: ...


class MyUnionPatch(_fbthrift_py3lite_types.Struct):
    option1: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]] = ...
    option2: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]] = ...
    def __init__(
        self, *,
        option1: _typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]=...,
        option2: _typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        option1: _typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]=...,
        option2: _typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]=...
    ) -> MyUnionPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[facebook.thrift.op.patch.lite_types.StringPatch, facebook.thrift.op.patch.lite_types.I32Patch]]]: ...


class MyUnionValuePatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyUnionPatch]] = ...
    ensure: _typing.Final[_typing.Optional[MyUnion]] = ...
    patchAfter: _typing.Final[_typing.Optional[MyUnionPatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionPatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionPatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionPatch]=...
    ) -> MyUnionValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyUnionPatch, MyUnion, MyUnionPatch]]]: ...


class OptionalMyUnionValuePatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyUnionValuePatch]] = ...
    ensure: _typing.Final[_typing.Optional[MyUnion]] = ...
    patchAfter: _typing.Final[_typing.Optional[MyUnionValuePatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionValuePatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyUnionValuePatch]=...,
        ensure: _typing.Optional[MyUnion]=...,
        patchAfter: _typing.Optional[MyUnionValuePatch]=...
    ) -> OptionalMyUnionValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyUnionValuePatch, MyUnion, MyUnionValuePatch]]]: ...


class MyStructPatch(_fbthrift_py3lite_types.Struct):
    boolVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.BoolPatch]] = ...
    byteVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.BytePatch]] = ...
    i16Val: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.I16Patch]] = ...
    i32Val: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]] = ...
    i64Val: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.I64Patch]] = ...
    floatVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.FloatPatch]] = ...
    doubleVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.DoublePatch]] = ...
    stringVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]] = ...
    binaryVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.BinaryPatch]] = ...
    structVal: _typing.Final[_typing.Optional[MyDataValuePatch]] = ...
    optBoolVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBoolPatch]] = ...
    optByteVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBytePatch]] = ...
    optI16Val: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI16Patch]] = ...
    optI32Val: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI32Patch]] = ...
    optI64Val: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI64Patch]] = ...
    optFloatVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalFloatPatch]] = ...
    optDoubleVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalDoublePatch]] = ...
    optStringVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalStringPatch]] = ...
    optBinaryVal: _typing.Final[_typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBinaryPatch]] = ...
    optStructVal: _typing.Final[_typing.Optional[OptionalMyDataValuePatch]] = ...
    optListVal: _typing.Final[_typing.Optional[OptionalMyStructField21Patch]] = ...
    optSetVal: _typing.Final[_typing.Optional[OptionalMyStructField22Patch]] = ...
    optMapVal: _typing.Final[_typing.Optional[OptionalMyStructField23Patch]] = ...
    unionVal: _typing.Final[_typing.Optional[MyUnionValuePatch]] = ...
    def __init__(
        self, *,
        boolVal: _typing.Optional[facebook.thrift.op.patch.lite_types.BoolPatch]=...,
        byteVal: _typing.Optional[facebook.thrift.op.patch.lite_types.BytePatch]=...,
        i16Val: _typing.Optional[facebook.thrift.op.patch.lite_types.I16Patch]=...,
        i32Val: _typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]=...,
        i64Val: _typing.Optional[facebook.thrift.op.patch.lite_types.I64Patch]=...,
        floatVal: _typing.Optional[facebook.thrift.op.patch.lite_types.FloatPatch]=...,
        doubleVal: _typing.Optional[facebook.thrift.op.patch.lite_types.DoublePatch]=...,
        stringVal: _typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]=...,
        binaryVal: _typing.Optional[facebook.thrift.op.patch.lite_types.BinaryPatch]=...,
        structVal: _typing.Optional[MyDataValuePatch]=...,
        optBoolVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBoolPatch]=...,
        optByteVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBytePatch]=...,
        optI16Val: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI16Patch]=...,
        optI32Val: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI32Patch]=...,
        optI64Val: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI64Patch]=...,
        optFloatVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalFloatPatch]=...,
        optDoubleVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalDoublePatch]=...,
        optStringVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalStringPatch]=...,
        optBinaryVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBinaryPatch]=...,
        optStructVal: _typing.Optional[OptionalMyDataValuePatch]=...,
        optListVal: _typing.Optional[OptionalMyStructField21Patch]=...,
        optSetVal: _typing.Optional[OptionalMyStructField22Patch]=...,
        optMapVal: _typing.Optional[OptionalMyStructField23Patch]=...,
        unionVal: _typing.Optional[MyUnionValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        boolVal: _typing.Optional[facebook.thrift.op.patch.lite_types.BoolPatch]=...,
        byteVal: _typing.Optional[facebook.thrift.op.patch.lite_types.BytePatch]=...,
        i16Val: _typing.Optional[facebook.thrift.op.patch.lite_types.I16Patch]=...,
        i32Val: _typing.Optional[facebook.thrift.op.patch.lite_types.I32Patch]=...,
        i64Val: _typing.Optional[facebook.thrift.op.patch.lite_types.I64Patch]=...,
        floatVal: _typing.Optional[facebook.thrift.op.patch.lite_types.FloatPatch]=...,
        doubleVal: _typing.Optional[facebook.thrift.op.patch.lite_types.DoublePatch]=...,
        stringVal: _typing.Optional[facebook.thrift.op.patch.lite_types.StringPatch]=...,
        binaryVal: _typing.Optional[facebook.thrift.op.patch.lite_types.BinaryPatch]=...,
        structVal: _typing.Optional[MyDataValuePatch]=...,
        optBoolVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBoolPatch]=...,
        optByteVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBytePatch]=...,
        optI16Val: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI16Patch]=...,
        optI32Val: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI32Patch]=...,
        optI64Val: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalI64Patch]=...,
        optFloatVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalFloatPatch]=...,
        optDoubleVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalDoublePatch]=...,
        optStringVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalStringPatch]=...,
        optBinaryVal: _typing.Optional[facebook.thrift.op.patch.lite_types.OptionalBinaryPatch]=...,
        optStructVal: _typing.Optional[OptionalMyDataValuePatch]=...,
        optListVal: _typing.Optional[OptionalMyStructField21Patch]=...,
        optSetVal: _typing.Optional[OptionalMyStructField22Patch]=...,
        optMapVal: _typing.Optional[OptionalMyStructField23Patch]=...,
        unionVal: _typing.Optional[MyUnionValuePatch]=...
    ) -> MyStructPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[facebook.thrift.op.patch.lite_types.BoolPatch, facebook.thrift.op.patch.lite_types.BytePatch, facebook.thrift.op.patch.lite_types.I16Patch, facebook.thrift.op.patch.lite_types.I32Patch, facebook.thrift.op.patch.lite_types.I64Patch, facebook.thrift.op.patch.lite_types.FloatPatch, facebook.thrift.op.patch.lite_types.DoublePatch, facebook.thrift.op.patch.lite_types.StringPatch, facebook.thrift.op.patch.lite_types.BinaryPatch, MyDataValuePatch, facebook.thrift.op.patch.lite_types.OptionalBoolPatch, facebook.thrift.op.patch.lite_types.OptionalBytePatch, facebook.thrift.op.patch.lite_types.OptionalI16Patch, facebook.thrift.op.patch.lite_types.OptionalI32Patch, facebook.thrift.op.patch.lite_types.OptionalI64Patch, facebook.thrift.op.patch.lite_types.OptionalFloatPatch, facebook.thrift.op.patch.lite_types.OptionalDoublePatch, facebook.thrift.op.patch.lite_types.OptionalStringPatch, facebook.thrift.op.patch.lite_types.OptionalBinaryPatch, OptionalMyDataValuePatch, OptionalMyStructField21Patch, OptionalMyStructField22Patch, OptionalMyStructField23Patch, MyUnionValuePatch]]]: ...


class MyStructField21Patch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    clear: _typing.Final[_typing.Optional[bool]] = ...
    prepend: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    append: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[_typing.Sequence[int]]=...,
        clear: _typing.Optional[bool]=...,
        prepend: _typing.Optional[_typing.Sequence[int]]=...,
        append: _typing.Optional[_typing.Sequence[int]]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[_typing.Sequence[int]]=...,
        clear: _typing.Optional[bool]=...,
        prepend: _typing.Optional[_typing.Sequence[int]]=...,
        append: _typing.Optional[_typing.Sequence[int]]=...
    ) -> MyStructField21Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[int], bool, _typing.Sequence[int], _typing.Sequence[int]]]]: ...


class OptionalMyStructField21Patch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyStructField21Patch]] = ...
    ensure: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    patchAfter: _typing.Final[_typing.Optional[MyStructField21Patch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField21Patch]=...,
        ensure: _typing.Optional[_typing.Sequence[int]]=...,
        patchAfter: _typing.Optional[MyStructField21Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField21Patch]=...,
        ensure: _typing.Optional[_typing.Sequence[int]]=...,
        patchAfter: _typing.Optional[MyStructField21Patch]=...
    ) -> OptionalMyStructField21Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructField21Patch, _typing.Sequence[int], MyStructField21Patch]]]: ...


class MyStructField22Patch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    clear: _typing.Final[_typing.Optional[bool]] = ...
    remove: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    add: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[_typing.AbstractSet[str]]=...,
        clear: _typing.Optional[bool]=...,
        remove: _typing.Optional[_typing.AbstractSet[str]]=...,
        add: _typing.Optional[_typing.AbstractSet[str]]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[_typing.AbstractSet[str]]=...,
        clear: _typing.Optional[bool]=...,
        remove: _typing.Optional[_typing.AbstractSet[str]]=...,
        add: _typing.Optional[_typing.AbstractSet[str]]=...
    ) -> MyStructField22Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.AbstractSet[str], bool, _typing.AbstractSet[str], _typing.AbstractSet[str]]]]: ...


class OptionalMyStructField22Patch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyStructField22Patch]] = ...
    ensure: _typing.Final[_typing.Optional[_typing.AbstractSet[str]]] = ...
    patchAfter: _typing.Final[_typing.Optional[MyStructField22Patch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField22Patch]=...,
        ensure: _typing.Optional[_typing.AbstractSet[str]]=...,
        patchAfter: _typing.Optional[MyStructField22Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField22Patch]=...,
        ensure: _typing.Optional[_typing.AbstractSet[str]]=...,
        patchAfter: _typing.Optional[MyStructField22Patch]=...
    ) -> OptionalMyStructField22Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructField22Patch, _typing.AbstractSet[str], MyStructField22Patch]]]: ...


class MyStructField23Patch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[_typing.Mapping[str, str]]] = ...
    clear: _typing.Final[_typing.Optional[bool]] = ...
    put: _typing.Final[_typing.Optional[_typing.Mapping[str, str]]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[_typing.Mapping[str, str]]=...,
        clear: _typing.Optional[bool]=...,
        put: _typing.Optional[_typing.Mapping[str, str]]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[_typing.Mapping[str, str]]=...,
        clear: _typing.Optional[bool]=...,
        put: _typing.Optional[_typing.Mapping[str, str]]=...
    ) -> MyStructField23Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[str, str], bool, _typing.Mapping[str, str]]]]: ...


class OptionalMyStructField23Patch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyStructField23Patch]] = ...
    ensure: _typing.Final[_typing.Optional[_typing.Mapping[str, str]]] = ...
    patchAfter: _typing.Final[_typing.Optional[MyStructField23Patch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField23Patch]=...,
        ensure: _typing.Optional[_typing.Mapping[str, str]]=...,
        patchAfter: _typing.Optional[MyStructField23Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructField23Patch]=...,
        ensure: _typing.Optional[_typing.Mapping[str, str]]=...,
        patchAfter: _typing.Optional[MyStructField23Patch]=...
    ) -> OptionalMyStructField23Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructField23Patch, _typing.Mapping[str, str], MyStructField23Patch]]]: ...


class MyStructValuePatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[MyStruct]] = ...
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyStructPatch]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[MyStruct]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[MyStruct]=...,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructPatch]=...
    ) -> MyStructValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyStruct, bool, MyStructPatch]]]: ...


class OptionalMyStructValuePatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[MyStructValuePatch]] = ...
    ensure: _typing.Final[_typing.Optional[MyStruct]] = ...
    patchAfter: _typing.Final[_typing.Optional[MyStructValuePatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructValuePatch]=...,
        ensure: _typing.Optional[MyStruct]=...,
        patchAfter: _typing.Optional[MyStructValuePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[MyStructValuePatch]=...,
        ensure: _typing.Optional[MyStruct]=...,
        patchAfter: _typing.Optional[MyStructValuePatch]=...
    ) -> OptionalMyStructValuePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, MyStructValuePatch, MyStruct, MyStructValuePatch]]]: ...