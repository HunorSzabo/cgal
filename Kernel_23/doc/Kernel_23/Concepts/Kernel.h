/*!
  \ingroup PkgKernel23Concepts
  \cgalConcept

  The concept of a <I>kernel</I> is defined by a set of requirements on 
  the provision of certain types and access member functions to create 
  objects of these types. The types are function object classes to be used 
  within the algorithms and data structures of \cgal. 
  This allows you to use any model of a kernel as a traits class in 
  the \cgal algorithms and data structures, unless they require types 
  beyond those provided by a kernel. 

  A kernel provides types, construction objects, and generalized predicates. 
  The former replace constructors of the kernel classes and constructive 
  procedures in the kernel. There are also function objects replacing operators, 
  especially for equality testing. 

  \cgalHasModel `CGAL::Cartesian<FieldNumberType>` 
  \cgalHasModel `CGAL::Homogeneous<RingNumberType>`
  \cgalHasModel `CGAL::Simple_cartesian<FieldNumberType>` 
  \cgalHasModel `CGAL::Simple_homogeneous<RingNumberType>` 
  \cgalHasModel `CGAL::Filtered_kernel<CK>`
  \cgalHasModel `CGAL::Exact_predicates_exact_constructions_kernel` 
  \cgalHasModel `CGAL::Exact_predicates_exact_constructions_kernel_with_sqrt` 
  \cgalHasModel `CGAL::Exact_predicates_inexact_constructions_kernel`

  \sa `Kernel_d` 

*/
class Kernel {
public:
  /// \name Types 
  /// The following types describe the return types of predicates. They
  /// typically map to `bool` and \cgal kernel enum types, except when
  /// an interval arithmetic number type is used such as within the
  /// filtering kernels, in which case it is `Uncertain<bool>` or
  /// similar.
  /// @{

  /*! 
    a model of `FieldNumberType` 
  */ 
  typedef Hidden_type FT; 

  /*! 
    a model of `RingNumberType` 
  */ 
  typedef Hidden_type RT; 

  /*! 
    `bool` or `Uncertain<bool>` 
  */ 
  typedef Hidden_type Boolean; 

  /*! 
    `CGAL::Sign` or `Uncertain<CGAL::Sign>` 
  */ 
  typedef Hidden_type Sign; 

  /*! 
    `CGAL::Comparison_result` or `Uncertain<CGAL::Comparison_result>` 
  */ 
  typedef Hidden_type Comparison_result; 

  /*! 
    `CGAL::Orientation` or `Uncertain<CGAL::Orientation>` 
  */ 
  typedef Hidden_type Orientation; 

  /*! 
    `CGAL::Oriented_side` or `Uncertain<CGAL::Oriented_side>` 
  */ 
  typedef Hidden_type Oriented_side; 

  /*! 
    `CGAL::Bounded_side` or `Uncertain<CGAL::Bounded_side>` 
  */ 
  typedef Hidden_type Bounded_side; 

  /*! 
    `CGAL::Angle` or `Uncertain<CGAL::Angle>` 
  */ 
  typedef Hidden_type Angle; 

  /// @} 

  /// \name Dimension handling
  /// @{

  /*!
    A class to extract the ambient dimension for each object listed in
    the <b>Geometric Object</b> section of the Kernel concept.
    \todo This shouldn't appear in the concepts group.
  */
  template <class T>
  class Ambient_dimension
  {
  public:
    /*!
      `dim` is the ambient dimension of the geometric object `T`.
    */
    typedef Dimension_tag<dim> type;
  };

  /*!
    A class to extract the feature dimension for each object listed in
    the <b>Geometric Object</b> section of the Kernel concept.
    \todo This shouldn't appear in the concepts group.
  */
  template <class T>
  class Feature_dimension
  {
  public:
    /*!
      `dim` is the feature dimension of the geometric object `T`.
    */
    typedef Dimension_tag<dim> type;
  };

  /// @}

  /// \name Constants 
  /// @{

  /*! 
    A Boolean value indicating whether the predicates are filtered (as in
    `Filtered_kernel`).  This helps propagating such decisions to traits
    classes which are built on top of a kernel, so that they can decide to
    filter their own predicates or not.
  */ 
  static const bool Has_filtered_predicates; 

  /// @} 

  /// \name Coordinate Access 
  /// @{

