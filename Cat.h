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

#ifndef EE205_ANIMAL_FARM_3_CAT_H
#define EE205_ANIMAL_FARM_3_CAT_H
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
    Cat(const std::string &newName);
    Cat(const std::string &newName, const Color newColor, const bool newIsFixed, const Gender newGender, const Weight::t_weight newWeight);
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


#endif //EE205_ANIMAL_FARM_3_CAT_H
