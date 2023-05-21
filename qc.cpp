#include<iostream>

using namespace std;

int main()
{
   int t , p , s ;

   cout<<"nhap so tien can nhan sau khi gui ngan hang : "<<endl;
   cout<<"T = ";
   cin>>t;
   cout<<"nhap lai suat trung binh 1 nam : "<<endl;
   cout<<"P = ";
   cin>>p;
   cout<<"nhap so tien can gui : "<<endl;
   cout<<"S = ";
   cin>>s;

   float pc = p / 100 ;
   float n = t / (pc * s );

   cout<<n<<" nam sau ban se nhan duoc so tien "<<t;

   system("pause");

   return 0;
}