  /*! 
    a model of `Kernel::CartesianConstIterator_2` 
  */ 
  typedef Hidden_type Cartesian_const_iterator_2; 

  /// @} 

  /// \name Geometric Objects 
  /// @{

  /*! 
    a model of `Kernel::Point_2` 
  */ 
  typedef Hidden_type Point_2; 

  /*! 
    a model of `Kernel::Vector_2` 
  */ 
  typedef Hidden_type Vector_2; 

  /*! 
    a model of `Kernel::Direction_2` 
  */ 
  typedef Hidden_type Direction_2; 

  /*! 
    a model of `Kernel::Line_2` 
  */ 
  typedef Hidden_type Line_2; 

  /*! 
    a model of `Kernel::Ray_2` 
  */ 
  typedef Hidden_type Ray_2; 

  /*! 
    a model of `Kernel::Segment_2` 
  */ 
  typedef Hidden_type Segment_2; 

  /*! 
    a model of `Kernel::Triangle_2` 
  */ 
  typedef Hidden_type Triangle_2; 

  /*! 
    a model of `Kernel::IsoRectangle_2` 
  */ 
  typedef Hidden_type Iso_rectangle_2; 

  /*! 
    a model of `Kernel::Circle_2` 
  */ 
  typedef Hidden_type Circle_2; 

  /*! 
    a model of `Kernel::Object_2` 
  */ 
  typedef Hidden_type Object_2; 

  /// @} 

  /// \name Constructions 
  /// @{

  /*! 
    a model of `Kernel::ConstructPoint_2` 
  */ 
  typedef Hidden_type Construct_point_2; 

  /*! 
    a model of `Kernel::ConstructVector_2` 
  */ 
  typedef Hidden_type Construct_vector_2; 

  /*! 
    a model of `Kernel::ConstructDirection_2` 
  */ 
  typedef Hidden_type Construct_direction_2; 

  /*! 
    a model of `Kernel::ConstructSegment_2` 
  */ 
  typedef Hidden_type Construct_segment_2; 

  /*! 
    a model of `Kernel::ConstructLine_2` 
  */ 
  typedef Hidden_type Construct_line_2; 

  /*! 
    a model of `Kernel::ConstructRay_2` 
  */ 
  typedef Hidden_type Construct_ray_2; 

  /*! 
    a model of `Kernel::ConstructCircle_2` 
  */ 
  typedef Hidden_type Construct_circle_2; 

  /*! 
    a model of `Kernel::ConstructTriangle_2` 
  */ 
  typedef Hidden_type Construct_triangle_2; 

  /*! 
    a model of `Kernel::ConstructIsoRectangle_2` 
  */ 
  typedef Hidden_type Construct_iso_rectangle_2; 

  /*! 
    a model of `Kernel::ConstructObject_2` 
  */ 
  typedef Hidden_type Construct_object_2; 

  /*! 
    a model of `Kernel::ConstructScaledVector_2` 
  */ 
  typedef Hidden_type Construct_scaled_vector_2; 

  /*! 
    a model of `Kernel::ConstructTranslatedPoint_2` 
  */ 
  typedef Hidden_type Construct_translated_point_2; 

  /*! 
    a model of `Kernel::ConstructPointOn_2` 
  */ 
  typedef Hidden_type Construct_point_on_2; 

  /*! 
    a model of `Kernel::ConstructProjectedPoint_2` 
  */ 
  typedef Hidden_type Construct_projected_point_2; 

  /*! 
    a model of `Kernel::ConstructProjectedXYPoint_2` 
  */ 
  typedef Hidden_type Construct_projected_xy_point_2; 

  /*! 
    a model of `Kernel::ConstructCartesianConstIterator_2` 
  */ 
  typedef Hidden_type Construct_cartesian_const_iterator_2; 

  /*! 
    a model of `Kernel::ConstructVertex_2` 
  */ 
  typedef Hidden_type Construct_vertex_2; 

  /*! 
    a model of `Kernel::ConstructBbox_2` 
  */ 
  typedef Hidden_type Construct_bbox_2; 

  /*! 
    a model of `Kernel::ConstructPerpendicularVector_2` 
  */ 
  typedef Hidden_type Construct_perpendicular_vector_2; 

  /*! 
    a model of `Kernel::ConstructPerpendicularDirection_2` 
  */ 
  typedef Hidden_type Construct_perpendicular_direction_2; 

