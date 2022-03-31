///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "reportCats.h"
#include <stdio.h>

#include "catDatabase.h"
#include <stdlib.h>
#include <string.h>



int printCat(const int index) {

    if (index < 0 || index > MAX_CAT_NUM) {
        fprintf(stderr, "%s: animalFarm0: Bad cat [%d]\n","Animalfarm1", index);
        return 0;

    }

    else {
        printf("cat index = [%u], name = [%s], gender = [%s], breed = [%s], isFixed = [%d], weight = [%f], collar Color 1 = [%s], collar Color 2 = [%s], License = [%llu]\n",
               index, Catstruct_array[index].catname, catGender(Catstruct_array[index].catgender), catBreed(Catstruct_array[index].catbreed), Catstruct_array[index].catfixed,
               Catstruct_array[index].catweight, colorName(Catstruct_array[index].collarColor1), colorName(Catstruct_array[index].collarColor2), Catstruct_array[index].license);
    };

    return 1;
}

int printAllCats(){

    for (int i = 0; i < countcat; i++) {
        printf("cat index = [%u], name = [%s], gender = [%s], breed = [%s], isFixed = [%d], weight = [%f], collar Color 1 = [%s], collar Color 2 = [%s], License = [%llu]\n",
               i, Catstruct_array[i].catname, catGender(Catstruct_array[i].catgender), catBreed(Catstruct_array[i].catbreed), Catstruct_array[i].catfixed,
               Catstruct_array[i].catweight, colorName(Catstruct_array[i].collarColor1), colorName(Catstruct_array[i].collarColor2), Catstruct_array[i].license);
    }
    return 1;
}

int findCat(const char* name){
    int i = 0;

    while (i < MAX_CAT_NUM) {
        if (strcmp(name, Catstruct_array[i].catname) == 0){

            printf("The name of the cat is %s\n", Catstruct_array[i].catname);

            return i;
            exit (0);
        }

        ++i;
    }
    return 0;
}
