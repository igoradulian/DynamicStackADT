/**
*@author Igor Adulyan
 * @date 10/25/21.
**/

#include "DynamicStack.h"
#include <memory>
#include <iostream>

#ifndef _DYNAMIC_STACK
#define _DYNAMIC_STACK

using namespace std;
/**
 *
 * @tparam ItemType
 */
template <class ItemType>
DynamicStack<ItemType>::DynamicStack() :top(-1)
{
    itemPtr = new ItemType[max_size];
}

/**
 *
 * @tparam ItemType
 * @param newEntry
 * @return
 */
template <class ItemType>
bool DynamicStack<ItemType>::push(const ItemType& newEntry) {
    bool status = false;

    if(top < max_size - 1)
        {
            top ++;
            itemPtr[top] = newEntry;
            return true;
        }
    else{

        ItemType* oldArray = itemPtr;

        itemPtr = new ItemType[max_size *2];
         for(int i=0; i < max_size; i++)
             {
                *(itemPtr + i) = *(oldArray + i);
             }

        delete [ ] oldArray;
         oldArray = nullptr;
        max_size = max_size * 2;

        return true;
        }


    return status;
}


/**
 *
 * @tparam ItemType
 * @param item
 * @return
 */
template <class ItemType>
ItemType* DynamicStack<ItemType>::addMembers(ItemType& item) {

}

/**
 *
 * @tparam ItemType
 * @return
 */
template <class ItemType>
ItemType DynamicStack<ItemType>::peek() const {
           return  itemPtr[top];
}

/**
 *
 * @tparam ItemType
 * @return
 */
template <class ItemType>
bool DynamicStack<ItemType> ::pop() {

    if(top == 0)
        {
         itemPtr[top] = 0;
        }

    itemPtr[top] = 0;
    top --;

    return true;
}

/**
 *
 * @tparam ItemType
 * @return
 */
template <class ItemType>
int DynamicStack<ItemType> ::count() {

    return top;
}

/**
 *
 * @tparam ItemType
 */
template <class ItemType>
void DynamicStack<ItemType>:: clear(){

         top = 0;
         ItemType* oldArray = itemPtr;

        itemPtr = new ItemType[max_size];

        itemPtr [0] = -1;

        delete [ ] oldArray;
}

/**
 *
 * @tparam ItemType
 * @return
 */
template <class ItemType>
bool DynamicStack<ItemType> ::isEmpty() const {
    if(top == 0)
        {
        return  true;
        }
    else return false;
}

#endif
