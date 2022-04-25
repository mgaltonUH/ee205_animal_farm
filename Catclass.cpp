///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
// animal farm 2

#include "Catclass.h"
#include <iostream>
#include <cassert>
#include <iomanip>
#include <cstring>

using namespace std;

Cat::Cat() {
    zeroOutCatData();
}

Cat::Cat(const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {
    setCatName(newName);
    setCatGender( newGender);
    setCatBreed(newBreed);
    setCatWeight(newWeight);
}

Cat::~Cat() {
    zeroOutCatData();
}

void Cat::zeroOutCatData(){
    catgender = UNKNOWN_GENDER;
    catbreed = UNKNOWN_BREED;
    catfixed = false;
    catweight = -1;
}
void Cat::setCatName(const char *newName) {
    validateCatName(newName);
    strcpy(catname, newName);
}
const char * Cat::getCatName() {
    return catname;
}

int Cat::validateCatName(const char *newName) {
    if(newName == NULL) {
        cout <<"Cat name cannot be NULL"<< endl;
    }
    return 1;
}

void Cat::setCatGender(Gender newGender) {
    if(catgender != UNKNOWN_GENDER){
        cout << "The cat's gender is already filled"<< endl;
    }
    validateCatGender(newGender);
    Cat::catgender = newGender;
}

Gender Cat::getCatGender() {
    return catgender;
}

int Cat::validateCatGender(Gender newGender) {
    if(newGender == UNKNOWN_GENDER){
        cout << "The cat's gender cannot be unknown" << endl;
    }
    return 1;
}

void Cat::setCatBreed(Breed newBreed) {
    if(catbreed != UNKNOWN_BREED){
            cout << "the cat's breed is already filled" << endl;
    }
    validateCatBreed(newBreed);
    Cat::catbreed = newBreed;
}

Breed Cat::getCatBreed() {
    return catbreed;
}

int Cat::validateCatBreed(Breed newBreed) {
    if(newBreed == UNKNOWN_BREED){
        cout << " The cat's breed cannot be unknown" << endl;
    }
    return 1;
}

void Cat::setCatWeight(Weight newWeight) {
    validateCatWeight(newWeight);
    Cat::catweight = newWeight;
}

Weight Cat::getCatWeight() {
    return catweight;
}

int Cat::validateCatWeight(Weight newWeight) {
    if(newWeight <= 0) {
        cout << "The cat's weight cannot be a negative value" << endl;
    }
    return 1;
}

bool Cat::validate() const noexcept {
    validateCatName(catname);
    validateCatGender(catgender);
    validateCatBreed(catbreed);
    validateCatWeight(catweight);
    return 1;
}


/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly.  false if something goes wrong

bool Cat::print() noexcept {
     assert(validate());
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" )        << getCatName() << endl;
    FORMAT_LINE( "Cat", "gender" )      << genderName( getCatGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" )       << breedName( getCatBreed() ) << endl;
    FORMAT_LINE( "Cat", "isFixed" )     << catfixed << endl;
    FORMAT_LINE( "Cat", "weight" )      << getCatWeight() << endl;
    return true ;
}
