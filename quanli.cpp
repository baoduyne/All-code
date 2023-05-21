#include<iostream>


using namespace std;

struct diemtb 
{
   string name;
   int toan;
   int van;
   float diemtrungbinh;

};
 

int main()
{
    int i=0;
struct diemtb a[i];
    
    mama:
    i=i+1;


   cout<<"nhap ten :";
   cin>>a[i].name;
   cout<<"nhap diem toan --> van :";
   cin>>a[i].toan;
   cin>>a[i].van;

   cout<<"-------------";
   
   a[i].diemtrungbinh = (a[i].toan + a[i].van)/2;


   cout<<"id : "<<i<<endl;
   cout<<"ten : "<<a[i].name<<endl;
   cout<<"diemtrungbinh : "<<a[i].diemtrungbinh<<endl;

   cout:"---------------";
menu:
   cout<<"MENU : ";
   cout<<"1.them hoc sinh"<<endl;
   cout<<"2.tra cuu"<<endl;


int pick ;

cin>>pick;

switch(pick)
{
  case 1 : 
  {
     goto mama;
     break;

  }

 case 2 :

 {
    int b;
    cout<<"nhap id : ";
    cin>>b;
    cout<<a[b].name;
    cout<<a[b].diemtrungbinh;
    goto menu;
    break;

 }


}






   






}