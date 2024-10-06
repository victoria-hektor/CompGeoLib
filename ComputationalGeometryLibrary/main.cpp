#include <iostream>
#include <vector>
#include "../include/ConvexHull.h"
#include "../include/Point.h"
#include "../include/Vector.h"

void testConvexHull() {
    std::vector<Point> points = { {0, 3}, {1, 1}, {2, 2}, {4, 4}, {0, 0}, {1, 2}, {3, 1}, {3, 3} };
    std::vector<Point> hull = convexHull(points);
    std::cout << "Convex Hull Points for Random Set:\n";
    for (const auto& point : hull)
        std::cout << point << std::endl;
}

void testCollinearPoints() {
    std::vector<Point> testCollinear = { {0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4} };
    std::vector<Point> collinearHull = convexHull(testCollinear);
    std::cout << "Convex Hull for Collinear Points:\n";
    for (const auto& point : collinearHull)
        std::cout << point << std::endl;
}

void testDuplicatePoints() {
    std::vector<Point> duplicatePoints = { {1, 1}, {2, 2}, {2, 2}, {3, 3}, {4, 4}, {4, 4}, {0, 0} };
    std::vector<Point> duplicateHull = convexHull(duplicatePoints);
    std::cout << "Convex Hull for Points with Duplicates:\n";
    for (const auto& point : duplicateHull)
        std::cout << point << std::endl;
}

void testPointOperations() {
    Point p1(2, 3);
    Point p2(5, 7);
    std::cout << "Point 1: " << p1 << ", Point 2: " << p2 << "\n";
    std::cout << "Point 1 + Point 2: " << p1 + p2 << "\n";
    std::cout << "Point 1 - Point 2: " << p1 - p2 << "\n";
    std::cout << "Dot product of Point 1 and Point 2: " << p1.dot(p2) << "\n";
}

void showMenu() {
    std::cout << "\n---- Computational Geometry Library ----\n";
    std::cout << "1. Test Convex Hull with Random Points\n";
    std::cout << "2. Test Convex Hull with Collinear Points\n";
    std::cout << "3. Test Convex Hull with Duplicate Points\n";
    std::cout << "4. Test Basic Point Operations\n";
    std::cout << "5. Exit\n";
    std::cout << "---------------------------------------\n";
}

int main() {
    int choice;
    while (true) {
        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: testConvexHull(); break;
        case 2: testCollinearPoints(); break;
        case 3: testDuplicatePoints(); break;
        case 4: testPointOperations(); break;
        case 5: std::cout << "Exiting...\n"; return 0;
        default: std::cout << "Invalid choice. Try again.\n";
        }
    }
}