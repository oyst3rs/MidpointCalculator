#include <iostream>
#include <cstdint>

int main() {
    std::uint64_t x1, y1, x2, y2;
    double midX, midY;

    std::cout << "Welcome to the 2D Midpoint Program!\n";
    std::cout << "What is the first point in the plane? (x1, y1):\n";
    std::cin >> x1 >> y1; //takes the first point coordinates

    std::cout << "What is the second point in the plane? (x2, y2):\n";
    std::cin >> x2 >> y2; //takes the second point coordinates

    //Calculates the midpoint
    midX = (static_cast<double>(x1) + x2) / 2.0;
    midY = (static_cast<double>(y1) + y2) / 2.0;

    // Outputs the midpoint
    std::cout << "The midpoint of the line segment between (" << x1 << ", " << y1 << ") and ("
    << x2 << ", " << y2 << ") is (" << midX << ", " << midY << ").\n";
    std::cout << "Thank you for using the 2D Midpoint Program";
    return 0;
}
