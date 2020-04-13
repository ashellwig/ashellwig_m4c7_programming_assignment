/**
 * @file main.cxx
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the main function to run the program.
 * @date 2020-04-02
 *
 * Assignment: Module 4 Chapter 7 Programming Assignment
 * Description: This file contains the main function to run the program.
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 02 April 2020
 */

#include "../include/chapter7.hh" // calculateWindchill, getInputVariables
#include "../include/general_functions.hh" // pauseprompt
#include <iostream>                        // cin, cout
#include <string>                          // std::string

/**
 * @brief Performs the steps to execute the main application.
 */
int main() {
  verbose_print("Starting program for chapter 7 assignment.");

  std::string studentData;

  chapter7::printStudentData(studentData);

  // "Press enter to continue..."
  general_functions::pauseprompt();
  std::cin.ignore();

  // Return with exit code 0 if all goes well
  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