  /*! 
    a model of `Kernel::ConstructPerpendicularLine_2` 
  */ 
  typedef Hidden_type Construct_perpendicular_line_2; 

  /*! 
    a model of `Kernel::ConstructMaxVertex_2` 
  */ 
  typedef Hidden_type Construct_max_vertex_2; 

  /*! 
    a model of `Kernel::ConstructMidpoint_2` 
  */ 
  typedef Hidden_type Construct_midpoint_2; 

  /*! 
    a model of `Kernel::ConstructEquidistantLine_3` 
  */ 
  typedef Hidden_type Construct_equidistant_line_3; 

  /*! 
    a model of `Kernel::ConstructMinVertex_2` 
  */ 
  typedef Hidden_type Construct_min_vertex_2; 

  /*! 
    a model of `Kernel::ConstructCenter_2` 
  */ 
  typedef Hidden_type Construct_center_2; 

  /*! 
    a model of `Kernel::ConstructCentroid_2` 
  */ 
  typedef Hidden_type Construct_centroid_2; 

  /*! 
    a model of `Kernel::ConstructCircumcenter_2` 
  */ 
  typedef Hidden_type Construct_circumcenter_2; 

  /*! 
    a model of `Kernel::ConstructBisector_2` 
  */ 
  typedef Hidden_type Construct_bisector_2; 

  /*! 
    a model of `Kernel::ConstructOppositeDirection_2` 
  */ 
  typedef Hidden_type Construct_opposite_direction_2; 

  /*! 
    a model of `Kernel::ConstructOppositeSegment_2` 
  */ 
  typedef Hidden_type Construct_opposite_segment_2; 

  /*! 
    a model of `Kernel::ConstructOppositeRay_2` 
  */ 
  typedef Hidden_type Construct_opposite_ray_2; 

  /*! 
    a model of `Kernel::ConstructOppositeLine_2` 
  */ 
  typedef Hidden_type Construct_opposite_line_2; 

  /*! 
    a model of `Kernel::ConstructOppositeTriangle_2` 
  */ 
  typedef Hidden_type Construct_opposite_triangle_2; 

  /*! 
    a model of `Kernel::ConstructOppositeCircle_2` 
  */ 
  typedef Hidden_type Construct_opposite_circle_2; 

  /*! 
    a model of `Kernel::ConstructOppositeVector_2` 
  */ 
  typedef Hidden_type Construct_opposite_vector_2; 

  /*! 
    a model of `Kernel::Intersect_2` 
  */ 
  typedef Hidden_type Intersect_2; 

  /*! 
  a model of `Kernel::Assign_2` 
  */ 
  typedef Hidden_type Assign_2; 

  /*! 
    a model of `Kernel::ComputeSquaredDistance_2` 
  */ 
  typedef Hidden_type Compute_squared_distance_2; 

  /*! 
    a model of `Kernel::ComputeSquaredLength_2` 
  */ 
  typedef Hidden_type Compute_squared_length_2; 

  /*! 
    a model of `Kernel::ComputeSquaredRadius_2` 
  */ 
  typedef Hidden_type Compute_squared_radius_2; 

  /*! 
    a model of `Kernel::ComputeArea_2` 
  */ 
  typedef Hidden_type Compute_area_2; 

  /*! 
    a model of `Kernel::ComputeDeterminant_2` 
  */ 
  typedef Hidden_type Compute_determinant_2; 

  /// @} 

  /// \name Generalized Predicates 
  /// @{

  /*! 
    a model of `Kernel::Angle_2` 
  */ 
  typedef Hidden_type Angle_2; 

  /*! 
    a model of `Kernel::Equal_2` 
  */ 
  typedef Hidden_type Equal_2; 

  /*! 
    a model of `Kernel::EqualX_2` 
  */ 
  typedef Hidden_type Equal_x_2; 

  /*! 
    a model of `Kernel::EqualY_2` 
  */ 
  typedef Hidden_type Equal_y_2; 

  /*! 
    a model of `Kernel::LessX_2` 
  */ 
  typedef Hidden_type Less_x_2; 

  /*! 
    a model of `Kernel::LessY_2` 
  */ 
  typedef Hidden_type Less_y_2; 

  /*! 
    a model of `Kernel::LessXY_2` 
  */ 
  typedef Hidden_type Less_xy_2; 

