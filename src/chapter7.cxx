/**
 * @file chapter7.cxx
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief PLACEHOLDER
 * @date 2020-04-02
 *
 * Assignment: Module 4 Chapter 7 Programming Assignment
 * Description: This file contains the class definition of `NumberStats`
 *   objects, allowing us easier implementation and testing utilization.
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 02 April 2020
 */

#include "../include/chapter7.hh"
#include <cmath>
#include <iostream>

void chapter7::getInputVariables(int &windSpeed, int &temperature) {
  std::cout << "Enter wind speed in miles per hour: ";
  std::cin >> windSpeed;
  std::cout << "Enter temperature in degree Fahrenheit: ";
  std::cin >> temperature;
  std::cout << '\n';
  std::cout << std::endl;
}

int chapter7::calculateWindchill(int windSpeed, int temperature) {

  int windchill = 35.74 + (0.6215 * temperature) -
                  (35.75 * std::pow(windSpeed, 0.16)) +
                  (0.4275 * temperature * (std::pow(windSpeed, 0.16)));

  return windchill;
}