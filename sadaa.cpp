#include<iostream>

using namespace std;


struct sinhvien
{
   char name[10];
   int date;

};


int main()
{
    int i=0;
  
    i=i+1;
   sinhvien sv[i];

   cout<<"nhap thong tin sinh vien : ";
   cin>>sv[i].name;
   cout<<"nhap tuoi : ";
   cin>>sv[i].date;

   cout<<"---------------------"<<endl;
   cout<<sv[i].name;
   cout<<sv[i].date;









}