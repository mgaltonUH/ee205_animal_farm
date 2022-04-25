///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cassert>
#include <iomanip>
#include <cstring>

#include "Node.h"
#include "Weight.h"
#include "config.h"
#include "Gender.h"


#ifndef EE205_ANIMAL_FARM_2_ANIMAL_H
#define EE205_ANIMAL_FARM_2_ANIMAL_H

using namespace std;

class Animal : public Node {        //not all animals are mammals, so public mammals not put in this line
public:
    static const std::string KINGDOM_NAME;
private:
    std::string species;
    std::string classification;
    Gender gender;
    Weight weight;
public:
    Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);
};


#endif //EE205_ANIMAL_FARM_2_ANIMAL_H
