#include<iostream>
#include<fstream>

using namespace std;



int main()
{
 int tuoi;
 string name;
 int id = 0 ;
 string dot = " ";
 int a;
 char b[13];
 int choice;

start1 :

fstream file;
file.open("tex.txt" , ios::app | ios::out );

cout<<"nhap ten , tuoi cua ban : "<<endl;
cout<<"ten : ";
cin>>name;
cout<<"tuoi : ";
cin>>tuoi;

id ++;

file<<name;

if(name.size() < 10 ) 
{
    for(int i = 0 ; i < 10 - name.size()  ; i++)
    { file<<dot; }
} 

file<<tuoi;
file<<id;

cout<<"=============================="<<endl;

cout<<name<<endl;
cout<<tuoi<<endl;
cout<<id<<endl;

cout<<"=============================="<<endl;
start:
cout<<"1.nhap thong tin "<<endl;
cout<<"2.tra cuu "<<endl;

reback:

cin>>choice;

switch(choice)
{
case 1:
{
    goto start1;
    break;
}

case 2:
{
    goto begin;
    break;
}

default:
{
  cout<<"nhap lai !! ";
  goto reback;
}



}

begin:
cout<<"nhap id : ";

cin>>a;
a=(a-1)*13;
file.seekg(a,ios::beg);

for(int i = 0 ; i<13 ; i++)
{
file>>b[i];
}
cout<<b;


goto start;

return 0;

}