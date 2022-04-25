///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"
#include "config.h"

bool List::empty() const noexcept {
    if(head != nullptr) {
        return false;
    }
    else {
        return true;
    }
}

unsigned int List::size() const noexcept {
    return count;  // initialized in .h file...so the function already "gets" it...just return
}

bool List::isIn(Node* aNode) const {

}