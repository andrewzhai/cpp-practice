#include <iostream>
#include <fstream>
#include<string>
#include<istream>
using namespace std;
#include<vector>

int main() {



  int twod[4][2];

    ifstream infile("seq_data.txt");
  if(!infile){
    cout<<"no file"<<endl;

  }
  else{
    
    string name;
    int num;
    int i=0;
    while(infile>>twod[i][0]){
      infile>>twod[i][1];
      i++;
    }

  }


  
  std::cout << "Hello World!\n"<<twod[3][0];
}