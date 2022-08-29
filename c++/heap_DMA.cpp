// Dynamic Memory Allocation 
// Heap( free store )

#include <iostream>
using namespace std;

int main(){
   int n=10; //stored in stack

   int* p= new int(); // allocate memory in heap

   *p=10;

   delete(p); // deallocate memory

/* now also pointer doesn't got deleted...
because just its value got erased & pointer exists 
and it is called Dangling Pointer. */

p=new int[4]; // assigning int array of size 4 to dangling pointer in heap.

delete[]p; // complete block of memory deletion from heap

p=NULL; // Destroying 'p' permanently

return 0;
}