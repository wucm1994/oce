// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_SeamEdge_HeaderFile
#define _StepShape_SeamEdge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_SeamEdge_HeaderFile
#include <Handle_StepShape_SeamEdge.hxx>
#endif

#ifndef _Handle_StepGeom_Pcurve_HeaderFile
#include <Handle_StepGeom_Pcurve.hxx>
#endif
#ifndef _StepShape_OrientedEdge_HeaderFile
#include <StepShape_OrientedEdge.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepShape_Edge_HeaderFile
#include <Handle_StepShape_Edge.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StepGeom_Pcurve;
class TCollection_HAsciiString;
class StepShape_Edge;


//! Representation of STEP entity SeamEdge <br>
class StepShape_SeamEdge : public StepShape_OrientedEdge {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_SeamEdge();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Handle(StepShape_Edge)& aOrientedEdge_EdgeElement,const Standard_Boolean aOrientedEdge_Orientation,const Handle(StepGeom_Pcurve)& aPcurveReference) ;
  //! Returns field PcurveReference <br>
  Standard_EXPORT     Handle_StepGeom_Pcurve PcurveReference() const;
  //! Set field PcurveReference <br>
  Standard_EXPORT     void SetPcurveReference(const Handle(StepGeom_Pcurve)& PcurveReference) ;




  DEFINE_STANDARD_RTTI(StepShape_SeamEdge)

protected:




private: 


Handle_StepGeom_Pcurve thePcurveReference;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif