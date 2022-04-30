///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Node.h"
#include "config.h"

class List {
protected:
    Node* head = nullptr;
    unsigned int count = 0;   //starts from zero to initialize
public:
    bool empty() const noexcept;
    unsigned int size() const noexcept;
    bool isIn(Node* aNode) const;
    bool isSorted() const noexcept;

    Node* get_first() const noexcept;

    void deleteAllNodes() noexcept;

    virtual Node* pop_front() noexcept=0;
    virtual void dump() const noexcept=0;
    virtual bool validate() const noexcept=0;

    static Node* get_next(const Node *currentNode);
};



