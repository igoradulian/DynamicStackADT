/**
*@author Igor Adulyan
 * @date 10/25/21.
**/

#include <iostream>
#include "DynamicStack.h"


using namespace std;

void displayBag(DynamicStack<int> dynamicStack)
{
    while (!dynamicStack.isEmpty()) {
        cout << "The stack contains " << dynamicStack.peek()
             << " items:" << std::endl;

        dynamicStack.pop();
    }
} // end displayBag

int main() {


    //int testNum = 1;
     DynamicStack<int> stack;
     for (int i = 0; i < 100; i++ ) {
         stack.push(i);
     }

     displayBag(stack);


    /* cout << stack.peek()<<endl;
     stack.pop();
     cout << stack.peek()<<endl;
    stack.pop();
    stack.pop();
    cout << stack.peek()<<endl;

    stack.clear();

    cout << stack.peek()<< endl;

    if(stack.isEmpty()) {
        cout << "is empty"<< endl;
    }
    stack.push(100);

    if(stack.isEmpty()) {
        cout << "is empty"<< endl;
    }
    cout << stack.peek() << endl;
    cout << stack.count()<<endl;

    */

    return 0;
}