  /*! 
    a model of `Kernel::LessYX_2` 
  */ 
  typedef Hidden_type Less_yx_2; 

  /*! 
    a model of `Kernel::CompareX_2` 
  */ 
  typedef Hidden_type Compare_x_2; 

  /*! 
    a model of `Kernel::CompareXAtY_2` 
  */ 
  typedef Hidden_type Compare_x_at_y_2; 

  /*! 
    a model of `Kernel::CompareY_2` 
  */ 
  typedef Hidden_type Compare_y_2; 

  /*! 
    a model of `Kernel::CompareXY_2` 
  */ 
  typedef Hidden_type Compare_xy_2; 

  /*! 
    a model of `Kernel::CompareYX_2` 
  */ 
  typedef Hidden_type Compare_yx_2; 

  /*! 
    a model of `Kernel::CompareYAtX_2` 
  */ 
  typedef Hidden_type Compare_y_at_x_2; 

  /*! 
    a model of `Kernel::CompareDistance_2` 
  */ 
  typedef Hidden_type Compare_distance_2; 

  /*! 
    a model of `Kernel::CompareAngleWithXAxis_2` 
  */ 
  typedef Hidden_type Compare_angle_with_x_axis_2; 

  /*! 
    a model of `Kernel::CompareSlope_2` 
  */ 
  typedef Hidden_type Compare_slope_2; 

  /*! 
    a model of `Kernel::LessDistanceToPoint_2` 
  */ 
  typedef Hidden_type Less_distance_to_point_2; 

  /*! 
    a model of `Kernel::LessSignedDistanceToLine_2` 
  */ 
  typedef Hidden_type Less_signed_distance_to_line_2; 

  /*! 
    a model of `Kernel::LessRotateCCW_2` 
  */ 
  typedef Hidden_type Less_rotate_ccw_2; 

  /*! 
    a model of `Kernel::LeftTurn_2` 
  */ 
  typedef Hidden_type Left_turn_2; 

  /*! 
    a model of `Kernel::Collinear_2` 
  */ 
  typedef Hidden_type Collinear_2; 

  /*! 
    a model of `Kernel::Orientation_2` 
  */ 
  typedef Hidden_type Orientation_2; 

  /*! 
    a model of `Kernel::SideOfOrientedCircle_2` 
  */ 
  typedef Hidden_type Side_of_oriented_circle_2; 

  /*! 
    a model of `Kernel::SideOfBoundedCircle_2` 
  */ 
  typedef Hidden_type Side_of_bounded_circle_2; 

  /*! 
    a model of `Kernel::IsHorizontal_2` 
  */ 
  typedef Hidden_type Is_horizontal_2; 

  /*! 
    a model of `Kernel::IsVertical_2` 
  */ 
  typedef Hidden_type Is_vertical_2; 

  /*! 
    a model of `Kernel::IsDegenerate_2` 
  */ 
  typedef Hidden_type Is_degenerate_2; 

  /*! 
    a model of `Kernel::HasOn_2` 
  */ 
  typedef Hidden_type Has_on_2; 

  /*! 
    a model of `Kernel::CollinearHasOn_2` 
  */ 
  typedef Hidden_type Collinear_has_on_2; 

  /*! 
    a model of `Kernel::HasOnBoundedSide_2` 
  */ 
  typedef Hidden_type Has_on_bounded_side_2; 

  /*! 
    a model of `Kernel::HasOnUnboundedSide_2` 
  */ 
  typedef Hidden_type Has_on_unbounded_side_2; 

  /*! 
    a model of `Kernel::HasOnBoundary_2` 
  */ 
  typedef Hidden_type Has_on_boundary_2; 

  /*! 
    a model of `Kernel::HasOnPositiveSide_2` 
  */ 
  typedef Hidden_type Has_on_positive_side_2; 

  /*! 
    a model of `Kernel::HasOnNegativeSide_2` 
  */ 
  typedef Hidden_type Has_on_negative_side_2; 

  /*! 
    a model of `Kernel::OrientedSide_2` 
  */ 
  typedef Hidden_type Oriented_side_2; 

  /*! 
    a model of `Kernel::BoundedSide_2` 
  */ 
  typedef Hidden_type Bounded_side_2; 

