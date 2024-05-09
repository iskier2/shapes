//
// Created by Iskra on 18.04.2024.
//
#include "shapes.hpp"
#include "gtest/gtest.h"
#include <cmath>
TEST(SquareTest, area) {
Square square(0.0, 0.0, 1.0);
EXPECT_EQ(square.area(), 1.0);

Shape& shape = square;
EXPECT_EQ(shape.area(), 1.0);
}

TEST(CircleTest, area) {
Circle circle(0.0, 0.0, 1.0);
EXPECT_EQ(circle.area(), M_PI);

Shape& shape = circle;
EXPECT_EQ(shape.area(), M_PI);
}