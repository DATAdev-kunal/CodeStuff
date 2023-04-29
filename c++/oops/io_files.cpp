#include <fstream>
#include <iostream>
using namespace std;

int main(){
   char data[100];

   ofstream outfile; // open a file in write mode
   outfile.open("file.txt");
   cout<<"Writing to the file"<<endl;
   cout<<"Enter your name";
   cin.getline(data,100);

   outfile<<data<<endl;
   cout<<"Enter your age:";
   cin>>data; 
   cin.ignore();

   //again write inputed data into the file
   outfile<<data<<endl;
   
   //close the opened file
   outfile.close();
   //open a file in read mode
   ifstream infile;
   infile.open("file.txt");
   cout<<"Reading from the file"<<endl;
   infile>>data;
   //write the data at the screen
   cout<<data<<endl;
   //again read the data from the file and display it
   infile>>data;
   cout<<data<<endl;
   infile.close();
   return 0;


}