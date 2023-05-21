#include<iostream>

using namespace std;

struct sinhvien
{
  int tuoi;
  char ten[10] ; 
};

int main(){
   int n,chose;
sinhvien sv[n];

int id = 1 ;

cout<<"nhap thong tin sv : "<<endl;
cout<<"ten : "<<endl;

cin>>sv[1].ten;
cout<<"tuoi"<<endl;
cin>>sv[1].tuoi;

goback:

cout<<"case 1 : them sv } case 2 : xem danh sach "<<endl;
cin>>chose;
switch (chose)
{
case 1:
   id++;
   cout<<"ten";
   cin>>sv[id].ten;
   cout<<"tuoi";
   cin>>sv[id].tuoi;
  break;

case 2 :

for(int i = 0 ; i <= id ; i++)
{ 
cout<<sv[id].ten<<" | "<<sv[id].tuoi<<endl;
}
break;
}

goto goback;











}