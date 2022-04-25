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
#include "Catclass.h"
#include "catDatabase.h"

//using namespace std;

int addCat(Cat* aNewCat) {
    if(aNewCat !=nullptr){
        aNewCat->validate();
    }
    validateDatabase();
    aNewCat->next = catObjectHeadPointer;
    catObjectHeadPointer = aNewCat;
    countcat++;
    validateDatabase();

    return 1;
}
   // if (strlen(name) >= MAX_CAT_NAME){
      // cout << "Animalfarm1: " << "Name of cat cannot be greater than " << MAX_CAT_NAME <<  "letters\n" << endl;
      // return 0;
    //}
    //if (strlen(name) == 0) {
       // cout << "Cat name must be entered\n" << endl;
       // return 0;
    //}
    //if (weight <= 0) {
       // cout << "Cat weight must be entered\n" << endl;
        //return 0;
   // }
     //if ( countcat > MAX_CAT_NUM) {
        //cout << "Animalfarm1: " << "Too many cats. Only " << MAX_CAT_NUM <<  " cats can be in the database at the moment\n" << endl;
       // return 0;
   // }
    //strncpy( Catstruct_array[countcat].catname, name, MAX_CAT_NAME);
    //Catstruct_array[countcat].catgender = gender;
    //Catstruct_array[countcat].catbreed = breed;
    //Catstruct_array[countcat].catfixed = isFixed;
    //Catstruct_array[countcat].catweight = weight;
    //Catstruct_array[countcat].collarColor1 = collarcolor1;
    //Catstruct_array[countcat].collarColor2 = collarcolor2;
    //Catstruct_array[countcat].license = license;

   // countcat++;

    //return 1;
//}