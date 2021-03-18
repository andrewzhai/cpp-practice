#include <iostream>
#include <fstream>
#include<string>
#include<istream>
using namespace std;

int main() {





    ifstream infile("seq_data.txt");
  if(!infile){
    cout<<"no file"<<endl;

  }
  else{
    
    string name;
    while(infile>>name){
      
      cout<<name<<endl;
      cout<<"************"<<endl;
      
    }

  }


  
  std::cout << "Hello World!\n";
}