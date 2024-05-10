//
// Created by Iskra on 18.04.2024.
//
#include "shapes.hpp"
#include <numeric>

double calculate_total_area(const std::vector<Shape*>& shapes){
    double area = 0;
    std::accumulate(shapes.begin(), shapes.end(), area, [](double acc, Shape* shape){return acc + shape->area();});
    return area;
}
