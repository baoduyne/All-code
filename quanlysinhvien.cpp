#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class student {
private :

string name ;
string age;
int id;

public: 
student(){};
student(string ten, string tuoi , int msv ) : name(ten) , age(tuoi) , id(msv){}

void themsv();

void nhapfile();

void xoasv(int a);

void xoatoanbosv();

void show();

void timsv();

void docfile();

void nhapfilebackup();



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

sv.docfile();

goback:
print();
cout<<"1.Them sinh vien."<<endl;
cout<<"2.Xoa sinh vien."<<endl;
cout<<"3.Xoa toan bo sinh vien."<<endl;
cout<<"4.Xem danh sach sinh vien."<<endl;
cout<<"5.Tim sinh vien."<<endl;
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
case 5:

sv.timsv();
system("cls");
goto goback;

case 6:
sv.docfile();
sv.show();
case 0:
return 0;
}


}

void student::themsv(){

string ten,tuoi;
int msv;

   cout<<"Nhap ten sinh vien : "; cin>>ten;
   cout<<"Nhap tuoi sinh vien : "; cin>>tuoi;
   ID++;

msv = ID;

listsv.push_back(student(ten,tuoi,msv));

nhapfile();
nhapfilebackup();

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
                  file<<"Name : "<<listsv[ID-1].name<<endl;
                  file<<"Age : "<<listsv[ID-1].age<<endl;
    file.close();

}

void student::nhapfilebackup(){

    fstream file1;
    file1.open("text1.txt",ios::app);
                file1<<listsv[ID-1].name<<endl;
                file1<<listsv[ID-1].age<<endl;
    file1.close();

}

void student::timsv(){

cout<<"Nhap ten sinh vien can tim : " ;
string ten;
cin>>ten;

for(int i = 0 ; i<listsv.size() ; i++){

    if(listsv[i].name == ten) {

        cout<<"ID : "<<listsv[i].id<<endl;
        cout<<"Ten : "<<listsv[i].name<<endl;
        cout<<"Tuoi : "<<listsv[i].age<<endl;

    }
}

cout<<"DONE!"<<endl;
system("pause");
}

void student::docfile(){
fstream docf;
docf.open("text1.txt",ios::in);

     string tt;
    int i = 0;
    int stt=0;

    string ten,tuoi;
  while(getline(docf,tt)){
 if(i == 1){
tuoi =tt;
    i=0;
    ID++;
    listsv.push_back(student(ten,tuoi,ID));
    goto backk;
 }
ten = tt;
i++;
backk:
int p;
  }
docf.close();

}

