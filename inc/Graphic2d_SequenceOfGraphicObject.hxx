// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_SequenceOfGraphicObject_HeaderFile
#define _Graphic2d_SequenceOfGraphicObject_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Graphic2d_SequenceNodeOfSequenceOfGraphicObject_HeaderFile
#include <Handle_Graphic2d_SequenceNodeOfSequenceOfGraphicObject.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Graphic2d_GraphicObject;
class Graphic2d_SequenceNodeOfSequenceOfGraphicObject;



class Graphic2d_SequenceOfGraphicObject  : public TCollection_BaseSequence {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
      Graphic2d_SequenceOfGraphicObject();
  
  Standard_EXPORT     void Clear() ;
~Graphic2d_SequenceOfGraphicObject()
{
  Clear();
}
  
  Standard_EXPORT    const Graphic2d_SequenceOfGraphicObject& Assign(const Graphic2d_SequenceOfGraphicObject& Other) ;
   const Graphic2d_SequenceOfGraphicObject& operator =(const Graphic2d_SequenceOfGraphicObject& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Graphic2d_GraphicObject)& T) ;
  
        void Append(Graphic2d_SequenceOfGraphicObject& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic2d_GraphicObject)& T) ;
  
        void Prepend(Graphic2d_SequenceOfGraphicObject& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Graphic2d_GraphicObject)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Graphic2d_SequenceOfGraphicObject& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Graphic2d_GraphicObject)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Graphic2d_SequenceOfGraphicObject& S) ;
  
  Standard_EXPORT    const Handle_Graphic2d_GraphicObject& First() const;
  
  Standard_EXPORT    const Handle_Graphic2d_GraphicObject& Last() const;
  
        void Split(const Standard_Integer Index,Graphic2d_SequenceOfGraphicObject& Sub) ;
  
  Standard_EXPORT    const Handle_Graphic2d_GraphicObject& Value(const Standard_Integer Index) const;
   const Handle_Graphic2d_GraphicObject& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Graphic2d_GraphicObject)& I) ;
  
  Standard_EXPORT     Handle_Graphic2d_GraphicObject& ChangeValue(const Standard_Integer Index) ;
    Handle_Graphic2d_GraphicObject& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Graphic2d_SequenceOfGraphicObject(const Graphic2d_SequenceOfGraphicObject& Other);




};

#define SeqItem Handle_Graphic2d_GraphicObject
#define SeqItem_hxx <Graphic2d_GraphicObject.hxx>
#define TCollection_SequenceNode Graphic2d_SequenceNodeOfSequenceOfGraphicObject
#define TCollection_SequenceNode_hxx <Graphic2d_SequenceNodeOfSequenceOfGraphicObject.hxx>
#define Handle_TCollection_SequenceNode Handle_Graphic2d_SequenceNodeOfSequenceOfGraphicObject
#define TCollection_SequenceNode_Type_() Graphic2d_SequenceNodeOfSequenceOfGraphicObject_Type_()
#define TCollection_Sequence Graphic2d_SequenceOfGraphicObject
#define TCollection_Sequence_hxx <Graphic2d_SequenceOfGraphicObject.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif