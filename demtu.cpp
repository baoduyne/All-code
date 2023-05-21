#include<iostream>
#include<string.h>

using namespace std;


void nhaptu(char a[20])
{
  char b = 32;
  int c = 0 ;

  for(int i=0 ; i<=20 ; i++)
  {
    if(a[i] == b)
    { c = c + 1 ;}
  }
 cout<<"so chu : "<<c+1<<endl;
 cout<<"so chu cai : "<<strlen(a)-c;
 
}



int main()
{
  char A[20];
  cout<<"nhap thong tin : ";
  cin.getline(A,20);
  nhaptu(A);





}