#include<iostream>
#include<fstream>

using namespace std;

int main()
{


 fstream file;
 file.open("tex.txt" , ios::in | ios::out);

 string nhap;

 cout<<"nhap mot doan ky tu : ";
 cin>>nhap;

 for(int i = 0 ; i<nhap.size() ; i++ )
 {
   nhap[i] = nhap[i] - 32;
   file<<nhap[i];

 }
 
 cout<<"da chuyen thanh ky tu viet hoa ... "<<endl;
 cout<<nhap<<endl;
 return 0;


}