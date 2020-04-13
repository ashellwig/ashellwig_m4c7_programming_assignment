/**
 * @file chapter7.cxx
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the function implementations used for
 * obscuring student data inpout by the user.
 * @date 2020-04-12
 *
 * Assignment: Module 4 Chapter 7 Programming Assignment.
 * Description: This file contains the function implementations used for
 * obscuring student data inpout by the user.
 * Instructor: Jeffrey Hemmes.
 * Course: [CSC 160] Introduction to Programming (C++).
 * Date: 12 April 2020.
 */

#include "../include/chapter7.hh"
#include <iostream>
#include <string>

void chapter7::getStudentData(std::string &studentData) {
  verbose_print("Prompting user...");
  std::cout << "Enter a student's name, social security number, user id, and "
               "password in one line:"
            << std::endl;

  std::getline(std::cin, studentData);
}

void chapter7::obscureStudentData(std::string &studentData) {
  size_t position = 0;

  while (true) {
    size_t firstSpace = studentData.find_first_of(' ', position);
    if (firstSpace == std::string::npos)
      break;
    position = studentData.find_first_of(' ', firstSpace + 1) + 1;

    // Exit the loop if there are no spaces found
    if (position == std::string::npos) {
      break;
    }
    // First and last name will give us 2 spaces before the social security
    // number and the SSN should be 11 characters long.
    studentData.replace(position, 11, "xxx-xx-xxxx");
    position += 10;

    // We then have 2 more spaces until the password
    position = studentData.find_first_of(' ', position + 1);
    position = studentData.find_first_of(' ', position + 1);

    // Replace the characters we find until the end with 'x'
    if (position == std::string::npos)
      break;
    position += 1;
    studentData.replace(position, 1, "x");
    position += 1;
    if (position == std::string::npos)
      break;
  }
  if (position == std::string::npos)
    return;
}

void chapter7::printStudentData(std::string studentData) {
  getStudentData(studentData);
  obscureStudentData(studentData);

  std::cout << studentData << std::endl;
}
