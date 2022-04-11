///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "config.h"
#include "catDatabase.h"
#define MAX_CAT_NAME 50
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
typedef float Weight;
typedef int NumCats;

enum Gender {UNKNOWN_GENDER, MALE, FEMALE};
enum Breed {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

class Cat {
protected: //members
    char catname[MAX_CAT_NAME];
    enum Gender catgender;
    enum Breed catbreed;
    bool catfixed;
    Weight catweight;
public:
    Cat *next; //next comes after members declared
public:
    Cat();  //simple constructor
    Cat(const char* newName, const Gender newGender, const Breed newBreed,const Weight newWeight);
        // polymorphic constructor
    ~Cat(); //destructor
private:
    void zeroOutCatData(); //function works within ~Cat() destructor
public:
    void setCatName(const char *newName);

    const char* getCatName();

    Gender getCatGender();

    Breed getCatBreed();

    void setCatWeight(Weight newWeight);

    Weight getCatWeight();

protected:
    void setCatGender(Gender newGender);

    void setCatBreed(Breed newBreed);

public:
    bool print() noexcept;

    bool validate() const noexcept;

    static int validateCatName(const char *newName);

    static int validateCatGender(Gender newGender);

    static int validateCatBreed(Breed newBreed);

    static int validateCatWeight(Weight newWeight);

};

extern Cat* catObjectHeadPointer;
extern const char* genderName ( enum Gender catgender);
extern const char* breedName ( enum Breed catbreed);


