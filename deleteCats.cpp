///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "deleteCats.h"
#include "catDatabase.h"
#include "Catclass.h"


int deleteACat(Cat* deleteACat){
    validateDatabase();
    if( deleteACat == catObjectHeadPointer ) {
        catObjectHeadPointer = catObjectHeadPointer->next ;
        delete deleteACat ;
        countcat--;
    }
    return 1 ;
}

int deleteAllCats() {
    while (catObjectHeadPointer != nullptr) {
        deleteACat(catObjectHeadPointer);
    }
        countcat = 0;            // ...and just like that...
        return 1;
    }
