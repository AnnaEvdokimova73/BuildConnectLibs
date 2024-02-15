# CMakeList.txt: проект CMake для CMakeHierarhyDynLib; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeHierarhyDynLib")
set(SOURCE_H "ClassHierarchyDynLib/equaltrian.h" "ClassHierarchyDynLib/figure.h" "ClassHierarchyDynLib/isotrian.h" "ClassHierarchyDynLib/parall.h" "ClassHierarchyDynLib/quadrilateral.h" "ClassHierarchyDynLib/rectangle.h" "ClassHierarchyDynLib/recttrian.h" "ClassHierarchyDynLib/rhombus.h" "ClassHierarchyDynLib/square.h" "ClassHierarchyDynLib/triangle.h")
set(SOURCE_CPP "ClassHierarchyDynLib/equaltrian.cpp" "ClassHierarchyDynLib/figure.cpp" "ClassHierarchyDynLib/isotrian.cpp" "ClassHierarchyDynLib/parall.cpp" "ClassHierarchyDynLib/quadrilateral.cpp" "ClassHierarchyDynLib/rectangle.cpp" "ClassHierarchyDynLib/recttrian.cpp" "ClassHierarchyDynLib/rhombus.cpp" "ClassHierarchyDynLib/square.cpp" "ClassHierarchyDynLib/triangle.cpp")
add_library(ClassHierarchyDynLib SHARED ${SOURCE_H} ${SOURCE_CPP})
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR})
target_compile_definitions(ClassHierarchyDynLib PRIVATE CLASSHIERARCHYDYNLIB_EXPORTS)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(CMakeHierarhyDynLib "classHierarchy.cpp" "header.h")
target_link_libraries(CMakeHierarhyDynLib ClassHierarchyDynLib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeHierarhyDynLib PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
