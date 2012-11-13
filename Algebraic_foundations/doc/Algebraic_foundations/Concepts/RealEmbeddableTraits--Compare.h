
/*!
\ingroup PkgAlgebraicFoundationsConcepts
\cgalConcept

`AdaptableBinaryFunction` compares two real embeddable numbers. 

\cgalRefines `AdaptableBinaryFunction` 

\sa ::RealEmbeddableTraits 

*/

class RealEmbeddableTraits::Compare {
public:

/// \name Types 
/// @{

/*! 
Type convertible to `CGAL::Comparison_result`. 
*/ 
typedef Hidden_type result_type; 

/*! 
Is `RealEmbeddableTraits::Type`. 
*/ 
typedef Hidden_type first_argument_type; 

/*! 
Is `RealEmbeddableTraits::Type`. 
*/ 
typedef Hidden_type second_argument_type; 

/// @} 

/// \name Operations 
/// @{

/*! 
compares \f$ x\f$ with respect to \f$ y\f$. 
*/ 
result_type operator()(first_argument_type x, 
second_argument_type y); 

/*! 

This operator is defined if `NT1` and `NT2` are 
`ExplicitInteroperable` with coercion type 
`RealEmbeddableTraits::Type`. 
*/ 
template <class NT1, class NT2> 
result_type operator()(NT1 x, NT2 y); 

/// @}

}; /* end RealEmbeddableTraits::Compare */

