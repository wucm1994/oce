// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Tensor_HeaderFile
#define _GeomFill_Tensor_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TColStd_Array1OfReal.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <math_Vector.hxx>
class Standard_DimensionError;
class Standard_RangeError;
class math_Matrix;


//! used to store the "gradient of gradient"
class GeomFill_Tensor 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_Tensor(const Standard_Integer NbRow, const Standard_Integer NbCol, const Standard_Integer NbMat);
  
  //! Initialize all the elements of a Tensor to InitialValue.
  Standard_EXPORT   void Init (const Standard_Real InitialValue) ;
  
  //! accesses (in read or write mode) the value of index <Row>,
  //! <Col> and <Mat> of a Tensor.
  //! An exception is raised if <Row>, <Col> or <Mat> are not
  //! in the correct range.
     const  Standard_Real& Value (const Standard_Integer Row, const Standard_Integer Col, const Standard_Integer Mat)  const;
   const  Standard_Real& operator() (const Standard_Integer Row, const Standard_Integer Col, const Standard_Integer Mat)  const
{
  return Value(Row,Col,Mat);
}
  
  //! accesses (in read or write mode) the value of index <Row>,
  //! <Col> and <Mat> of a Tensor.
  //! An exception is raised if <Row>, <Col> or <Mat> are not
  //! in the correct range.
      Standard_Real& ChangeValue (const Standard_Integer Row, const Standard_Integer Col, const Standard_Integer Mat) ;
    Standard_Real& operator() (const Standard_Integer Row, const Standard_Integer Col, const Standard_Integer Mat) 
{
  return ChangeValue(Row,Col,Mat);
}
  
  Standard_EXPORT   void Multiply (const math_Vector& Right, math_Matrix& Product)  const;




protected:





private:



  TColStd_Array1OfReal Tab;
  Standard_Integer nbrow;
  Standard_Integer nbcol;
  Standard_Integer nbmat;
  Standard_Integer nbmtcl;


};


#include <GeomFill_Tensor.lxx>





#endif // _GeomFill_Tensor_HeaderFile
