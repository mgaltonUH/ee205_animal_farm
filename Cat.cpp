///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>

#include "Cat.h"
#include "config.h"

using namespace std;

 const string Cat::SPECIES_NAME = "Felis Catus";
 const Weight::t_weight Cat::MAX_WEIGHT = 40;

string Cat::getName() const noexcept{
    return name;
}

void Cat::setName(const string& newName) {
    if(validateName(newName)) {
    throw invalid_argument("Cat needs a name that is not empty");
    }
    name = newName;
}

bool Cat::isFixed() const noexcept {
return isCatFixed;
}

 std::string Cat::speak() const noexcept {
     return "Meow";
 }