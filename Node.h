///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cassert>
#include <iomanip>
#include <cstring>

#include "config.h"

class Node {
    friend class List;
    friend class SinglyLinkedList;
protected:
    Node* next = nullptr;
public:
    virtual void dump() const;  // should print out sample output
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);
protected:
    static bool compareByAddress(const Node *node1, const Node *node2);


};