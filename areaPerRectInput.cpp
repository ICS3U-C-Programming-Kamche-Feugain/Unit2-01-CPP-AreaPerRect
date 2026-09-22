// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Sep 22, 2026
// This program ask the user for the length and width of
// a rectangle and calculates and displays the area and perimeter.
// back to the user with proper units.

#include <iostream>

int main() {
    // declare variable;
    int length;
    int width;
    int area;
    int perimeter;

    // get the length from the user
    std::cout << "Enter the length (cm²): ";
    std::cin >> length;
    std::cout << "Enter the width (cm²): ";
    std::cin >> width;

    // calculate area and the perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display the area and perimeter
    std::cout << "The area is:" << area << "cm²" << std::endl;
    std::cout << "The perimeter is:" << perimeter << "cm" << std::endl;
    return 0;
}
