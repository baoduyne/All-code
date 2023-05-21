#include<iostream>
#include<fstream>

using namespace std;


struct sinhvien
{
   int id;

   int date;
   char name[10];
   char gioi_tinh[3];

};



void fileSearch(int n, int idmax)
{
   sinhvien a[n];
 

  fstream file1;
  file1.open("sinhvien.txt" , ios::in | ios::out);

  int idmax = 0;

  for(int i = 0 ; i<100 ; i++)
  {
   file1>>a[i].id;
    for(int j = i + 1 ; j<100 ; j++)
    {
      file1>>a[j].id;

      if (a[j].id > a[i].id)
      {a[j].id = n;}
    
      else {a[i].id = n;}
    }
  }
  idmax = n;

}



void themsinhvien()
{
   struct sinhvien sv;
   cout<<"nhap ten sinh vien : ";
   cin>>sv.name;
   fileSearch(n,idmax);












}


void menu()
{

int p;


   cout<<"======================(MENU)====================== "<<endl;
   cout<<"1. THEM SINH VIEN."<<endl;
   cout<<"2. XOA SINH VIEN."<<endl;
   cout<<"3. TIM KIEM SINH VIEN."<<endl;
   cout<<"4. HIEN THI DANH SACH SINH VIEN."<<endl;
   cout<<"5. THOAT."<<endl;
   cout<<"======================(MENU)====================== "<<endl;
   cout<<" "<<endl;
   cout<<"LUA CHON : "<<endl;
   cin>>p;

      switch (p)
   {
     case 1:
     themsinhvien();
     break;
     case 3:
     ba();
     break;
     default : 
     cout<<"1 -> 4 !!! "<<endl;
     break;
   }


   
}



int main()
{
    struct sinhvien sv;

    menu();


system("pause");
return main();
}