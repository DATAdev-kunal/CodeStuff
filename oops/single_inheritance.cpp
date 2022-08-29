#include <iostream>
using namespace std;

class vehicle{
   private:
      char name;
   public:
       vehicle(){
         
         cout<<"this is a vehicle"<<endl;
      }
};

class car: public vehicle{

};

int main(){
   car s;
   
   return 0;
}