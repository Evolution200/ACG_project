# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.22)

# Set the project name
project(Simulation)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the Eigen3 library (if installed)
find_package(Eigen3 REQUIRED)

# Add the source files for the project
add_executable(Simulation
    src/main.cpp
    src/FluidSystem.cpp
    src/Solver.cpp
    # Add more source files here as needed
)

# Link the Eigen3 library to the project
target_link_libraries(Simulation Eigen3::Eigen)
