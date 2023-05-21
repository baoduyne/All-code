#include<iostream>
#include<fstream>

using namespace std;

struct stola
{
  string a[1000];

};

void hehe()
{
   struct stola st;
   cout<<"nhap ho ten : "<<endl;
   cin>>st.a[1000];

 
 
   ofstream outfile;
   outfile.open("fstream.txt", ios::app);

   outfile<<st.a[1000]<<endl;

   outfile.close();
}

int main()
{
   struct stola st;
   hehe();
   
   ifstream infile;
   infile.open("fstream.txt" , ios::in);
   infile>>st.a[1000];
   infile.close();
    system("pause");
    return 0;
   }
   



