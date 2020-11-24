// Copyright (c) 2020 Wenda Zhao All rights reserved
//
// Created by Wenda Zhao
// Created on Nov 2020
// This program calculates the circumereference of a circle
//    with user input

#include <iostream>

int main() {
    // this funtion calculates circumereference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
}
