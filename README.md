# CompGeoLib
# Computational Geometry Library
# Please note: This is just a side project and will ot compete with CGAL or GEOS

This project is a C++ library for performing various computational geometry operations such as Convex Hull detection, basic geometric transformations, and point-based algorithms. The library was developed using Visual Studio 2022 Community to demonstrate both proficiency in C++ and a strong understanding of computational geometry concepts.

## **Project Purpose**
The purpose of this project is to implement a set of geometric algorithms and utilities that can be used in various fields, such as computer graphics, robotics, and geographic information systems (GIS). By providing efficient implementations of geometric primitives and algorithms, this library serves as a foundational component for more complex systems.

## **Features Implemented**
### 1. **Geometric Primitives**
- **Point**: Represents a point in a 2D space with basic operations (addition, subtraction, and dot product).
- **Vector**: Encapsulates 2D vectors for geometric transformations and linear algebra operations.
- **Polygon**: Handles sets of points and performs basic operations such as calculating centroids.

### 2. **Convex Hull Algorithms**
- Implementation of the classical **Graham's Scan** and **Andrew's Monotone Chain** algorithms to find the convex hull of a given set of points.
- Handles edge cases such as collinear points and duplicate points.

### 3. **Unit Tests**
- The project includes a set of unit tests for validating the correctness of the implemented algorithms.
- Tests are organized into separate files (`PointTests.cpp`, `ConvexHullTests.cpp`) using custom test cases.

## **Project Structure**
ComputationalGeometryLibrary/ ├── .vs/ 
  ├── include/ │ ├── ConvexHull.h │ ├── Point.h │ └── Vector.h 
  ├── src/ │ 
  ├── tests/ │ ├── ConvexHullTests.cpp │ └── PointTests.cpp 
  ├── examples/ │ └── convex_hull_example.cpp ├── ComputationalGeometryLibrary.sln 
└── main.cpp 
└── README.md


- **`include/`**: Header files for geometric classes and algorithms.
- **`src/`**: Source file (`main.cpp`) that contains the main program entry point.
- **`tests/`**: Unit test files.
- **`examples/`**: Example files demonstrating the usage of the library.

## **Software Used**
- **Visual Studio Code 2022 Community Edition**: Used for initial development and debugging.
- **Visual Studio 2022 Community Edition**: Used for more advanced debugging, project management, and build configurations.

### **Packages and Extensions Installed**
- **C/C++ (Microsoft)**: C++ language support with IntelliSense and debugging capabilities.
- **CMake Tools**: For managing CMake projects and configurations (if using CMake).
- **Code Runner**: Quick code execution for small tests.
- **GitHub Pull Requests and Issues**: Integrated support for managing GitHub repositories.

### **System Requirements**
- **Operating System**: Windows 10 or later.
- **Visual Studio 2022 Community Edition** or **Visual Studio Code** with the C++ environment installed.
- **Git for Version Control**.

## **Installation and Setup**
### **1. Clone the Repository**
```bash
git clone https://github.com/victoria-hektor/CompGeoLib.git

