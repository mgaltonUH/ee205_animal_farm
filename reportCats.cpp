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
#include <string.h>
#include <iostream>
#include "Catclass.h"



using namespace std;

//all commented out code is animal farm 1

//int printCat(const int index) {
   // if (index < 0 || index > MAX_CAT_NUM) {
       //cout << "Animalfarm1: " <<  index <<  " is a Bad cat\n" << endl;
       // return 0;
    //}
    //else {
       //cout << "cat index = " << index << ", name = " << Catstruct_array[index].catname << ", gender = " << catGender(Catstruct_array[index].catgender) << ", breed = " << catBreed(Catstruct_array[index].catbreed) << ", isFixed = " << Catstruct_array[index].catfixed << ", weight = " <<  Catstruct_array[index].catweight << ", collar Color 1 = " << colorName(Catstruct_array[index].collarColor1) << ", collar Color 2 = " << colorName(Catstruct_array[index].collarColor2) << ", License = " << Catstruct_array[index].license  << endl;
   // }
   // return 1;
//}

int printAllCats() {
    int countcat = 0;
    for (Cat *aCat = catObjectHeadPointer; aCat != nullptr; aCat = aCat->next ) {
            aCat->print();
        countcat++;
    }
    cout <<"The number of cats is [" << countcat << "]" << endl;
    return 1;
}

   // for (int  i = 0; i < countcat; i++) {
        //cout << "cat index = " << i << ", name = " <<Catstruct_array[i].catname << ", gender = " <<catGender(Catstruct_array[i].catgender) << ", breed = " << catBreed(Catstruct_array[i].catbreed) << ", isFixed = " <<  Catstruct_array[i].catfixed << ", weight = " <<  Catstruct_array[i].catweight << ", collar Color 1 = " << colorName(Catstruct_array[i].collarColor1) << ", collar Color 2 = " << colorName(Catstruct_array[i].collarColor2) << ", License = " <<  Catstruct_array[i].license << endl;
    //}
   // return 1;

//}

//int findCat(const char* name){
   // int i = 0;
    //while (i < MAX_CAT_NUM) {
       // if (strcmp(name, Catstruct_array[i].catname) == 0){
            //cout << "The name of the cat is " << Catstruct_array[i].catname << endl;
           // return i;
        //}
       // ++i;
    //}
   // return 0;
    //}

Cat* findCatByName(const char *name) {
    for (Cat *aCat = catObjectHeadPointer; aCat != nullptr; aCat = aCat->next) {
        if (strcmp(name, aCat->getCatName()) == 0) {
            return aCat;
        }
    }
    return nullptr;
}
