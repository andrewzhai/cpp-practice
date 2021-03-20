#include <iostream>
#include <fstream>
#include<string>
#include<istream>
using namespace std;
#include<vector>

bool check(vector<int> &v, int pos);
void display(vector<int> &v,int pos);

int main() {

  vector<int> v;
  int pos=5;
  check(v,pos);
  display(v,pos);
  
}


/*  read file practice
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

*/
bool check(vector<int> &v, int pos){
  if (pos<0||pos>64){
    cerr<<"please type correct position";
    return false;

  }
  else{
    

  
    for(int i=0;i<pos;i++){
      v.push_back((i+1)*(3*(i+1)-1)/2);
    }
    return true;

  }





}
void display(vector<int> &v,int pos){
  
  for(int i=0;i<pos;i++){
    cout<<v[i]<<' ';
    
  }


}

  
  

