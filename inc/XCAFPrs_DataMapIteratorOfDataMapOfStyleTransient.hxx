// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient_HeaderFile
#define _XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_XCAFPrs_DataMapNodeOfDataMapOfStyleTransient.hxx>
class Standard_NoSuchObject;
class XCAFPrs_Style;
class Standard_Transient;
class XCAFPrs_DataMapOfStyleTransient;
class XCAFPrs_DataMapNodeOfDataMapOfStyleTransient;



class XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient();
  
  Standard_EXPORT XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient(const XCAFPrs_DataMapOfStyleTransient& aMap);
  
  Standard_EXPORT   void Initialize (const XCAFPrs_DataMapOfStyleTransient& aMap) ;
  
  Standard_EXPORT  const  XCAFPrs_Style& Key()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Value()  const;




protected:





private:





};







#endif // _XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient_HeaderFile
