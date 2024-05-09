//
// Created by Iskra on 18.04.2024.
//
#include <cmath>
#include <vector>

#ifndef SHAPES_1_SHAPES_HPP
#define SHAPES_1_SHAPES_HPP
class Shape{
private:
    double x_;
    double y_;
public:
    Shape(const double& x, const double& y) : x_(x), y_(y) {}
    [[nodiscard]] virtual double area() const = 0;
    virtual ~Shape() = default;
};
class Square : public Shape{
private:
    double side_;
public:
    Square(const double& x, const double& y, const double& side): Shape(x, y), side_(side){}
    [[nodiscard]] double area() const override{return side_*side_;};
};
class Circle : public Shape{
private:
    double radius_;
public:
    Circle(const double& x, const double& y, const double& radius): Shape(x, y), radius_(radius){}
    [[nodiscard]] double area() const override{return radius_*radius_*M_PI;};
};
double calculate_total_area(const std::vector<Shape*>& shapes);
#endif //SHAPES_1_SHAPES_HPP
