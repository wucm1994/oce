// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Array1OfFaceBound_HeaderFile
#define _StepShape_Array1OfFaceBound_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepShape_FaceBound.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_FaceBound;



class StepShape_Array1OfFaceBound 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepShape_Array1OfFaceBound(const Standard_Integer Low, const Standard_Integer Up);
  
    StepShape_Array1OfFaceBound(const Handle(StepShape_FaceBound)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepShape_FaceBound)& V) ;
  
      void Destroy() ;
~StepShape_Array1OfFaceBound()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepShape_Array1OfFaceBound& Assign (const StepShape_Array1OfFaceBound& Other) ;
 const  StepShape_Array1OfFaceBound& operator = (const StepShape_Array1OfFaceBound& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepShape_FaceBound)& Value) ;
  
     const  Handle(StepShape_FaceBound)& Value (const Standard_Integer Index)  const;
   const  Handle(StepShape_FaceBound)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepShape_FaceBound)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepShape_FaceBound)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepShape_Array1OfFaceBound(const StepShape_Array1OfFaceBound& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepShape_FaceBound)
#define Array1Item_hxx <StepShape_FaceBound.hxx>
#define TCollection_Array1 StepShape_Array1OfFaceBound
#define TCollection_Array1_hxx <StepShape_Array1OfFaceBound.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepShape_Array1OfFaceBound_HeaderFile
