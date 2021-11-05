/**
*@author Igor Adulyan
 * @date 10/25/21.
**/



#ifndef _DYNAMIC_STACK_H
#define _DYNAMIC_STACK_H

#include "StackInterface.h"

/**
 *
 * @tparam ItemType
 */
template <class ItemType>
class DynamicStack: public StackInterface<ItemType>
{
private:
    int max_size = 10;
    int top;
    ItemType* itemPtr = new ItemType[max_size];
    ItemType* addMembers(ItemType& items);
public:
    DynamicStack();
    bool push(const ItemType& itemType);
    bool pop();
    ItemType peek() const;
    int count();
    void clear();
    bool isEmpty () const ;

};

#include "DynamicStack.cpp"

#endif
