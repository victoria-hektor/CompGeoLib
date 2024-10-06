#pragma once

#include <vector>
#include <algorithm>
#include "Point.h"

/// Utility function to find the orientation of three points
/// Returns:
/// 0 -> collinear
/// 1 -> clockwise
/// 2 -> counterclockwise
int orientation(const Point& p, const Point& q, const Point& r) {
    double val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;              // Collinear
    return (val > 0) ? 1 : 2;             // Clock or counterclock wise
}

/// Function to find the convex hull of a set of points using Graham's Scan
std::vector<Point> convexHull(std::vector<Point> points) {
    int n = points.size();
    if (n < 3) return {}; // Convex hull not possible

    // Find the bottom-most point
    int minY = 0;
    for (int i = 1; i < n; i++) {
        if (points[i].y < points[minY].y ||
            (points[i].y == points[minY].y && points[i].x < points[minY].x))
            minY = i;
    }

    // Place the bottom-most point at first position
    std::swap(points[0], points[minY]);

    // Sort the remaining points based on polar angle with points[0]
    Point p0 = points[0];
    std::sort(points.begin() + 1, points.end(), [p0](const Point& a, const Point& b) {
        int o = orientation(p0, a, b);
        if (o == 0)
            return (std::sqrt((a.x - p0.x) * (a.x - p0.x) + (a.y - p0.y) * (a.y - p0.y)) <
                std::sqrt((b.x - p0.x) * (b.x - p0.x) + (b.y - p0.y) * (b.y - p0.y)));
        return (o == 2);
        });

    // Create the convex hull
    std::vector<Point> hull;
    hull.push_back(points[0]);
    hull.push_back(points[1]);
    hull.push_back(points[2]);

    for (int i = 3; i < n; i++) {
        // Keep removing the top point from hull while the angle formed
        // by points next-to-top, top, and points[i] makes a non-left turn
        while (orientation(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) != 2)
            hull.pop_back();
        hull.push_back(points[i]);
    }

    return hull;
}