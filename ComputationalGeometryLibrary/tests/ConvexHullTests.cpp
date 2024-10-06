#include <cassert>
#include <iostream>
#include "../include/ConvexHull.h"

void testConvexHullWithRandomPoints() {
    std::vector<Point> points = { {0, 3}, {1, 1}, {2, 2}, {4, 4}, {0, 0}, {1, 2}, {3, 1}, {3, 3} };
    std::vector<Point> hull = convexHull(points);
    assert(hull.size() == 4);  // Should be a quadrilateral
    std::cout << "Convex Hull with Random Points Test Passed.\n";
}

void testConvexHullWithCollinearPoints() {
    std::vector<Point> collinear = { {0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4} };
    std::vector<Point> hull = convexHull(collinear);
    assert(hull.size() == 2);  // Only two points form the hull for collinear points
    std::cout << "Convex Hull with Collinear Points Test Passed.\n";
}

void runAllConvexHullTests() {
    testConvexHullWithRandomPoints();
    testConvexHullWithCollinearPoints();
}

int main() {
    std::cout << "Running Convex Hull Tests...\n";
    runAllConvexHullTests();
    std::cout << "All Convex Hull Tests Passed!\n";
    return 0;
}