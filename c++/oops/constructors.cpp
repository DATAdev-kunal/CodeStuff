#include <iostream>
using namespace std;

class student{
   int rno;
   char name[50];
   double fee;

   public:
      student(){
   cout<<"enter the roll no. :"<<endl;       // declaring constructor inside class
   cin>>rno;
   cout<<"enter the name :"<<endl;
   cin>>name;
   cout<<"enter the fee :"<<endl;
   cin>>fee;
}
      void display(){
   cout<<rno<<endl;
   cout<<name<<endl;
   cout<<fee<<endl;

}
};

/* student::student(){
   cout<<"enter the roll no. :"<<endl;
   cin>>rno;
   cout<<"enter the name :"<<endl;              // declaring constructor outside class
   cin>>name;
   cout<<"enter the fee :"<<endl;
   cin>>fee;
}

void student::display(){
   cout<<rno<<endl;
   cout<<name<<endl;
   cout<<fee<<endl;

} */
int main(){
   student s;
   s.display();
return 0;
}