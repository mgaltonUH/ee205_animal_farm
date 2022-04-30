///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include <cassert>
#include <iomanip>
#include <string>
#include "Mammal.h"
#include "config.h"

using namespace std;

class Cat : public Mammal {
public:
    static const std::string SPECIES_NAME;
    static const Weight::t_weight MAX_WEIGHT;
protected:
    std::string name;
    bool isCatFixed;
public:
    explicit Cat(const std::string &newName) : Mammal (MAX_WEIGHT, SPECIES_NAME) {
        name = newName;
        isCatFixed = false;
    }
    Cat(const std::string &newName, const Color newColor, const bool newIsFixed, const Gender newGender, const Weight::t_weight newWeight)
        : Mammal (newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        name = newName;
        isCatFixed = newIsFixed;
    }
public:
    std::string getName() const noexcept;
    void setName(const std::string& newName);
    bool isFixed() const noexcept;
    void fixCat() noexcept;
public:
    std::string speak() const noexcept;   //Cat to say Meow
    void dump() const noexcept override;
    bool validate() const noexcept override;
public:
    static bool validateName(const std::string &newName);

};


