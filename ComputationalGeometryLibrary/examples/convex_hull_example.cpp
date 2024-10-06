#include <iostream>
#include "../include/ConvexHull.h"

int main() {
    // First test case: A set of random points
    std::vector<Point> points = { {0, 3}, {1, 1}, {2, 2}, {4, 4},
                                  {0, 0}, {1, 2}, {3, 1}, {3, 3} };

    std::vector<Point> hull = convexHull(points);

    std::cout << "The points in the Convex Hull are:\n";
    for (const auto& point : hull)
        std::cout << point << std::endl;

    // Second test case: A set of collinear points
    std::vector<Point> testCollinear = { {0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4} };
    std::vector<Point> collinearHull = convexHull(testCollinear);

    // Third test case: Duplicate points
    std::vector<Point> duplicatePoints = { {1, 1}, {2, 2}, {2, 2}, {3, 3}, {4, 4}, {4, 4}, {0, 0} };
    std::vector<Point> duplicateHull = convexHull(duplicatePoints);
    std::cout << "\nConvex Hull for points with duplicates:\n";
    for (const auto& point : duplicateHull)
        std::cout << point << std::endl;
    
    // Fourth Test case: Pre-Sorted Points
    std::vector<Point> sortedPoints = { {0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4} };
    std::vector<Point> sortedHull = convexHull(sortedPoints);
    std::cout << "\nConvex Hull for pre-sorted points:\n";
    for (const auto& point : sortedHull)
        std::cout << point << std::endl;

    std::cout << "\nConvex Hull for collinear points:\n";
    for (const auto& point : collinearHull)
        std::cout << point << std::endl;

    return 0;
}
