///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"
#include "config.h"
#include "Mammal.h"
#include "Cat.h"
#include "Color.h"

const string Animal::KINGDOM_NAME = "Animalia";

Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies) {
    weight.setMaxWeight(newMaxWeight);
    classification = newClassification;
    species = newSpecies;
}
Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string& newClassification, const std::string& newSpecies) {
    setGender(newGender);
    weight.setWeight(newWeight);
    weight.setMaxWeight(newMaxWeight);
    classification = newClassification;
    species = newSpecies;
}

string Animal::getKingdom() const noexcept {
    return  KINGDOM_NAME;
}
string Animal::getClassification() const noexcept {
    return classification;
}
string Animal::getSpecies() const noexcept {
    return species;
}
Gender Animal::getGender() const noexcept {
    return gender;
}
Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}
void Animal::setWeight(const Weight::t_weight newWeight) {
    weight.setWeight(newWeight);
}
void Animal::setGender(const Gender newGender) {
    if(gender != Gender::UNKNOWN_GENDER) {
       throw logic_error("Error: the gender has already been set");
    }
}

bool Animal::validate() const noexcept {
    if (validateClassification(getClassification())) {
        return true;
    } else {
        return false;
    }
}

bool Animal::validateClassification( const std::string& checkClassification ) noexcept {
    if (checkClassification.empty()) {
        return false;
    } else {
        return true;
    }
}

bool Animal::validateSpecies(const std::string& checkSpecies) noexcept {
    if (checkSpecies.empty()) {
        return false;
    } else {
        return true;
    }
}

void Animal::dump() const noexcept {
    Node::dump();

    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;

    FORMAT_LINE_FOR_DUMP( "Animal", "this" )        << this << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "Kingdom" )      << getKingdom() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "Classification" )       << getClassification() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "Species" )     << getSpecies()<< endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "Gender" )      << getGender() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "Weight" )        << getWeight()<< endl;
}