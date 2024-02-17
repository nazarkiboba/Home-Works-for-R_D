#pragma once

class Rectangle
{
public:
    float length;
    float height;

    Rectangle() : length(10.0f), height(120.0f) {}

    Rectangle(float l, float h) : length(l), height(h) {}

    float getArea() const { return length * height; }

    float getPerimeter() const { return 2 * (length + height); }
};
