
/**
 * @file chapter7.hh
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the prototypes required to
 * compute the data requested in the assignment.
 * @date 2020-04-02
 *
 * Assignment: Module 4 Chapter 7 Programming Assignment
 * Description: This file contains the chapter7 namespace for the assigned
 * exercise.
 * Instructor: Jeffrey Hemmes Course: [CSC 160] Introduction to
 * Programming (C++) Date: 02 April 2020
 */

#include <cstdio>
#include <exception>
#include <iostream>
#include <string>
#include <vector>

#ifndef CHAPTER7_HH_INCLUDED
#  define CHAPTER7_HH_INCLUDED

namespace chapter7 {

void getStudentData(std::string &);
void obscureStudentData(std::string &);
void printStudentData(std::string);

// -----------------------------------------------------------------------------
// -------------------------Begin Debug-Related Macros--------------------------
// -----------------------------------------------------------------------------

/**
 * @brief Provides exception types for additional debugging information.
 */
inline namespace exceptions {
class InputException : public std::exception {
public:
  virtual const char *what() const throw() {
    return "Cannot have first input higher than the second.";
  }
};
} // namespace exceptions

/**
 * @brief Defines macros for outputting additional debugging information.
 */
inline namespace chapter7_debug {
#  ifndef DEBUG
#    define DEBUG 0
#    ifdef NDEBUG
#      define DEBUG 0
#    endif // !NDEBUG
#  else
#    define DEBUG 1
#  endif // !DEBUG

#  ifdef DEBUG
/**
 * @brief Prints the output of a function call when it is sent to stderr rather
 * than stdout. Use for debugging assistance.
 */
#    define verbose_print(...)                                                 \
      char message[150];                                                       \
      std::sprintf(message, __VA_ARGS__);                                      \
      std::cerr << "[" << __FILE__ << "]: "                                    \
                << "[" << __PRETTY_FUNCTION__ << "]: "                         \
                << "[line:" << __LINE__ << "] >> " << message << std::endl;

#  endif // DEBUG
} // namespace chapter7_debug
} // namespace chapter7

#endif // !CHAPTER7_HH_INCLUDED
