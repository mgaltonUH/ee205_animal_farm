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
#include "Cat.h"

using namespace std;

 const string Cat::SPECIES_NAME = "Felis Catus";
 const Weight::t_weight Cat::MAX_WEIGHT = 40;

bool Cat::validate() const noexcept {
    validateName(getName());
    return true;
}

bool Cat::validateName(const std::string &newName) {
    if (newName.empty()) {
        return true;
    } else {
        cout << "Cat must have a name" << endl;
        return false;
    }
}

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

void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}

 std::string Cat::speak() const noexcept {
     return "Meow";
 }

void Cat::dump() const noexcept {
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP( "Cat" , "name") << name << endl;
    FORMAT_LINE_FOR_DUMP( "Cat" , "is Fixed") << isCatFixed << endl;
}