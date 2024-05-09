//
// Created by Iskra on 18.04.2024.
//
#include "shapes.hpp"

double calculate_total_area(const std::vector<Shape*>& shapes){
    double area = 0;
    for(const auto& i : shapes)
        area += i->area();
    return area;
}
