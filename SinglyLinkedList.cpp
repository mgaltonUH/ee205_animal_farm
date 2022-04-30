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

SinglyLinkedList::SinglyLinkedList() {}

bool SinglyLinkedList::validate() const noexcept {
    if(!List::validate()) {
        return true;
    } else {
        return false;
    }
}

void SinglyLinkedList::push_front(Node *newNode) {  // in Node.h....Node* next = nullptr
    if(newNode == nullptr) {
        throw invalid_argument("Invalid argument: the newNode cannot be equal to nullptr");
    }
    if(head != nullptr) {
        newNode -> next = head;
        head = newNode;
    }
    else {
        newNode -> next = nullptr;
        head = newNode;
    }
}

Node* SinglyLinkedList::pop_front() noexcept {
    if(head == nullptr) {    //the first node in the list is head
        return nullptr;
    }
    Node* nodeNumber = head;
    head = head -> next;
    count--;
    return nodeNumber;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {

    if(List::empty()) {
        throw logic_error("Logic error: List cannot be empty");
    }
    if(currentNode == nullptr) {
        throw invalid_argument("Invalid argument: nullptr cannot be equal to current node");
    }
    if(!isIn(currentNode)) {
        throw logic_error("Logic error: the current node is not in the list");
    }
    if(newNode == nullptr) {
        throw invalid_argument("Invalid argument: the newNode cannot be equal to nullptr");
    }
    if(isIn(newNode)) {
        throw domain_error("Domain error: the newNode must not be in the list");
    }
    if(isIn(newNode)) {
        throw logic_error("Logic error: the newNode is already in the list");
    }
    newNode -> next = currentNode -> next ;
    currentNode -> next = newNode;
}

void SinglyLinkedList::dump() const noexcept {
    Node *nodeToDump = head;
    while (nodeToDump != nullptr) {
        nodeToDump -> dump();
        nodeToDump = nodeToDump -> next;
    }
}