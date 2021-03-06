// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TDF_SequenceNodeOfAttributeSequence.hxx>

#include <Standard_Type.hxx>

#include <TDF_Attribute.hxx>
#include <TDF_AttributeSequence.hxx>

 


IMPLEMENT_STANDARD_TYPE(TDF_SequenceNodeOfAttributeSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_SeqNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDF_SequenceNodeOfAttributeSequence)


IMPLEMENT_DOWNCAST(TDF_SequenceNodeOfAttributeSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDF_SequenceNodeOfAttributeSequence)


#define SeqItem Handle(TDF_Attribute)
#define SeqItem_hxx <TDF_Attribute.hxx>
#define TCollection_SequenceNode TDF_SequenceNodeOfAttributeSequence
#define TCollection_SequenceNode_hxx <TDF_SequenceNodeOfAttributeSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_TDF_SequenceNodeOfAttributeSequence
#define TCollection_SequenceNode_Type_() TDF_SequenceNodeOfAttributeSequence_Type_()
#define TCollection_Sequence TDF_AttributeSequence
#define TCollection_Sequence_hxx <TDF_AttributeSequence.hxx>
#include <TCollection_SequenceNode.gxx>

