#include <iostream>

#define SUMMER 0
#define WINTER 1
#define SPRING 2
#define AUTUMN 3

#if SUMMER
int main() {
    std::cout << "Current season is: " << SEASON << std::endl;
    return 0;
}
#endif