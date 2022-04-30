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
#include <iostream>
#include <cassert>
#include "List.h"
#include "config.h"

using namespace std;

  bool List::validate() const noexcept {
     if(head == nullptr) {
         if(size() == 0) {
             return false;
         }
     } else {
         if(size() != 0) {
             return false;
         }
     }
     return true;
 }

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
    Node *nodeInList = head;
    while (nodeInList != nullptr) {
        if (aNode == nodeInList) {
            return true;
        } else {
            nodeInList = nodeInList->next;
        }
    }
    cout << "aNode cannot be equal to nullptr" << endl;
    return false;
}

void List::deleteAllNodes() noexcept {
         assert(validate()) ;
        while( head != nullptr ) {
            pop_front();
        }
#ifdef DEBUG
        cout << PROGRAM_NAME << ": All Nodes have been deleted" << endl ;
#endif
        assert( validate() );
}

Node *List::get_first() const noexcept {
    return head;
}
Node *List::get_next(const Node *nodeInList) {
    return nodeInList -> next;

}
