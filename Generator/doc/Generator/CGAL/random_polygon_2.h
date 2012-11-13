namespace CGAL {

/*!
\ingroup PkgGenerators

\brief computes a random simple polygon by writing its vertices (oriented
counterclockwise) to `result`. The polygon generated will have a number
of vertices equal to the number of unique points in the first \f$ n\f$ points
generated by `pg`. 

The function `random_polygon_2` constructs a random simple polygon 
from points that are drawn from a specific domain. 
Though each simple polygon defined on this set of 
points has a non-zero probability of being constructed, some polygons may 
have higher probabilities than others. The overall distribution of the 
generated polygons is not known since it depends on the generated points. 

### Requirements ###

- `Traits` is a model of the concept RandomPolygonTraits_2 
- `PointGenerator::value_type` is equivalent to 
`Traits::Point_2` and `OutputIterator::value_type`. 


The default traits class `Default_traits` is the kernel in which 
`Traits::Point_2` is defined. 

\sa `CGAL::Random_points_in_disc_2<Point_2, Creator>` 
\sa `CGAL::Random_points_in_square_2<Point_2, Creator>` 

### Implementation ###

The implementation is based on the method of eliminating self-intersections in 
a polygon by using so-called "2-opt" moves. Such a move eliminates an 
intersection between two edges by reversing the order of the vertices between 
the edges. No more than \f$ O(n^3)\f$ such moves are required to simplify a polygon 
defined on \f$ n\f$ points \cite ls-utstp-82. 
Intersecting edges are detected using a simple sweep through the vertices 
and then one intersection is chosen at random to eliminate after each sweep. 
The worse-case running time is therefore \f$ O(n^4 \log n)\f$. 

### Example ###

The following program displays a random simple polygon with up to 100 
vertices, where the vertex coordinates are drawn uniformly from the 
unit square centered at the origin. 

\cgalExample{Generator/random_polygon.cpp} 

*/

template < class OutputIterator, class PointGenerator, class Traits > 
OutputIterator random_polygon_2( std::size_t n, OutputIterator result, 
const PointGenerator& pg, Traits t = Default_traits);

} /* namespace CGAL */
