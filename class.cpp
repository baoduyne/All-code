#include<iostream>

using namespace std;

class Student{
private:

string name;
char gender;

public:

Student(){
    name = "unknow";
    gender ='u';
}

Student(string name){
    this->name = name;
    gender ='u';
}

Student(char gender){
    this-> gender=gender;
    name = "unknow";
}

Student(string name , char gender){
    this->name=name;
    this->gender=gender;
}

void display(){
      cout<<"Name: "<<name<<endl;
      if(gender = 'u') cout<<"Gender: Unknow"<<endl;
      if(gender = 'm') cout<<"Gender: Male"<<endl;
      if(gender = 'f') cout<<"Gender: Female"<<endl;
}



};