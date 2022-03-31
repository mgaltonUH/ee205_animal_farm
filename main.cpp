///////////////////////////////////////////////////////////////////////////////
//           University of Hawaii, College of Engineering
/// @brief   ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file    main.cpp
/// @version 1.0 - Initial version
///
/// @author  Mariko Galton <mgalton@hawaii.edu>
/// @date    20_Mar_2022
///
/// @see     https://en.wikipedia.org/wiki/%22Hello,_World!%22_program
/// @see     https://www.thesoftwareguild.com/blog/the-history-of-hello-world/
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <assert.h>

#include "addCats.h"
#include "catDatabase.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"


int main() {
    printf("\n");
    printf("Welcome to Animal Farm!\n");
    printf("\n");

    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;

    printAllCats();
    printf("\n");
    int kali = findCat( "Kali" ) ;
    assert (updateCatName( kali, "Chili" )) ;
    assert (printCat( kali ));
    assert (updateCatName( kali, "Capulet" )) ;
    assert (updateCatWeight( kali, 9.9 )) ;
    assert (fixCat( kali )) ;
    assert (updateCatCollar1( kali, GREEN));
    assert (updateCatCollar2( kali, GREEN));
    assert (updateCatLicense( kali, 201));
    assert (printCat( kali ));
    printf("\n");

    printAllCats();

    deleteAllCats();
    printAllCats();

    printf("\n");
    printf("Goodbye for Meow!\n");
    printf("\n"
           "    /\\_____/\\\n"
           "   /  o   o  \\\n"
           "  ( ==  ^  == )\n"
           "   )         (\n"
           "  (           )\n"
           " ( (  )   (  ) )\n"
           "(__(__)___(__)__)\n ");
    printf("\n");
}