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
    int num;
    while(infile>>name){
      infile>>num;
      cout<<name<<endl;
      cout<<"************"<<endl;
      cout<<num*10<<endl;
    }

  }


  
  std::cout << "Hello World!\n";
}