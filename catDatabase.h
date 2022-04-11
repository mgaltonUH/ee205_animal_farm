///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
//#define MAX_CAT_NUM 1024
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "Cat.h"
//#define MAX_CAT_NAME 50

//enum Gender {UNKNOWN_GENDER, MALE, FEMALE};
//enum Breed {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
// enum Color {BLACK, WHITE, RED , BLUE, GREEN, PINK};

/*extern struct Catstruct {
    char           catname[MAX_CAT_NAME];
    enum Gender    catgender;
    enum Breed     catbreed;
    // enum Color     collarColor1;
    // enum Color     collarColor2;
    // unsigned long long license;
    bool           catfixed;
    float          catweight; */

//} Catstruct_array[MAX_CAT_NAME];

extern int   countcat;
//extern const char* genderName ( enum Gender catgender);
//extern const char* breedName ( enum Breed catbreed);
// extern const char* colorName (const enum Color color);

extern bool validateDatabase();

