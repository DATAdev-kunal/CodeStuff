/* #include <bits/stdc++.h>
using namespace std;

class node{
   public:
   int data;
   node* next;
};

void printLL(node* n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n=n->next;
   }
}
int main(){
   node* head=NULL;
   node* second=NULL;
   node* third=NULL;
   node* fourth=NULL;
   node* fifth=NULL;

   head = new node();
   second= new node();
   third= new node();
   fourth= new node();
   fifth= new node();

   head->data= 12;
   head->next= second;

   second->data= 34;
   second->next= third;

   third->data= 56;
   third->next= fourth;

   fourth->data= 98;
   fourth->next= fifth;

   fifth->data= 87;
   fifth->next= NULL;

   printLL(head);

   return 0;
} */


#include <bits/stdc++.h>
using namespace std;

class node{
   public:
   int data;
   node* next;
};

void printLL(node* n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n=n->next;
   }
}


int main(){
   int k;
   cout<<"enter no. of nodes to create: ";
   cin>>k;
   node* head=NULL;
   node* second=NULL;
   node* third=NULL;
   node* fourth=NULL;
   node* fifth=NULL;

   head = new node();
   second= new node();
   third= new node();
   fourth= new node();
   fifth= new node();

   head->data= 12;
   head->next= second;

   second->data= 34;
   second->next= third;

   third->data= 56;
   third->next= fourth;

   fourth->data= 98;
   fourth->next= fifth;

   fifth->data= 87;
   fifth->next= NULL;

   printLL(head);
   
   return 0;
}