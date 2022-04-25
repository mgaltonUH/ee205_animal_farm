///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"

using namespace std;

void Node::dump() const {
FORMAT_LINE_FOR_DUMP( "Node", "this") << this << std::endl;
FORMAT_LINE_FOR_DUMP( "Node", "next") << next << std::endl;
};

bool Node::validate() const noexcept {
    if( next == nullptr) {
        return true;
    }
    if(next == next->next){
        cout << "Error: pointer is pointing to itself"<< endl;
        return false;
    }
};

 bool Node::compareByAddress(const Node *node1, const Node *node2) {
    if (node1 > node2) {
        return true;
    }
    return false;
};

 bool Node::operator>(const Node &rightSide) {
     return Node::compareByAddress(this, &(Node&)rightSide);
};