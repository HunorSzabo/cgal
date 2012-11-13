
/*!
\ingroup PkgJet_fitting_3Concepts
\cgalConcept

The concept `DataKernel` describes the set of requirements to be 
fulfilled by any class used to instantiate first template parameter of 
the class 
`CGAL::Monge_via_jet_fitting<DataKernel,LocalKernel,SvdTraits>`. 

### Operations ###

Only constructors (from 3 scalars and copy constructors) and access 
methods to coordinates `x()`, `y()`, `z()` are needed. 

\cgalHasModel `CGAL::Cartesian<FieldNumberType>` 
\cgalHasModel `CGAL::Simple_cartesian<FieldNumberType>` 

\sa ::LocalKernel

*/

class DataKernel {
public:

/// \name Types 
/// @{

/*! 
The scalar type. 
*/ 
typedef Hidden_type FT; 

/*! 
The point type. 
*/ 
typedef Hidden_type Point_3; 

/*! 
The vector type. 
*/ 
typedef Hidden_type Vector_3; 

/// @}

}; /* end DataKernel */

