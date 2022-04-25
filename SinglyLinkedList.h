///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"
#include "Node.h"
#include "config.h"


class SinglyLinkedList : public List {          //within the SinglyLinkedList is a list
public:
    SinglyLinkedList();
public:
    void push_front(Node *newNode);
    Node* pop_front() noexcept;
    void insert_after(Node *currentNode, Node *newNode);
public:
    void dump() const noexcept;
    bool validate() const noexcept;
};



