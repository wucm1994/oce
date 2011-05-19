// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_TreeNode_HeaderFile
#define _TDataStd_TreeNode_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_TreeNode_HeaderFile
#include <Handle_TDataStd_TreeNode.hxx>
#endif

#ifndef _TDataStd_PtrTreeNode_HeaderFile
#include <TDataStd_PtrTreeNode.hxx>
#endif
#ifndef _Standard_GUID_HeaderFile
#include <Standard_GUID.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TDF_AttributeDelta_HeaderFile
#include <Handle_TDF_AttributeDelta.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Handle_TDF_DataSet_HeaderFile
#include <Handle_TDF_DataSet.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TDataStd_ChildNodeIterator;
class TDF_Label;
class Standard_GUID;
class TDF_AttributeDelta;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! Allows you to define an explicit tree of labels <br>
//! which you can also edit. <br>
//! Without this class, the data structure cannot be fully edited. <br>
//! This service is required if for presentation <br>
//! purposes, you want to create an application with <br>
//! a tree which allows you to organize and link data <br>
//! as a function of application features. <br>
class TDataStd_TreeNode : public TDF_Attribute {

public:

  //! class  methods working on the node <br>
//!          =================================== <br>//!  Returns true if the tree node T is found on the label L. <br>
//!           Otherwise, false is returned. <br>
  Standard_EXPORT   static  Standard_Boolean Find(const TDF_Label& L,Handle(TDataStd_TreeNode)& T) ;
  //! Finds or Creates a TreeNode attribute on the label <L> <br>
//!           with  the  default tree  ID,   returned by the method <br>
//!          <GetDefaultTreeID>.  Returns the created/found     TreeNode <br>
//!          attribute. <br>
  Standard_EXPORT   static  Handle_TDataStd_TreeNode Set(const TDF_Label& L) ;
  //! Finds  or Creates a   TreeNode attribute on  the label <br>
//!          <L>, with an   explicit tree ID.  <ExplicitTreeID>  is <br>
//!          the  ID   returned by    <TDF_Attribute::ID>   method. <br>
//!          Returns the found/created TreeNode attribute. <br>
  Standard_EXPORT   static  Handle_TDataStd_TreeNode Set(const TDF_Label& L,const Standard_GUID& ExplicitTreeID) ;
  //!  returns a default  tree ID.  this  ID is  used by the <br>
//!          <Set> method without explicit tree ID. <br>//! Instance methods: <br>
//!          ================ <br>
  Standard_EXPORT   static const Standard_GUID& GetDefaultTreeID() ;
  
