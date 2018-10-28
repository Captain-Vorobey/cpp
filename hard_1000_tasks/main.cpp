#include <iostream>
#include "begin.h"

int main()
{
    std::cout << find_perimeter(4) << std::endl;
    std::cout << find_square(5) << std::endl;
    std::cout << find_square_and_perimeter_1(6, 7) << std::endl;
    std::cout << find_square_and_perimeter_2(6, 7) << std::endl;
    std::cout << find_length(5) << std::endl;
    std::cout << find_volume_and_surface_area1(2) << std::endl;
    std::cout << find_volume_and_surface_area2(2) << std::endl;
    std::cout << volume_and_surface_1(1, 2, 3) << std::endl;
    std::cout << volume_and_surface_2(1, 2, 3) << std::endl;
    std::cout << circumference_and_area1(5) << std::endl;
    std::cout << circumference_and_area2(5) << std::endl;
    std::cout << arithmetic_average(2, 4) << std::endl;
    std::cout << geometric_mean(9, 6) << std::endl;
    nonzero_numbers(20, 5);
    nonzero_numbers_abs(-20, 5);
    std::cout << find_the_hypotenuse_and_per1(3, 4) << std::endl;
    std::cout << find_the_hypotenuse_and_per2(3, 4, 5) << std::endl;
    std::cout << find_square_and_radius(3, 7) << std::endl;
    std::cout << find_radius_and_square1(33) << std::endl;
    std::cout << find_radius_and_square2(33, 21) << std::endl;
    std::cout << two_pointers(2, 4) << std::endl;
    std::cout << find_length_1(200, 5, 6) << std::endl;
    std::cout << find_length_2(2, 5, 6) << std::endl;
    std::cout << find_length_3(2, 5, 6) << std::endl;
    std::cout << mul_ab_bc(23, 45, 98) << std::endl;
    std::cout << per_and_square1(2, 4, 6, 8) << std::endl;
    std::cout << per_and_square2(2, 4, 6, 8) << std::endl;
    std::cout << distance(3, 5, 7, 9) << std::endl;
    return 0;
}
