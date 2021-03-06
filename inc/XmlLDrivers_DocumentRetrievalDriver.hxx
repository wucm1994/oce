// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlLDrivers_DocumentRetrievalDriver_HeaderFile
#define _XmlLDrivers_DocumentRetrievalDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XmlLDrivers_DocumentRetrievalDriver.hxx>

#include <Handle_XmlMDF_ADriverTable.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <TCollection_ExtendedString.hxx>
#include <PCDM_RetrievalDriver.hxx>
#include <Handle_PCDM_Document.hxx>
#include <Handle_CDM_Document.hxx>
#include <Handle_CDM_Application.hxx>
#include <XmlObjMgt_Element.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_XmlMDF_ADriver.hxx>
#include <Standard_Integer.hxx>
class XmlMDF_ADriverTable;
class TCollection_ExtendedString;
class PCDM_Document;
class CDM_Document;
class CDM_Application;
class CDM_MessageDriver;
class XmlMDF_ADriver;



class XmlLDrivers_DocumentRetrievalDriver : public PCDM_RetrievalDriver
{

public:

  
  Standard_EXPORT XmlLDrivers_DocumentRetrievalDriver();
  
  Standard_EXPORT virtual   TCollection_ExtendedString SchemaName()  const;
  
  Standard_EXPORT virtual   void Make (const Handle(PCDM_Document)& PD, const Handle(CDM_Document)& TD) ;
  
  Standard_EXPORT virtual   Handle(CDM_Document) CreateDocument() ;
  
  Standard_EXPORT virtual   void Read (const TCollection_ExtendedString& theFileName, const Handle(CDM_Document)& theNewDocument, const Handle(CDM_Application)& theApplication) ;
  
  Standard_EXPORT virtual   Handle(XmlMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(XmlLDrivers_DocumentRetrievalDriver)

protected:

  
  Standard_EXPORT virtual   void ReadFromDomDocument (const XmlObjMgt_Element& theDomElement, const Handle(CDM_Document)& theNewDocument, const Handle(CDM_Application)& theApplication) ;
  
  Standard_EXPORT virtual   Standard_Boolean MakeDocument (const XmlObjMgt_Element& thePDoc, const Handle(CDM_Document)& theTDoc) ;
  
  Standard_EXPORT virtual   Handle(XmlMDF_ADriver) ReadShapeSection (const XmlObjMgt_Element& thePDoc, const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT virtual   void ShapeSetCleaning (const Handle(XmlMDF_ADriver)& theDriver) ;
  
  Standard_EXPORT virtual   void PropagateDocumentVersion (const Standard_Integer theDocVersion) ;

  Handle(XmlMDF_ADriverTable) myDrivers;
  XmlObjMgt_RRelocationTable myRelocTable;
  TCollection_ExtendedString myFileName;


private: 




};







#endif // _XmlLDrivers_DocumentRetrievalDriver_HeaderFile
