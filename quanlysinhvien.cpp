#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class student {
private :

string name ;
int age;
int id;

public: 
student(){};
student(string ten, int tuoi , int msv ) : name(ten) , age(tuoi) , id(msv){}

void themsv();

void nhapfile();

void xoasv(int a);

void xoatoanbosv();

void show();



vector<student> listsv;

};

void print(){
cout<<"----------------------------"<<endl;
}

static int ID;


int main(){
student sv;
int chose;
ID = 0;
goback:
print();
cout<<"1.Them sinh vien"<<endl;
cout<<"2.Xoa sinh vien"<<endl;
cout<<"3.Xoa toan bo sinh vien"<<endl;
cout<<"4.Xem danh sach sinh vien"<<endl;
cout<<"0.Thoat"<<endl;
print();
cout<<"P/S : Toan bo thong tin sinh vien se duoc them vao file 'text.txt' "<<endl;
cin>>chose;

switch(chose){
case 1:
sv.themsv();
goto goback;
case 2:
int A;
         sv.show();           
           cout<<"Nhap ID sinh vien can xoa : "; cin>>A;
sv.xoasv(A);
goto goback;
case 3:
sv.xoatoanbosv();
goto goback;
case 4:
sv.show();
system("cls");
goto goback;
case 0:
return 0;
}


}

void student::themsv(){

string ten;
int tuoi,msv;

   cout<<"Nhap ten sinh vien : "; cin>>ten;
   cout<<"Nhap tuoi sinh vien : "; cin>>tuoi;
   ID++;

msv = ID;

listsv.push_back(student(ten,tuoi,msv));

nhapfile();

cout<<"DONE!";
system("pause");
system("cls");

}

void student::xoasv(int a){
         
  
for(int i = 0 ; i<listsv.size();i++){
    if(listsv[i].id == a) listsv.erase(listsv.begin()+i);
}

for(int i = 0 ; i<listsv.size(); i++){
    listsv[i].id --;
}

ID--;

cout<<"DONE!";
system("pause");
system("cls");

}

void student::xoatoanbosv(){
    listsv.clear();
    cout<<"DONE!";
    system("pause");
    system("cls");
ID=0;
}

void student::show(){
    for(int i = 0 ; i<listsv.size();i++){
       print();
       
       cout<<"ID : "<<listsv[i].id<<endl;
       cout<<"Name : "<<listsv[i].name<<endl;
       cout<<"Age : "<<listsv[i].age<<endl;

    }

    system("pause");

}


void student::nhapfile(){
    fstream file;
    file.open("text.txt",ios::app);
    file<<"-------------"<<endl;
                  file<<"Name : "<<listsv[ID-1].name<<endl;
                  file<<"Age : "<<listsv[ID-1].age<<endl;
    file.close();
}