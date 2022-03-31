///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "addCats.h"
#include "catDatabase.h"
#include <stdio.h>
#include "string.h"



int addCat(const char name[],const enum Gender gender,const enum Breed breed,const bool isFixed,const Weight weight, const enum Color collarcolor1, const enum Color collarcolor2, const unsigned long long license) {

    if (strlen(name) >= MAX_CAT_NAME){
        fprintf(stderr, "%s: Name of cat cannot be greater than %d letters\n", "Animalfarm1", MAX_CAT_NAME);
        return 0;
    }

    if (strlen(name) == 0) {
        fprintf(stderr, "Cat name must be entered\n");
        return 0;
    }


    if (weight <= 0) {
        fprintf(stderr, "Cat weight must be entered\n");
        return 0;
    }

    if ( countcat > MAX_CAT_NUM) {
        fprintf(stderr, "%s: Too many cats. Only %d cats can be in the database at the moment\n", "Animalfarm1", MAX_CAT_NUM);
        return 0;

    }

    strncpy( Catstruct_array[countcat].catname, name, MAX_CAT_NAME);
    Catstruct_array[countcat].catgender = gender;
    Catstruct_array[countcat].catbreed = breed;
    Catstruct_array[countcat].catfixed = isFixed;
    Catstruct_array[countcat].catweight = weight;
    Catstruct_array[countcat].collarColor1 = collarcolor1;
    Catstruct_array[countcat].collarColor2 = collarcolor2;
    Catstruct_array[countcat].license = license;

    countcat++;

    return 1;
}