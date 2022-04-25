///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cstring>

#include "Animal.h"
#include "Color.h"
#include "config.h"

using namespace std;

class Mammal : public Animal {  //Some animals are mammals, but not all
public:
    static const std::string MAMMAL_NAME;
protected:
    Color color;
public:
    Mammal(const Weight::t_weight newMaxWeight, const std::string &newSpecies);
    Mammal(const Color newColor, const Gender newGender, const Weight::t_weight newWeight,
           const Weight::t_weight newMaxWeight, const std::string &newSpecies);
public:
    Color getColor() const noexcept;
    void setColor(const Color newColor) noexcept;
public:
    void dump() const noexcept override;
};

