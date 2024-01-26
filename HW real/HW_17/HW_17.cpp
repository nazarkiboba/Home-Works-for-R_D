#include <iostream>
#include <cmath>

class Vector2d {
public:
    float x, y;

    Vector2d(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}

    Vector2d& operator=(const Vector2d& other) {
        x = other.x;
        y = other.y;
        return *this;
    }

    Vector2d operator+(const Vector2d& other) const {
        return Vector2d(x + other.x, y + other.y);
    }

    Vector2d operator-(const Vector2d& other) const {
        return Vector2d(x - other.x, y - other.y);
    }

    friend Vector2d operator+(const Vector2d& left, const Vector2d& right) {
        return Vector2d(left.x + right.x, left.y + right.y);
    }

    friend Vector2d operator-(const Vector2d& left, const Vector2d& right) {
        return Vector2d(left.x - right.x, left.y - right.y);
    }

    float operator()() const {
        return std::sqrt(x * x + y * y);
    }

    float& operator[](int i) {
        return (i == 0) ? x : y;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector2d& vec) {
        os << "{" << vec.x << "; " << vec.y << "}";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Vector2d& vec) {
        is >> vec.x >> vec.y;
        return is;
    }

    static int activeInstances() {
        return instanceCount;
    }

private:
    static int instanceCount;
};

int Vector2d::instanceCount = 0;

int main() {
    Vector2d testVec(1.2f, 5.6f);
    std::cout << testVec << std::endl;

    Vector2d anotherVec;
    std::cin >> anotherVec;
    std::cout << "Length of vector: " << anotherVec() << std::endl;

    std::cout << "Active instances of Vector2d: " << Vector2d::activeInstances() << std::endl;

    return 0;
}
