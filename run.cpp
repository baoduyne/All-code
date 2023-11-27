#include<iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;

void gotoxy(int x,int y)
{
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD a={x,y};
  SetConsoleCursorPosition(h,a);

}

int main(){
    int n;
char line[1000];
cin.getline(line,1000);
n = strlen(line);


system("cls");

for(int i = 0 ; i<n ; i++){
    cout<<""<<endl;
 for(int m = 0 ; m<i ; m++){
    cout<<line[m];
 }

 Sleep(200);



 
   for(int j = 97 ; j<123 ;j++){
    char ch=j;
        gotoxy(i,i);cout<<ch;
        Sleep(100);

        if(j == 122){
            gotoxy(i,i);cout<<" ";
            Sleep(200);
            break;
        }
        
        if(j == line[i]){
          Sleep(200);
       break;
        }
        

   }

   
}

cout<<""<<endl;
system("pause");
}