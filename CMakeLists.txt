project(FOSL-data_structure)

set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/source")

add_library(
	${PROJECT_NAME}

	${PROJECT_SOURCE_DIR}/FOSL/data_structure.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure.hpp

	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/base.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/base.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/base-impl.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/forward.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/forward.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/forward-impl.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/bidirectional.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/bidirectional.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/bidirectional-impl.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/random_access.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/random_access.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/random_access-impl.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/contiguous.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/contiguous.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/contiguous-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/reverse.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/reverse.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/reverse-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/front_insert.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/front_insert.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/front_insert-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/back_insert.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/back_insert.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/back_insert-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/insert.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/insert.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/iterator/insert-impl.hpp

	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/base.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/base.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/base-impl.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/dynamic_size.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/dynamic_size.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/dynamic_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/static_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/static_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/static_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/fixed_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/fixed_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/span/fixed_size-impl.hpp

	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/base.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/base.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/base-impl.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/dynamic_size.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/dynamic_size.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/dynamic_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/static_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/static_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/static_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/fixed_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/fixed_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/fixed_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/small.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/small.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/small-impl.hpp

#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map/base.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map/base.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map/base-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map/dense.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map/dense.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/map/dense-impl.hpp

#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/base.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/base.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/base-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/dynamic_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/dynamic_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/dynamic_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/static_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/static_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/static_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/fixed_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/fixed_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/fixed_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/small.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/small.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitspan/small-impl.hpp

#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/base.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/base.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/base-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/dynamic_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/dynamic_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/dynamic_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/static_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/static_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/static_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/fixed_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/fixed_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/fixed_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/small.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/small.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitvector/small-impl.hpp

#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/base.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/base.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/base-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/dynamic_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/dynamic_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/dynamic_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/static_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/static_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/static_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/fixed_size.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/fixed_size.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/fixed_size-impl.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/small.cpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/small.hpp
#	${PROJECT_SOURCE_DIR}/FOSL/data_structure/bitstream/small-impl.hpp
)

target_include_directories(
	${PROJECT_NAME} PUBLIC

	${PROJECT_SOURCE_DIR}
)

target_link_libraries(
	${PROJECT_NAME}

	FOSL-utility
	FOSL-metaprogramming
)

add_subdirectory(test)
# add_test(NAME types COMMAND types.elf)
