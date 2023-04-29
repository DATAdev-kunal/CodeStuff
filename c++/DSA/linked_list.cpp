/* #include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   return 0;
} */

#include <bits/stdc++.h>
using namespace std;
class node{
   public:
   int data;
   node* next;
};

void printList(node* n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n=n->next;
   }
}
int main(){
   node* head= NULL;
   node* second= NULL;
   node* third= NULL;

   head= new node();
   second= new node();
   third= new node();

   head->data=11;
   head->next=second;

   second->data=22;
   second->next=third;

   third->data=33;
   third->next=NULL;

   printList(head);
   return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
class node{
   public:
   int age;
   char gender;
   bool married;
   node* next;
};

void printList(node* n){
   while(n!=NULL){
      cout<<n->age<<" "<<n->gender<<" "<<n->married<<endl;
      n=n->next;
   }
}

int main(){
   node* head= NULL;
   node* second= NULL;
   node* third= NULL;
   node* fourth=NULL;
   node* fifth=NULL;

   head= new node();
   second= new node();
   third= new node();

   head->age=20;
   head->gender='M';
   head->married=false;
   head->next=second;

   second->age=18;
   second->gender='F';
   second->married=false;
   second->next=third;

   third->age=28;
   third->gender='M';
   third->married=true;
   third->next=fourth;

   fourth->age=26;
   fourth->gender='F';
   fourth->married=true;
   fourth->next=fifth;

   fifth->age=19;
   fifth->gender='F';
   fifth->married=false;
   fifth->next=NULL;

   printList(head);
   return 0;
} */