  /*! 
    a model of `Kernel::AreParallel_2` 
  */ 
  typedef Hidden_type Are_parallel_2 ; 

  /*! 
    a model of `Kernel::AreOrderedAlongLine_2` 
  */ 
  typedef Hidden_type Are_ordered_along_line_2 ; 

  /*! 
    a model of `Kernel::AreStrictlyOrderedAlongLine_2` 
  */ 
  typedef Hidden_type Are_strictly_ordered_along_line_2; 

  /*! 
    a model of `Kernel::CollinearAreOrderedAlongLine_2` 
  */ 
  typedef Hidden_type Collinear_are_ordered_along_line_2; 

  /*! 
    a model of `Kernel::CollinearAreStrictlyOrderedAlongLine_2` 
  */ 
  typedef Hidden_type Collinear_are_strictly_ordered_along_line_2; 

  /*! 
    a model of `Kernel::CounterclockwiseInBetween_2` 
  */ 
  typedef Hidden_type Counterclockwise_in_between_2; 

  /*! 
    a model of `Kernel::DoIntersect_2` 
  */ 
  typedef Hidden_type Do_intersect_2; 

  /// @} 

  /// \name Coordinate Access 
  /// @{

  /*! 
    a model of `Kernel::CartesianConstIterator_3` 
  */ 
  typedef Hidden_type Cartesian_const_iterator_3; 

  /// @} 

  /// \name Geometric Objects 
  /// @{

  /*! 
    a model of `Kernel::Point_3` 
  */ 
  typedef Hidden_type Point_3; 

  /*! 
    a model of `Kernel::Vector_3` 
  */ 
  typedef Hidden_type Vector_3; 

  /*! 
    a model of `Kernel::Direction_3` 
  */ 
  typedef Hidden_type Direction_3; 

  /*! 
    a model of `Kernel::IsoCuboid_3` 
  */ 
  typedef Hidden_type Iso_cuboid_3; 

  /*! 
    a model of `Kernel::Line_3` 
  */ 
  typedef Hidden_type Line_3; 

  /*! 
    a model of `Kernel::Ray_3` 
  */ 
  typedef Hidden_type Ray_3; 

  /*! 
    a model of `Kernel::Circle_3` 
  */ 
  typedef Hidden_type Circle_3; 

  /*! 
    a model of `Kernel::Sphere_3` 
  */ 
  typedef Hidden_type Sphere_3; 

  /*! 
    a model of `Kernel::Segment_3` 
  */ 
  typedef Hidden_type Segment_3; 

  /*! 
    a model of `Kernel::Plane_3` 
  */ 
  typedef Hidden_type Plane_3; 

  /*! 
    a model of `Kernel::Triangle_3` 
  */ 
  typedef Hidden_type Triangle_3; 

  /*! 
    a model of `Kernel::Tetrahedron_3` 
  */ 
  typedef Hidden_type Tetrahedron_3; 

  /*! 
    a model of `Kernel::Object_3` 
  */ 
  typedef Hidden_type Object_3; 

  /// @} 

  /// \name Constructions 
  /// @{

  /*! 
    a model of `Kernel::ConstructPoint_3` 
  */ 
  typedef Hidden_type Construct_point_3; 

  /*! 
    a model of `Kernel::ConstructVector_3` 
  */ 
  typedef Hidden_type Construct_vector_3; 

  /*! 
    a model of `Kernel::ConstructDirection_3` 
  */ 
  typedef Hidden_type Construct_direction_3; 

  /*! 
    a model of `Kernel::ConstructPlane_3` 
  */ 
  typedef Hidden_type Construct_plane_3; 

  /*! 
    a model of `Kernel::ConstructIsoCuboid_3` 
  */ 
  typedef Hidden_type Construct_iso_cuboid_3; 

  /*! 
    a model of `Kernel::ConstructLine_3` 
  */ 
  typedef Hidden_type Construct_line_3; 

  /*! 
    a model of `Kernel::ConstructRay_3` 
  */ 
  typedef Hidden_type Construct_ray_3; 

  /*! 
    a model of `Kernel::ConstructSphere_3` 
  */ 
  typedef Hidden_type Construct_sphere_3; 

  /*! 
    a model of `Kernel::ConstructSegment_3` 
  */ 
  typedef Hidden_type Construct_segment_3; 

