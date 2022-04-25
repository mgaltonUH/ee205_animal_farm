///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"
#include "Catclass.h"

char           catname[MAX_CAT_NAME];
enum           Gender catgender;               // redeclaring Gender as catgender
enum           Breed catbreed;                 // redeclaring Breed as catbreed
//enum Color     collarColor1;
//enum Color     collarColor2;
//unsigned long long   license;
bool           catfixed;
Weight          catweight;

NumCats            countcat = 0;       //Initializing zero as the starting poNumCats

//struct         Catstruct Catstruct_array[MAX_CAT_NAME];

const char* genderName (const enum Gender catgender) {
    switch (catgender) {
        case UNKNOWN_GENDER:
            return "Unknown_Gender";
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
    }
    return 0;
}


const char* breedName (const enum Breed catbreed) {
    switch (catbreed) {
        case UNKNOWN_BREED:
            return "Unknown_Breed";
        case MAINE_COON:
            return "Maine_Coon";
        case MANX:
            return  "Manx";
        case SHORTHAIR:
            return "Shorthair";
        case PERSIAN:
            return "Persian";
        case SPHYNX:
            return "Sphynx";
    }
    return 0;
}

Cat* catObjectHeadPointer = nullptr;

bool validateDatabase() {
    int checkCats = 0;
    for (Cat *aCat = catObjectHeadPointer; aCat != nullptr; aCat = aCat->next) {
        if (!aCat->validate()) {
            return 0;
        }
    }
    checkCats++;
    return true;
}

//const char* colorName (const enum Color color) {
    //switch (color) {
        //case BLACK:
            //return "Black";
        //case WHITE:
           // return "White";
       // case RED:
            //return "Red";
        //case BLUE:
            //return "Blue";
       // case GREEN:
            //return "Green";
        //case PINK:
           // return "Pink";
   // }
   // return 0;
//}
