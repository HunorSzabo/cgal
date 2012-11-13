
/*!
\ingroup PkgKernelDKernelConcept
\cgalConcept

A model for this must provide: 

*/

class Kernel_d::Center_of_sphere_d {
public:

/// \name See Also 
/// @{

/*! 
returns the 
center of the sphere spanned by the points in `A = tuple [first,last)`.
\pre \f$A\f$ contains \f$d+1\f$ affinely independent points of dimension \f$d\f$. 
\cgalRequires The value type of `ForwardIterator` is `Kernel_d::Point_d`. 
*/ 
template <class ForwardIterator> Kernel_d::Point_d 
operator()(ForwardIterator first, ForwardIterator last); 

/// @}

}; /* end Kernel_d::Center_of_sphere_d */

