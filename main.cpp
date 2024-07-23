#include <iostream>

#define SUMMER

#ifdef SPRING
#define SEASON "Spring"
#endif

#ifdef SUMMER
#define SEASON "Summer"
#endif

#ifdef AUTUMN
#define SEASON "Autumn"
#endif

#ifdef WINTER
#define SEASON "Winter"
#endif

int main() {
    std::cout << "Current season is: " << SEASON << std::endl;
    return 0;
}
