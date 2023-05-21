#include<iostream>

using namespace std;


void change(char *ptr){

  *ptr = 'h';
  ptr[1] = 'a';

}

int main(){
   char a[2] = {'a','h'};
cout<<a<<endl;
   change(a);

cout<<a;

}