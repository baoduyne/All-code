#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<sstream>
using namespace std;

class student{
  private:
  int age;
  string first_name;
  string last_name;
  int standard;
  
  public:
  
  void setage(int age){
      this->age=age;
  }
  
  void setname(string first_name , string last_name){
      this-> first_name = first_name ;
      this-> last_name = last_name;
  }
  
  void setstandard(int standard){
      this-> standard = standard;
  }
  
  int getage(){
      return age;
  }
  
  string getfirstname(){
      return first_name;
  }
  
  string getlastname(){
      return last_name;
  }
  
  int getstandard(){
      return standard;
  }
    
};

int main() {
       student st;
       int AGE , STANDARD ;
       string FIRST_NAME , LAST_NAME;
       
       string words;
       stringstream ss(words);
       char o = ',';
       
       cin>>AGE;
       st.setage(AGE);
       
       cin>>FIRST_NAME;
       cin>>LAST_NAME;
       st.setname(FIRST_NAME,LAST_NAME);
       
       cin>>STANDARD;
       st.setstandard(STANDARD);
       
       ss<<st.getage()<<o<<st.getfirstname()<<o<<st.getlastname()<<o<<st.getstandard();
       
       vector<string> vt;string word;
       while(getline(ss,word,',')){
           vt.push_back(word);
       }
       cout<<st.getage()<<endl;
       cout<<vt[2]<<o<<" "<<vt[1]<<endl;
       cout<<st.getstandard()<<endl;
       cout<<" "<<endl;
       string ret = ss.str();
       cout<<ret;
       
       
       
       
       
       
    return 0;
}
