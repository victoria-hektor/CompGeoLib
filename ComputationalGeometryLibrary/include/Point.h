#pragma once

#include <iostream>
#include <cmath>

/// Represents a point in a 2D space
class Point {
public:
    double x, y;

    // Constructor
    Point(double x = 0, double y = 0) : x(x), y(y) {}

    // Addition of two points (interpreted as vector addition)
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    // Subtraction of two points (interpreted as vector subtraction)
    Point operator-(const Point& other) const {
        return Point(x - other.x, y - other.y);
    }

    // Dot product of two points (interpreted as vector dot product)
    double dot(const Point& other) const {
        return x * other.x + y * other.y;
    }

    // Calculate Euclidean distance to another point
    double distance(const Point& other) const {
        return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }

    // Print the point coordinates
    void print() const {
        std::cout << "(" << x << ", " << y << ")";
    }

    // Overloaded << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};