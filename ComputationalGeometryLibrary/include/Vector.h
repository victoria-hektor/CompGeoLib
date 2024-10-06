#pragma once

#include "Point.h"
#include <cmath>

/// Represents a 2D vector using a starting and ending point
class Vector {
public:
    Point start, end;

    // Constructor
    Vector(Point s, Point e) : start(s), end(e) {}

    // Magnitude of the vector
    double magnitude() const {
        return std::sqrt((end.x - start.x) * (end.x - start.x) +
            (end.y - start.y) * (end.y - start.y));
    }

    // Dot product of two vectors
    double dot(const Vector& other) const {
        return (end.x - start.x) * (other.end.x - other.start.x) +
            (end.y - start.y) * (other.end.y - other.start.y);
    }

    // Normalise the vector (unit length)
    Vector normalise() const {
        double mag = magnitude();
        return Vector(start, Point(start.x + (end.x - start.x) / mag, start.y + (end.y - start.y) / mag));
    }

    // Prints the vector in a readable format
    void print() const {
        std::cout << "Vector from ";
        start.print();
        std::cout << " to ";
        end.print();
    }
};