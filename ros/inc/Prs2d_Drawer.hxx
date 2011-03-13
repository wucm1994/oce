// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_Drawer_HeaderFile
#define _Prs2d_Drawer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_Drawer_HeaderFile
#include <Handle_Prs2d_Drawer.hxx>
#endif

#ifndef _Prs2d_DataMapOfAspectRoot_HeaderFile
#include <Prs2d_DataMapOfAspectRoot.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Prs2d_AspectRoot_HeaderFile
#include <Handle_Prs2d_AspectRoot.hxx>
#endif
#ifndef _Prs2d_AspectName_HeaderFile
#include <Prs2d_AspectName.hxx>
#endif
class Prs2d_AspectRoot;


//! Graphic attributes management <br>
//!           Qualifies how the presentation algorithms compute <br>
//!           the presentation of a specific kind of object. <br>
//!           This includes for example color, width and type <br>
//!           of lines... <br>
class Prs2d_Drawer : public MMgt_TShared {

public:

  //! Initializes graphic attribute manager <br>
  Standard_EXPORT   Prs2d_Drawer();
  //! Returns a link with Prs2d_Drawer AspectName, <br>
//!          which provides settings for object "anAspectName" <br>
//!          used to display "anAspectName" <br>
  Standard_EXPORT   virtual  Handle_Prs2d_AspectRoot FindAspect(const Prs2d_AspectName anAspectName) const;
  //! Sets the Aspect <anAspectRoot> of the Drawer <br>
  Standard_EXPORT     void SetAspect(const Handle(Prs2d_AspectRoot)& anAspectRoot,const Prs2d_AspectName anAspectName) ;
  //! defines the maximum value allowed for the first and last <br>
//!          parameters of an infinite line. <br>
//!          Default value: 500000. <br>
  Standard_EXPORT   virtual  void SetMaxParameterValue(const Standard_Real Value) ;
  //! Indicates the maximum value allowed for the first and last <br>
//!          parameters of an infinite line. <br>
  Standard_EXPORT   virtual  Standard_Real MaxParameterValue() const;




  DEFINE_STANDARD_RTTI(Prs2d_Drawer)

protected:


Prs2d_DataMapOfAspectRoot myDataMapAspectRoot;
Standard_Real myMaxParameterValue;


private: 

  //! Initializes Aspect classes data map <br>
  Standard_EXPORT     void InitAspectRootMap() ;



};





// other Inline functions and methods (like "C++: function call" methods)


#endif