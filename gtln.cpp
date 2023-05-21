#include<iostream>

using namespace std;

int main()
{
char a[5];
int b = 0;

cout<<"nhap gia tri a : "<<endl;

for(int i = 0 ; i<5 ; i++)
{
  cin>>a[i];
}

for(int i = 0 ; i<5 ; i++)
{
  for(int j = i+1 ; j<5 ; j++)

  {
if(a[j]<a[i])
{ b = a[i] ;}
if(a[j]>a[i]) 
{ b = a[j] ;}
  }

}
cout<<"gia tri lon nhat la : "<<endl;
cout<<b;




}