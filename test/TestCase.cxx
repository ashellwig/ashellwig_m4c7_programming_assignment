#include "../include/catch2/catch.hpp"
#include "../include/chapter7.hh"
#include <sstream>
#include <string>

using chapter7::StudentData;

SCENARIO("The obscure function is successful", "[functions]") {
  GIVEN("The desired output's input string") {
    WHEN("We create a new object") {
      std::string inputData;
      StudentData janeSmith(
          (std::string &)"Jane Smith 222-33-4444 S12345 password");
      std::string targetString = "Jane Smith xxx-xx-xxxx S12345 xxxxxxxx";

      THEN("The information should be obscured") {
        REQUIRE(janeSmith.obscureData(janeSmith.getCurrentData()) ==
                targetString);
      }
    }
  }
}