  /*! 
    a model of `Kernel::ConstructTriangle_3` 
  */ 
  typedef Hidden_type Construct_triangle_3; 

  /*! 
    a model of `Kernel::ConstructTetrahedron_3` 
  */ 
  typedef Hidden_type Construct_tetrahedron_3; 

  /*! 
    a model of `Kernel::ConstructObject_3` 
  */ 
  typedef Hidden_type Construct_object_3; 

  /*! 
    a model of `Kernel::ConstructScaledVector_3` 
  */ 
  typedef Hidden_type Construct_scaled_vector_3; 

  /*! 
    a model of `Kernel::ConstructTranslatedPoint_3` 
  */ 
  typedef Hidden_type Construct_translated_point_3; 

  /*! 
    a model of `Kernel::ConstructPointOn_3` 
  */ 
  typedef Hidden_type Construct_point_on_3; 

  /*! 
    a model of `Kernel::ConstructProjectedPoint_3` 
  */ 
  typedef Hidden_type Construct_projected_point_3; 

  /*! 
    a model of `Kernel::ConstructLiftedPoint_3` 
  */ 
  typedef Hidden_type Construct_lifted_point_3; 

  /*! 
    a model of `Kernel::ConstructCartesianConstIterator_3` 
  */ 
  typedef Hidden_type Construct_cartesian_const_iterator_3; 

  /*! 
    a model of `Kernel::ConstructVertex_3` 
  */ 
  typedef Hidden_type Construct_vertex_3; 

  /*! 
    a model of `Kernel::ConstructBbox_3` 
  */ 
  typedef Hidden_type Construct_bbox_3; 

  /*! 
    a model of `Kernel::ConstructSupportingPlane_3` 
  */ 
  typedef Hidden_type Construct_supporting_plane_3; 

  /*! 
    a model of `Kernel::ConstructOrthogonalVector_3` 
  */ 
  typedef Hidden_type Construct_orthogonal_vector_3; 

  /*! 
    a model of `Kernel::ConstructBaseVector_3` 
  */ 
  typedef Hidden_type Construct_base_vector_3; 

  /*! 
    a model of `Kernel::ConstructPerpendicularPlane_3` 
  */ 
  typedef Hidden_type Construct_perpendicular_plane_3; 

  /*! 
    a model of `Kernel::ConstructRadicalPlane_3` 
  */ 
  typedef Hidden_type Construct_radical_plane_3; 

  /*! 
    a model of `Kernel::ConstructPerpendicularLine_3` 
  */ 
  typedef Hidden_type Construct_perpendicular_line_3; 

  /*! 
    a model of `Kernel::ConstructMidpoint_3` 
  */ 
  typedef Hidden_type Construct_midpoint_3; 

  /*! 
    a model of `Kernel::ConstructCenter_3` 
  */ 
  typedef Hidden_type Construct_center_3; 

  /*! 
    a model of `Kernel::ConstructCentroid_3` 
  */ 
  typedef Hidden_type Construct_centroid_3; 

  /*! 
    a model of `Kernel::ConstructCircumcenter_3` 
  */ 
  typedef Hidden_type Construct_circumcenter_3; 

  /*! 
    a model of `Kernel::ConstructBisector_3` 
  */ 
  typedef Hidden_type Construct_bisector_3; 

  /*! 
    a model of `Kernel::ConstructCrossProductVector_3` 
  */ 
  typedef Hidden_type Construct_cross_product_vector_3; 

  /*! 
    a model of `Kernel::ConstructOppositeDirection_3` 
  */ 
  typedef Hidden_type Construct_opposite_direction_3; 

  /*! 
    a model of `Kernel::ConstructOppositeSegment_3` 
  */ 
  typedef Hidden_type Construct_opposite_segment_3; 

  /*! 
    a model of `Kernel::ConstructOppositeRay_3` 
  */ 
  typedef Hidden_type Construct_opposite_ray_3; 

  /*! 
    a model of `Kernel::ConstructOppositeLine_3` 
  */ 
  typedef Hidden_type Construct_opposite_line_3; 

  /*! 
    a model of `Kernel::ConstructOppositePlane_3` 
  */ 
  typedef Hidden_type Construct_opposite_plane_3; 

  /*! 
    a model of `Kernel::ConstructOppositeSphere_3` 
  */ 
  typedef Hidden_type Construct_opposite_sphere_3; 

