/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_types.h"

namespace cpp2 {

struct module_constants {

  static ::cpp2::StructWithRef const& kStructWithRef();

  static ::cpp2::StructWithRefTypeUnique const& kStructWithRefTypeUnique();

  static ::cpp2::StructWithRefTypeShared const& kStructWithRefTypeShared();

  static ::cpp2::StructWithRefTypeSharedConst const& kStructWithRefTypeSharedConst();

};

} // cpp2
