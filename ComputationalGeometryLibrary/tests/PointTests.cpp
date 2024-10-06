#include <cassert>
#include <iostream>
#include "../include/Point.h"

void testPointAddition() {
    Point p1(2, 3);
    Point p2(3, 4);
    Point result = p1 + p2;
    assert(result.x == 5 && result.y == 7);
    std::cout << "Point Addition Test Passed.\n";
}

void testPointSubtraction() {
    Point p1(5, 7);
    Point p2(2, 3);
    Point result = p1 - p2;
    assert(result.x == 3 && result.y == 4);
    std::cout << "Point Subtraction Test Passed.\n";
}

void runAllPointTests() {
    testPointAddition();
    testPointSubtraction();
}

int main() {
    std::cout << "Running Point Tests...\n";
    runAllPointTests();
    std::cout << "All Point Tests Passed!\n";
    return 0;
}