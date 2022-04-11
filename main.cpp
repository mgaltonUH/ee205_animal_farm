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

#include <iostream>
#include "catDatabase.h"
#include "Cat.h"
#include "addCats.h"
#include "reportCats.h"
#include "deleteCats.h"
//#include "updateCats.h"


using namespace std;

int main() {

    cout << "\n" << endl;
    cout << "Starting Animal Farm 2" << endl;

    addCat(new Cat("Loki", MALE, PERSIAN, 1.0 )) ;
    addCat( new Cat("Milo", MALE, MANX, 1.1 ));
    addCat( new Cat("Bella", FEMALE, MAINE_COON, 1.2 )) ;
    addCat( new Cat("Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    addCat( new Cat("Trin", FEMALE, MANX, 1.4 )) ;
    addCat( new Cat ("Chili", MALE, SHORTHAIR,1.5  )) ;

    //printf("\n");
    //int kali = findCat( "Kali" ) ;
    //assert (updateCatName( kali, "Chili" )) ;
    //assert (printCat( kali ));
    //assert (updateCatName( kali, "Capulet" )) ;
    //assert (updateCatWeight( kali, 9.9 )) ;
    //assert (fixCat( kali )) ;
    //assert (updateCatCollar1( kali, GREEN));
    //assert (updateCatCollar2( kali, GREEN));
    //assert (updateCatLicense( kali, 201));
    //assert (printCat( kali ));

    printAllCats();
    deleteAllCats();
    printAllCats();

}