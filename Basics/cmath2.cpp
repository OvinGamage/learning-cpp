#include <iostream>
#include <cmath>
int main() {
    int x = std::max(5, 10);
    int y = std::min(5, 10);
    double z = std::sqrt(16.0);
    double w = std::pow(2.0, 3.0);
    double pi = std::acos(-1.0); // Calculate pi using arccosine
    // ceil and floor also exist in <cmath> and can be used as follows:
    double ceilValue = std::ceil(3.14); 
    double floorValue = std::floor(3.14);

    std::cout << "Max: " << x << std::endl;
    std::cout << "Min: " << y << std::endl;
    std::cout << "Square root: " << z << std::endl;
    std::cout << "Power: " << w << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Ceiling: " << ceilValue << std::endl;
    std::cout << "Floor: " << floorValue << std::endl;  
    return 0;
}