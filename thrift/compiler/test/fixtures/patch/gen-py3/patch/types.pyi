#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import facebook.thrift.annotation.scope.types as _facebook_thrift_annotation_scope_types
import facebook.thrift.annotation.thrift.thrift.types as _facebook_thrift_annotation_thrift_thrift_types


__property__ = property


class GeneratePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> GeneratePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['GeneratePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'GeneratePatch') -> bool: ...
    def __gt__(self, other: 'GeneratePatch') -> bool: ...
    def __le__(self, other: 'GeneratePatch') -> bool: ...
    def __ge__(self, other: 'GeneratePatch') -> bool: ...


class BoolPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        invert: bool
        pass

    assign: Final[_typing.Optional[bool]] = ...

    invert: Final[bool] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[bool]=None,
        invert: _typing.Optional[bool]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[bool, __NotSet, None]=NOTSET,
        invert: _typing.Union[bool, __NotSet, None]=NOTSET
    ) -> BoolPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['BoolPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'BoolPatch') -> bool: ...
    def __gt__(self, other: 'BoolPatch') -> bool: ...
    def __le__(self, other: 'BoolPatch') -> bool: ...
    def __ge__(self, other: 'BoolPatch') -> bool: ...


class OptionalBoolPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        clear: bool
        patch: bool
        ensure: bool
        patchAfter: bool
        pass

    clear: Final[bool] = ...

    patch: Final[BoolPatch] = ...

    ensure: Final[_typing.Optional[bool]] = ...

    patchAfter: Final[BoolPatch] = ...

    def __init__(
        self, *,
        clear: _typing.Optional[bool]=None,
        patch: _typing.Optional[BoolPatch]=None,
        ensure: _typing.Optional[bool]=None,
        patchAfter: _typing.Optional[BoolPatch]=None
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Union[bool, __NotSet, None]=NOTSET,
        patch: _typing.Union[BoolPatch, __NotSet, None]=NOTSET,
        ensure: _typing.Union[bool, __NotSet, None]=NOTSET,
        patchAfter: _typing.Union[BoolPatch, __NotSet, None]=NOTSET
    ) -> OptionalBoolPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['OptionalBoolPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'OptionalBoolPatch') -> bool: ...
    def __gt__(self, other: 'OptionalBoolPatch') -> bool: ...
    def __le__(self, other: 'OptionalBoolPatch') -> bool: ...
    def __ge__(self, other: 'OptionalBoolPatch') -> bool: ...


class BytePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        add: bool
        pass

    assign: Final[_typing.Optional[int]] = ...

    add: Final[int] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[int]=None,
        add: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[int, __NotSet, None]=NOTSET,
        add: _typing.Union[int, __NotSet, None]=NOTSET
    ) -> BytePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['BytePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'BytePatch') -> bool: ...
    def __gt__(self, other: 'BytePatch') -> bool: ...
    def __le__(self, other: 'BytePatch') -> bool: ...
    def __ge__(self, other: 'BytePatch') -> bool: ...


class I16Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        add: bool
        pass

    assign: Final[_typing.Optional[int]] = ...

    add: Final[int] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[int]=None,
        add: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[int, __NotSet, None]=NOTSET,
        add: _typing.Union[int, __NotSet, None]=NOTSET
    ) -> I16Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['I16Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'I16Patch') -> bool: ...
    def __gt__(self, other: 'I16Patch') -> bool: ...
    def __le__(self, other: 'I16Patch') -> bool: ...
    def __ge__(self, other: 'I16Patch') -> bool: ...


class I32Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        add: bool
        pass

    assign: Final[_typing.Optional[int]] = ...

    add: Final[int] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[int]=None,
        add: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[int, __NotSet, None]=NOTSET,
        add: _typing.Union[int, __NotSet, None]=NOTSET
    ) -> I32Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['I32Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'I32Patch') -> bool: ...
    def __gt__(self, other: 'I32Patch') -> bool: ...
    def __le__(self, other: 'I32Patch') -> bool: ...
    def __ge__(self, other: 'I32Patch') -> bool: ...


class I64Patch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        add: bool
        pass

    assign: Final[_typing.Optional[int]] = ...

    add: Final[int] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[int]=None,
        add: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[int, __NotSet, None]=NOTSET,
        add: _typing.Union[int, __NotSet, None]=NOTSET
    ) -> I64Patch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['I64Patch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'I64Patch') -> bool: ...
    def __gt__(self, other: 'I64Patch') -> bool: ...
    def __le__(self, other: 'I64Patch') -> bool: ...
    def __ge__(self, other: 'I64Patch') -> bool: ...


class FloatPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        add: bool
        pass

    assign: Final[_typing.Optional[float]] = ...

    add: Final[float] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[float]=None,
        add: _typing.Optional[float]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[float, __NotSet, None]=NOTSET,
        add: _typing.Union[float, __NotSet, None]=NOTSET
    ) -> FloatPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['FloatPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'FloatPatch') -> bool: ...
    def __gt__(self, other: 'FloatPatch') -> bool: ...
    def __le__(self, other: 'FloatPatch') -> bool: ...
    def __ge__(self, other: 'FloatPatch') -> bool: ...


class DoublePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        add: bool
        pass

    assign: Final[_typing.Optional[float]] = ...

    add: Final[float] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[float]=None,
        add: _typing.Optional[float]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[float, __NotSet, None]=NOTSET,
        add: _typing.Union[float, __NotSet, None]=NOTSET
    ) -> DoublePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['DoublePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'DoublePatch') -> bool: ...
    def __gt__(self, other: 'DoublePatch') -> bool: ...
    def __le__(self, other: 'DoublePatch') -> bool: ...
    def __ge__(self, other: 'DoublePatch') -> bool: ...


class StringPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        append: bool
        prepend: bool
        pass

    assign: Final[_typing.Optional[str]] = ...

    append: Final[str] = ...

    prepend: Final[str] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[str]=None,
        append: _typing.Optional[str]=None,
        prepend: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[str, __NotSet, None]=NOTSET,
        append: _typing.Union[str, __NotSet, None]=NOTSET,
        prepend: _typing.Union[str, __NotSet, None]=NOTSET
    ) -> StringPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['StringPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'StringPatch') -> bool: ...
    def __gt__(self, other: 'StringPatch') -> bool: ...
    def __le__(self, other: 'StringPatch') -> bool: ...
    def __ge__(self, other: 'StringPatch') -> bool: ...


class BinaryPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        assign: bool
        pass

    assign: Final[_typing.Optional[bytes]] = ...

    def __init__(
        self, *,
        assign: _typing.Optional[bytes]=None
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Union[bytes, __NotSet, None]=NOTSET
    ) -> BinaryPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['BinaryPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'BinaryPatch') -> bool: ...
    def __gt__(self, other: 'BinaryPatch') -> bool: ...
    def __le__(self, other: 'BinaryPatch') -> bool: ...
    def __ge__(self, other: 'BinaryPatch') -> bool: ...


