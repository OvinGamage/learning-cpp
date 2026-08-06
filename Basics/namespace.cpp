#include <iostream>
#include <string>
namespace first{
    int x=0;
}
namespace second{
    int x=1;
}
int main() {
    int x=2;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    std::cout << x << std::endl;
    return 0;
}