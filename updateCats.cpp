///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "updateCats.h"

#include <stdio.h>
#include "catDatabase.h"
#include "updateCats.h"
#include <string.h>
#include <stdlib.h>
#include "config.h"

const int updateCatName(const int index, const char newName[]){

    printf("Cat name [%s] has been changed to [%s] \n", Catstruct_array[index].catname, newName);
    strcpy(Catstruct_array[index].catname, newName);

    return 1;
}

const int fixCat (int index){

    if (Catstruct_array[index].catfixed == 0){
        printf("Updated: %s is fixed\n", Catstruct_array[index].catname);
    }

    else {
        fprintf(stderr, "%s: Update Failure....No updates were made\n", "Animalfarm1");

        return 0;
    }

    return 1;
}

const int updateCatWeight(int index,Weight newWeight){

    if (newWeight > 0) {
        Catstruct_array[index].catweight = newWeight;
        printf("Cat weight for [%s] has been updated to %f\n", Catstruct_array[index].catname, newWeight);
    }

    else {
        fprintf(stderr, "%s: Cat weight must be greater than 0\n", "Animalfarm1");
        return 0;
    }

    return 1;
}

const int updateCatCollar1(const int index, const enum Color newcollarColor1) {
    Catstruct_array[index].collarColor1 = newcollarColor1;
    printf("Collar Color 1 has been updated to %s\n",colorName(Catstruct_array[index].collarColor1) );
    return 1;
}

const int updateCatCollar2(const int index, const enum Color newcollarColor2) {
    Catstruct_array[index].collarColor2 = newcollarColor2;
    printf("Collar Color 2 has been updated to %s\n", colorName(Catstruct_array[index].collarColor2));
    return 1;

}

const int updateCatLicense(const int index, const unsigned long long newLicense) {
    Catstruct_array[index].license = newLicense;
    printf("License has been updated to %llu\n", newLicense);
    return 1;

}
