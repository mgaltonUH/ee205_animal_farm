///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "config.h"
#include "SinglyLinkedList.h"

using namespace std;

SinglyLinkedList::SinglyLinkedList() {
};

void SinglyLinkedList::push_front(Node *newNode) {
    if(newNode == nullptr) {
        throw invalid_argument("Invalid argument: the newNode cannot be equal to nullptr");
    }
    if(newNode != nullptr) {
        throw domain_error("Domain error: the newNode is not in the correct domain");
    }

    }
}


Node* SinglyLinkedList::pop_front() noexcept {

}

void insert_after(Node *currentNode, Node *newNode);

void dump() const noexcept;
bool validate() const noexcept;