project(FOSL-data_structure)

set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/source")
set(PROJECT_BINARY_DIR "${PROJECT_BINARY_DIR}/source")

add_library(
	${PROJECT_NAME}

	${PROJECT_SOURCE_DIR}/FOSL/data_structure.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure.hpp

	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/base.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/base.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/base-impl.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/dynamic_size.cpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/dynamic_size.hpp
	${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/dynamic_size-impl.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/static_size.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/static_size.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/static_size-impl.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/small.cpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/small.hpp
	# ${PROJECT_SOURCE_DIR}/FOSL/data_structure/vector/small-impl.hpp
)

target_include_directories(
	${PROJECT_NAME} PUBLIC

	${PROJECT_SOURCE_DIR}
)

target_link_libraries(
	${PROJECT_NAME}

	FOSL-utility
)

add_subdirectory(test)
# add_test(NAME types COMMAND types.elf)
