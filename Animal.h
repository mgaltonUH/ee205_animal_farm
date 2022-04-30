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
#pragma once
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cstring>

#include "Node.h"
#include "Weight.h"
#include "config.h"
#include "Gender.h"

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
    Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string& newClassification, const std::string& newSpecies);

public:
    std::string getKingdom() const noexcept;
    std::string getClassification() const noexcept;
    std::string getSpecies() const noexcept;

public:
    Gender getGender() const noexcept;
    Weight::t_weight getWeight() const noexcept;
    void setWeight(const Weight::t_weight newWeight);
public:
    virtual std::string speak() const noexcept=0;
    void dump() const noexcept override;
    bool validate() const noexcept override;
public:
    static bool validateClassification(const std::string& checkClassification) noexcept;
    static bool validateSpecies(const std::string& checkSpecies) noexcept;

protected:
    void setGender(const Gender newGender);
};

