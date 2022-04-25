///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Mammal.h"
#include "config.h"
#include <string>
const string Mammal::MAMMAL_NAME = "Mammilian";

void Mammal::dump() const noexcept {
    Animal::dump();
}