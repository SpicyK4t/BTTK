project(bttk)
cmake_minimum_required(VERSION 2.8)

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})
if (ITKVtkGlue_LOADED)
  find_package(VTK REQUIRED)
  include(${VTK_USE_FILE})
endif()

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

if( "${ITK_VERSION_MAJOR}" LESS 4 )
  target_link_libraries(${PROJECT_NAME} ITKReview ${ITK_LIBRARIES})
else( "${ITK_VERSION_MAJOR}" LESS 4 )
  target_link_libraries(${PROJECT_NAME} ${ITK_LIBRARIES})
endif( "${ITK_VERSION_MAJOR}" LESS 4 )

if(VTK_LIBRARIES)
  target_link_libraries(${PROJECT_NAME} ${VTK_LIBRARIES})
else()
  target_link_libraries(${PROJECT_NAME} vtkHybrid vtkWidgets)
endif()