  /*! 
    a model of `Kernel::ConstructOppositeVector_3` 
  */ 
  typedef Hidden_type Construct_opposite_vector_3; 

  /*! 
    a model of `Kernel::Intersect_3` 
  */ 
  typedef Hidden_type Intersect_3; 

  /*! 
    a model of `Kernel::Assign_3` 
  */ 
  typedef Hidden_type Assign_3; 

  /*! 
    a model of `Kernel::ComputeArea_3` 
  */ 
  typedef Hidden_type Compute_area_3; 

  /*! 
    a model of `Kernel::ComputeSquaredArea_3` 
  */ 
  typedef Hidden_type Compute_squared_area_3; 

  /*! 
    a model of `Kernel::ComputeAreaDividedByPi_3` 
  */ 
  typedef Hidden_type Compute_area_divided_by_pi_3; 

  /*! 
    a model of `Kernel::ComputeApproximateArea_3` 
  */ 
  typedef Hidden_type Compute_approximate_area_3; 

  /*! 
    a model of `Kernel::ComputeDeterminant_3` 
  */ 
  typedef Hidden_type Compute_determinant_3; 

  /*! 
    a model of `Kernel::ComputeSquaredDistance_3` 
  */ 
  typedef Hidden_type Compute_squared_distance_3; 

  /*! 
    a model of `Kernel::ComputeSquaredLength_3` 
  */ 
  typedef Hidden_type Compute_squared_length_3; 

  /*! 
    a model of `Kernel::ComputeSquaredLengthDividedByPiSquare_3` 
  */ 
  typedef Hidden_type Compute_squared_length_divided_by_pi_square_3; 

  /*! 
    a model of `Kernel::ComputeApproximateSquaredLength_3` 
  */ 
  typedef Hidden_type Compute_approximate_squared_length_3; 

  /*! 
    a model of `Kernel::ComputeSquaredRadius_3` 
  */ 
  typedef Hidden_type Compute_squared_radius_3; 

  /*! 
    a model of `Kernel::ComputeVolume_3` 
  */ 
  typedef Hidden_type Compute_volume_3; 

  /// @} 

  /// \name Generalized Predicates 
  /// @{

  /*! 
    a model of `Kernel::Angle_3` 
  */ 
  typedef Hidden_type Angle_3; 

  /*! 
    a model of `Kernel::Equal_3` 
  */ 
  typedef Hidden_type Equal_3; 

  /*! 
    a model of `Kernel::EqualX_3` 
  */ 
  typedef Hidden_type Equal_x_3; 

  /*! 
    a model of `Kernel::EqualY_3` 
  */ 
  typedef Hidden_type Equal_y_3; 

  /*! 
    a model of `Kernel::EqualZ_3` 
  */ 
  typedef Hidden_type Equal_z_3; 

  /*! 
    a model of `Kernel::EqualXY_3` 
  */ 
  typedef Hidden_type Equal_xy_3; 

  /*! 
    a model of `Kernel::LessX_3` 
  */ 
  typedef Hidden_type Less_x_3; 

  /*! 
    a model of `Kernel::LessY_3` 
  */ 
  typedef Hidden_type Less_y_3; 

  /*! 
    a model of `Kernel::LessZ_3` 
  */ 
  typedef Hidden_type Less_z_3; 

  /*! 
    a model of `Kernel::LessXY_3` 
  */ 
  typedef Hidden_type Less_xy_3; 

  /*! 
    a model of `Kernel::LessXYZ_3` 
  */ 
  typedef Hidden_type Less_xyz_3; 

  /*! 
    a model of `Kernel::CompareX_3` 
  */ 
  typedef Hidden_type Compare_x_3; 

  /*! 
    a model of `Kernel::CompareY_3` 
  */ 
  typedef Hidden_type Compare_y_3; 

  /*! 
    a model of `Kernel::CompareZ_3` 
  */ 
  typedef Hidden_type Compare_z_3; 

  /*! 
    a model of `Kernel::CompareXY_3` 
  */ 
  typedef Hidden_type Compare_xy_3; 

  /*! 
    a model of `Kernel::CompareXYZ_3` 
  */ 
  typedef Hidden_type Compare_xyz_3; 

  /*! 
    a model of `Kernel::LessSignedDistanceToPlane_3` 
  */ 
  typedef Hidden_type Less_signed_distance_to_plane_3; 

