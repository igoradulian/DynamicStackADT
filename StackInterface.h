/**
*@author Igor Adulyan
 * @date 10/25/21.
**/

#ifndef _STACK_INTERFACE
#define _STACK_INTERFACE
/**
 *
 * @tparam ItemType
 */
template<class ItemType>
class StackInterface
{

public:

    virtual bool push(const ItemType& itemType) = 0;
    virtual bool pop() = 0;
    virtual ItemType peek() const = 0;
    virtual int count() = 0;
    virtual void clear() = 0;
    virtual bool isEmpty () const = 0;

};


#endif
