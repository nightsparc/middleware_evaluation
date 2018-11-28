// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p15
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:376


#include "DDSPerfTestC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "DDSPerfTestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:73

#if !defined (_DDSPERFTEST_BUFFERTYPE_CS_)
#define _DDSPERFTEST_BUFFERTYPE_CS_

DDSPerfTest::BufferType::BufferType (void)
{}

DDSPerfTest::BufferType::BufferType (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (max)
{}

DDSPerfTest::BufferType::BufferType (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      >
    (max, length, buffer, release)
{}

DDSPerfTest::BufferType::BufferType (
    const BufferType &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (seq)
{}

DDSPerfTest::BufferType::~BufferType (void)
{}

void DDSPerfTest::BufferType::_tao_any_destructor (
    void * _tao_void_pointer)
{
  BufferType * _tao_tmp_pointer =
    static_cast<BufferType *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:51



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464


#ifndef _TAO_TYPECODE_DDSPerfTest_BufferType_GUARD
#define _TAO_TYPECODE_DDSPerfTest_BufferType_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        DDSPerfTest_BufferType_0 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_octet,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_DDSPerfTest_BufferType_0 =
        &DDSPerfTest_BufferType_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_DDSPerfTest_BufferType_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_DDSPerfTest_BufferType (
    ::CORBA::tk_alias,
    "IDL:DDSPerfTest/BufferType:1.0",
    "BufferType",
    &TAO::TypeCode::tc_DDSPerfTest_BufferType_0);
  

namespace DDSPerfTest
{
  ::CORBA::TypeCode_ptr const _tc_BufferType =
    &_tao_tc_DDSPerfTest_BufferType;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:464

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_DDSPerfTest_PubMessage[] =
      {
        { "buffer", &DDSPerfTest::_tc_BufferType }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_DDSPerfTest_PubMessage (
  ::CORBA::tk_struct,
  "IDL:DDSPerfTest/PubMessage:1.0",
  "PubMessage",
  _tao_fields_DDSPerfTest_PubMessage,
  1);


namespace DDSPerfTest
{
  ::CORBA::TypeCode_ptr const _tc_PubMessage =
    &_tao_tc_DDSPerfTest_PubMessage;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
DDSPerfTest::PubMessage::_tao_any_destructor (
    void *_tao_void_pointer)
{
  PubMessage *_tao_tmp_pointer =
    static_cast<PubMessage *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:88

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_DDSPerfTest_AckMessage[] =
      {
        { "size", &CORBA::_tc_long }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_DDSPerfTest_AckMessage (
  ::CORBA::tk_struct,
  "IDL:DDSPerfTest/AckMessage:1.0",
  "AckMessage",
  _tao_fields_DDSPerfTest_AckMessage,
  1);


namespace DDSPerfTest
{
  ::CORBA::TypeCode_ptr const _tc_AckMessage =
    &_tao_tc_DDSPerfTest_AckMessage;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:59

void
DDSPerfTest::AckMessage::_tao_any_destructor (
    void *_tao_void_pointer)
{
  AckMessage *_tao_tmp_pointer =
    static_cast<AckMessage *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:48


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DDSPerfTest
{
  
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::DDSPerfTest::BufferType &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::DDSPerfTest::BufferType>::insert_copy (
        _tao_any,
        ::DDSPerfTest::BufferType::_tao_any_destructor,
        ::DDSPerfTest::_tc_BufferType,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::DDSPerfTest::BufferType *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::DDSPerfTest::BufferType>::insert (
      _tao_any,
      ::DDSPerfTest::BufferType::_tao_any_destructor,
      ::DDSPerfTest::_tc_BufferType,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::DDSPerfTest::BufferType *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::DDSPerfTest::BufferType *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::DDSPerfTest::BufferType *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::DDSPerfTest::BufferType>::extract (
        _tao_any,
        ::DDSPerfTest::BufferType::_tao_any_destructor,
        ::DDSPerfTest::_tc_BufferType,
        _tao_elem
      );
}
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const DDSPerfTest::BufferType &_tao_elem)
{
  TAO::Any_Dual_Impl_T<DDSPerfTest::BufferType>::insert_copy (
      _tao_any,
      DDSPerfTest::BufferType::_tao_any_destructor,
      DDSPerfTest::_tc_BufferType,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    DDSPerfTest::BufferType *_tao_elem)
{
  TAO::Any_Dual_Impl_T<DDSPerfTest::BufferType>::insert (
      _tao_any,
      DDSPerfTest::BufferType::_tao_any_destructor,
      DDSPerfTest::_tc_BufferType,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    DDSPerfTest::BufferType *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const DDSPerfTest::BufferType *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const DDSPerfTest::BufferType *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<DDSPerfTest::BufferType>::extract (
        _tao_any,
        DDSPerfTest::BufferType::_tao_any_destructor,
        DDSPerfTest::_tc_BufferType,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DDSPerfTest
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::DDSPerfTest::PubMessage &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::DDSPerfTest::PubMessage>::insert_copy (
        _tao_any,
        ::DDSPerfTest::PubMessage::_tao_any_destructor,
        ::DDSPerfTest::_tc_PubMessage,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    DDSPerfTest::PubMessage *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::DDSPerfTest::PubMessage>::insert (
      _tao_any,
      ::DDSPerfTest::PubMessage::_tao_any_destructor,
      ::DDSPerfTest::_tc_PubMessage,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::DDSPerfTest::PubMessage *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::DDSPerfTest::PubMessage *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::DDSPerfTest::PubMessage *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::DDSPerfTest::PubMessage>::extract (
        _tao_any,
        ::DDSPerfTest::PubMessage::_tao_any_destructor,
        ::DDSPerfTest::_tc_PubMessage,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const DDSPerfTest::PubMessage &_tao_elem)
{
  TAO::Any_Dual_Impl_T<DDSPerfTest::PubMessage>::insert_copy (
    _tao_any,
    DDSPerfTest::PubMessage::_tao_any_destructor,
    DDSPerfTest::_tc_PubMessage,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  DDSPerfTest::PubMessage *_tao_elem)
{
  TAO::Any_Dual_Impl_T<DDSPerfTest::PubMessage>::insert (
    _tao_any,
    DDSPerfTest::PubMessage::_tao_any_destructor,
    DDSPerfTest::_tc_PubMessage,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  DDSPerfTest::PubMessage *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const DDSPerfTest::PubMessage *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const DDSPerfTest::PubMessage *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<DDSPerfTest::PubMessage>::extract (
      _tao_any,
      DDSPerfTest::PubMessage::_tao_any_destructor,
      DDSPerfTest::_tc_PubMessage,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DDSPerfTest
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::DDSPerfTest::AckMessage &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::DDSPerfTest::AckMessage>::insert_copy (
        _tao_any,
        ::DDSPerfTest::AckMessage::_tao_any_destructor,
        ::DDSPerfTest::_tc_AckMessage,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    DDSPerfTest::AckMessage *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::DDSPerfTest::AckMessage>::insert (
      _tao_any,
      ::DDSPerfTest::AckMessage::_tao_any_destructor,
      ::DDSPerfTest::_tc_AckMessage,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::DDSPerfTest::AckMessage *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::DDSPerfTest::AckMessage *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::DDSPerfTest::AckMessage *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::DDSPerfTest::AckMessage>::extract (
        _tao_any,
        ::DDSPerfTest::AckMessage::_tao_any_destructor,
        ::DDSPerfTest::_tc_AckMessage,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const DDSPerfTest::AckMessage &_tao_elem)
{
  TAO::Any_Dual_Impl_T<DDSPerfTest::AckMessage>::insert_copy (
    _tao_any,
    DDSPerfTest::AckMessage::_tao_any_destructor,
    DDSPerfTest::_tc_AckMessage,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  DDSPerfTest::AckMessage *_tao_elem)
{
  TAO::Any_Dual_Impl_T<DDSPerfTest::AckMessage>::insert (
    _tao_any,
    DDSPerfTest::AckMessage::_tao_any_destructor,
    DDSPerfTest::_tc_AckMessage,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  DDSPerfTest::AckMessage *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const DDSPerfTest::AckMessage *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const DDSPerfTest::AckMessage *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<DDSPerfTest::AckMessage>::extract (
      _tao_any,
      DDSPerfTest::AckMessage::_tao_any_destructor,
      DDSPerfTest::_tc_AckMessage,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_DDSPerfTest_BufferType_CPP_
#define _TAO_CDR_OP_DDSPerfTest_BufferType_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const DDSPerfTest::BufferType &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    DDSPerfTest::BufferType &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_DDSPerfTest_BufferType_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const DDSPerfTest::PubMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.buffer);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    DDSPerfTest::PubMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.buffer);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const DDSPerfTest::AckMessage &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.size);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    DDSPerfTest::AckMessage &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.size);
}

TAO_END_VERSIONED_NAMESPACE_DECL


