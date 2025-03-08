// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: March 4, 2025
// This program calculates and displays the surface
// area and volume of a pentagonal prism.

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    // Declare variables
    double b, a, h;
    std::string unit;

    // Display message
    std::cout << "Welcome! This program calculates the surface \n"
              << "area and volume of a pentagonal prism.\n"
              << "Please enter the required values below.\n";

    // Ask user for the unit of measurement
    std::cout << "Enter the unit of measurement (e.g., cm, m, in, ft): ";
    std::cin >> unit;

    // Get input
    std::cout << "Enter the side length of the pentagonal base (b) in "
              << unit << ": ";
    std::cin >> b;
    std::cout << "Enter the apothem of the pentagonal base (a) in "
              << unit << ": ";
    std::cin >> a;
    std::cout << "Enter the height of the prism (h) in "
              << unit << ": ";
    std::cin >> h;

    // Calculate Surface Area
    double surface_area = (5.0 / 2.0) * a * b + 5 * b * h;

    // Calculate Volume
    double volume = (5.0 / 2.0) * a * b * h;

    // Display results with 2 decimal places
    std::cout << "\nHere We Have Our Results!\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Surface Area: " << surface_area << " square " << unit << "\n";
    std::cout << "Volume: " << volume << " cubic " << unit << "\n";

    return 0;
}