  /*! 
    a model of `Kernel::LessDistanceToPoint_3` 
  */ 
  typedef Hidden_type Less_distance_to_point_3; 

  /*! 
    a model of `Kernel::CompareDihedralAngle_3` 
  */ 
  typedef Hidden_type Compare_dihedral_angle_3; 

  /*! 
    a model of `Kernel::CompareDistance_3` 
  */ 
  typedef Hidden_type Compare_distance_3; 

  /*! 
    a model of `Kernel::Collinear_3` 
  */ 
  typedef Hidden_type Collinear_3; 

  /*! 
    a model of `Kernel::Coplanar_3` 
  */ 
  typedef Hidden_type Coplanar_3; 

  /*! 
    a model of `Kernel::Orientation_3` 
  */ 
  typedef Hidden_type Orientation_3; 

  /*! 
    a model of `Kernel::CoplanarOrientation_3` 
  */ 
  typedef Hidden_type Coplanar_orientation_3; 

  /*! 
    a model of `Kernel::CoplanarSideOfBoundedCircle_3` 
  */ 
  typedef Hidden_type Coplanar_side_of_bounded_circle_3; 

  /*! 
    a model of `Kernel::SideOfOrientedSphere_3` 
  */ 
  typedef Hidden_type Side_of_oriented_sphere_3; 

  /*! 
    a model of `Kernel::SideOfBoundedSphere_3` 
  */ 
  typedef Hidden_type Side_of_bounded_sphere_3; 

  /*! 
    a model of `Kernel::IsDegenerate_3` 
  */ 
  typedef Hidden_type Is_degenerate_3; 

  /*! 
    a model of `Kernel::HasOn_3` 
  */ 
  typedef Hidden_type Has_on_3; 

  /*! 
    a model of `Kernel::HasOnBoundedSide_3` 
  */ 
  typedef Hidden_type Has_on_bounded_side_3; 

  /*! 
    a model of `Kernel::HasOnUnboundedSide_3` 
  */ 
  typedef Hidden_type Has_on_unbounded_side_3; 

  /*! 
    a model of `Kernel::HasOnBoundary_3` 
  */ 
  typedef Hidden_type Has_on_boundary_3; 

  /*! 
    a model of `Kernel::HasOnPositiveSide_3` 
  */ 
  typedef Hidden_type Has_on_positive_side_3; 

  /*! 
    a model of `Kernel::HasOnNegativeSide_3` 
  */ 
  typedef Hidden_type Has_on_negative_side_3; 

  /*! 
    a model of `Kernel::OrientedSide_3` 
  */ 
  typedef Hidden_type Oriented_side_3; 

  /*! 
    a model of `Kernel::BoundedSide_3` 
  */ 
  typedef Hidden_type Bounded_side_3; 

  /*! 
    a model of `Kernel::AreParallel_3` 
  */ 
  typedef Hidden_type Are_parallel_3 ; 

  /*! 
    a model of `Kernel::AreOrderedAlongLine_3` 
  */ 
  typedef Hidden_type Are_ordered_along_line_3 ; 

  /*! 
    a model of `Kernel::AreStrictlyOrderedAlongLine_3` 
  */ 
  typedef Hidden_type Are_strictly_ordered_along_line_3; 

  /*! 
    a model of `Kernel::CollinearAreOrderedAlongLine_3` 
  */ 
  typedef Hidden_type Collinear_are_ordered_along_line_3; 

  /*! 
    a model of `Kernel::CollinearAreStrictlyOrderedAlongLine_3` 
  */ 
  typedef Hidden_type Collinear_are_strictly_ordered_along_line_3; 

  /*! 
    a model of `Kernel::DoIntersect_3` 
  */ 
  typedef Hidden_type Do_intersect_3; 

  /// @} 

  /// \name Operations 
  /// For each of the function objects above, there must exist a member
  /// function that requires no arguments and returns an instance of
  /// that function object. The name of the member function is the
  /// uncapitalized name of the type returned with the suffix `_object`
  /// appended. For example, for the function object
  /// `Kernel::Construct_vector_2` the following member function must
  /// exist:

  /// @{

  /*! 

   */ 
  Kernel::Construct_vector_2 construct_vector_2_object() const ; 

  /// @}

}; /* end Kernel */
