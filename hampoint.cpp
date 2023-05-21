#include<iostream>

using namespace std;

void tang(char *ptr){
  for(int i = 0 ; i<3 ; i++){
    *(ptr + i) = *(ptr +i) -32;
  }
}


int main(){
char a[3] = {'a','b','c'} ;
cout<<a;

tang(a);

for(int i = 0 ; i<3 ; i++){
    cout<<a[i];
}



}