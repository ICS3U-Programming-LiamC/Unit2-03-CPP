// Copyright (c) Year Your Name All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 4, 2021
// This program calculates the circumference
// of a circle using tau and not pi

#include <iostream>
#include <cmath>

// declaring all the variables
float rad;
float TAU;
float circ;
char units[10];

int main() {
  // asks for radius of circle
  std::cout << "What is the radius of your circle: ";
  std::cin >> rad;

  // making tau a constant
  const float TAU = 6.28;

  // asks for units
  std::cout << "What are your units: ";
  std::cin >> units;

  // prints the circumference to the screen
  std::cout << "\nThe circumference of your circle is " \
  << TAU * rad << units;
}