  Standard_EXPORT   TDataStd_TreeNode();
  //! Insert the TreeNode <Child> as last  child of <me>. If <br>
//!         the insertion is successful <me> becomes the Father of <Child>. <br>
  Standard_EXPORT     Standard_Boolean Append(const Handle(TDataStd_TreeNode)& Child) ;
  //!  Insert the   the TreeNode <Child>  as  first child of <br>
//!          <me>. If the insertion is successful <me> becomes the Father of <Child> <br>
  Standard_EXPORT     Standard_Boolean Prepend(const Handle(TDataStd_TreeNode)& Child) ;
  //! Inserts the TreeNode  <Node> before <me>. If insertion is successful <me> <br>
//!          and <Node> belongs to the same Father. <br>
  Standard_EXPORT     Standard_Boolean InsertBefore(const Handle(TDataStd_TreeNode)& Node) ;
  //! Inserts the TreeNode <Node>  after <me>. If insertion is successful  <me> <br>
//!          and <Node> belongs to the same Father. <br>
  Standard_EXPORT     Standard_Boolean InsertAfter(const Handle(TDataStd_TreeNode)& Node) ;
  //! Removes this tree node attribute from its father <br>
//!          node. The result is that this attribute becomes a root node. <br>
  Standard_EXPORT     Standard_Boolean Remove() ;
  //!  Returns the depth of this tree node in the overall tree node structure. <br>
//!           In other words, the number of father tree nodes of this one is returned. <br>
  Standard_EXPORT     Standard_Integer Depth() const;
  //!  Returns the number of child nodes. <br>
//!           If <allLevels> is true, the method counts children of all levels <br>
//!           (children of children ...) <br>
  Standard_EXPORT     Standard_Integer NbChildren(const Standard_Boolean allLevels = Standard_False) const;
  //! Returns true if this tree node attribute is an <br>
//!          ascendant of of. In other words, if it is a father or <br>
//!          the father of a father of of. <br>
  Standard_EXPORT     Standard_Boolean IsAscendant(const Handle(TDataStd_TreeNode)& of) const;
  //! Returns true if this tree node attribute is a <br>
//!          descendant of of. In other words, if it is a child or <br>
//!          the child of a child of of. <br>
  Standard_EXPORT     Standard_Boolean IsDescendant(const Handle(TDataStd_TreeNode)& of) const;
  //! Returns true if this tree node attribute is the <br>
//!          ultimate father in the tree. <br>
  Standard_EXPORT     Standard_Boolean IsRoot() const;
  //! Returns the ultimate father of this tree node attribute. <br>
  Standard_EXPORT     Handle_TDataStd_TreeNode Root() const;
  //! Returns true if this tree node attribute is a father of of. <br>
  Standard_EXPORT     Standard_Boolean IsFather(const Handle(TDataStd_TreeNode)& of) const;
  //! Returns true if this tree node attribute is a child of of. <br>
  Standard_EXPORT     Standard_Boolean IsChild(const Handle(TDataStd_TreeNode)& of) const;
  //! Returns true if this tree node attribute has a father tree node. <br>
        Standard_Boolean HasFather() const;
  //! Returns the father TreeNode of <me>. Null if root. <br>
  Standard_EXPORT     Handle_TDataStd_TreeNode Father() const;
  //! Returns true if this tree node attribute has a next tree node. <br>
        Standard_Boolean HasNext() const;
  //!  Returns the next tree node in this tree node attribute. <br>
//!           Warning <br>
//!           This tree node is null if it is the last one in this <br>
//!           tree node attribute.Returns the next TreeNode of <me>. Null if last. <br>
  Standard_EXPORT     Handle_TDataStd_TreeNode Next() const;
  //! Returns true if this tree node attribute has a previous tree node. <br>
        Standard_Boolean HasPrevious() const;
  //! Returns the previous tree node of this tree node attribute. <br>
//!          Warning <br>
//!          This tree node is null if it is the first one in this tree node attribute. <br>
  Standard_EXPORT     Handle_TDataStd_TreeNode Previous() const;
  //! Returns true if this tree node attribute has a first child tree node. <br>
        Standard_Boolean HasFirst() const;
  //! Returns the first child tree node in this tree node object. <br>
  Standard_EXPORT     Handle_TDataStd_TreeNode First() const;
  //! Returns true if this tree node attribute has a last child tree node. <br>
        Standard_Boolean HasLast() const;
  //! Returns the last child tree node in this tree node object. <br>
  Standard_EXPORT     Handle_TDataStd_TreeNode Last() ;
  //! Returns the last child tree node in this tree node object. <br>//! to set fields <br>
//!          ============= <br>
  Standard_EXPORT     Handle_TDataStd_TreeNode FindLast() ;
  
  Standard_EXPORT     void SetTreeID(const Standard_GUID& explicitID) ;
  
  Standard_EXPORT     void SetFather(const Handle(TDataStd_TreeNode)& F) ;
  
  Standard_EXPORT     void SetNext(const Handle(TDataStd_TreeNode)& F) ;
  
  Standard_EXPORT     void SetPrevious(const Handle(TDataStd_TreeNode)& F) ;
  
  Standard_EXPORT     void SetFirst(const Handle(TDataStd_TreeNode)& F) ;
  //! TreeNode callback: <br>
//!          ================== <br>
  Standard_EXPORT     void SetLast(const Handle(TDataStd_TreeNode)& F) ;
  //! Connect the TreeNode to its father child list <br>
  Standard_EXPORT   virtual  void AfterAddition() ;
  //! Disconnect the TreeNode from its Father child list <br>
  Standard_EXPORT   virtual  void BeforeForget() ;
  //! Reconnect the TreeNode to its father child list. <br>
  Standard_EXPORT   virtual  void AfterResume() ;
  //! Disconnect the TreeNode, if necessary. <br>
  Standard_EXPORT   virtual  Standard_Boolean BeforeUndo(const Handle(TDF_AttributeDelta)& anAttDelta,const Standard_Boolean forceIt = Standard_False) ;
  //! Reconnect the TreeNode, if necessary. <br>//! Implementation of Attribute methods: <br>
//!          =================================== <br>
  Standard_EXPORT   virtual  Standard_Boolean AfterUndo(const Handle(TDF_AttributeDelta)& anAttDelta,const Standard_Boolean forceIt = Standard_False) ;
  //! Returns the tree ID (default or explicit one depending <br>
//!          onthe Set method used). <br>
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT   virtual  void Restore(const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT   virtual  void Paste(const Handle(TDF_Attribute)& into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT   virtual  void References(const Handle(TDF_DataSet)& aDataSet) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;


friend class TDataStd_ChildNodeIterator;


  DEFINE_STANDARD_RTTI(TDataStd_TreeNode)

protected:




private: 


TDataStd_PtrTreeNode myFather;
TDataStd_PtrTreeNode myPrevious;
TDataStd_PtrTreeNode myNext;
TDataStd_PtrTreeNode myFirst;
TDataStd_PtrTreeNode myLast;
Standard_GUID myTreeID;


};


#include <TDataStd_TreeNode.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif