#include <iostream>

#define SUMMER 0
#define WINTER 1
#define SPRING 0
#define AUTUMN 0
#define SUMMER_NAME "Summer"
#define WINTER_NAME "Winter"
#define SPRING_NAME "Spring"
#define AUTUMN_NAME "Autumn"
#define GET_NAME(season) season ## _NAME

#if WINTER
int main() {
    std::cout << "Current season is: " << GET_NAME(WINTER) << std::endl;
    return 0;
}
#endif
#if SPRING
int main() {
    std::cout << "Current season is: " << GET_NAME(SPRING) << std::endl;
    return 0;
}
#endif
#if SUMMER
int main() {
    std::cout << "Current season is: " << GET_NAME(SUMMER) << std::endl;
    return 0;
}
#endif
#if AUTUMN
int main() {
    std::cout << "Current season is: " << GET_NAME(AUTUMN) << std::endl;
    return 0;
}
#endif