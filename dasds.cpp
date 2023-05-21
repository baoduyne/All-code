#include<iostream>

using namespace std;

int main(){
char a[2]={'a' , 'b'};

char *ptr = a ;
for(int i = 0 ; i<=2 ; i++){
cout<<*(ptr+i);}


}