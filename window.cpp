#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;


void GoTo(SHORT posX,SHORT posY)
{
  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD Position;
  Position.X = posX;
  Position.Y = posY;

  SetConsoleCursorPosition(hStdout,Position);

}

void gotoxy(int x , int y)
{
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD a={x,y};
  SetConsoleCursorPosition(h,a);


}

int main()
{
srand(time(0));
    int x=0;
    int y=0;
    int x0,y0;
    int random = rand() %10 + 1 ;
    x0 = random;
    y0 = random;
    
    gotoxy(x0,y0);
    cout<<"O";

    while(true){
      if( kbhit())
      {  
          char key = getch();
          if(key == 'a'){x--;}
          if(key == 's'){y++;}
          if(key == 'd'){x++;}
          if(key == 'w'){y--;}
          

          gotoxy(x0,y0);
          cout<<"O";

          gotoxy(x,y);
          cout<<"*";
 
          Sleep(100);
          system("cls");

          if(x==x0 && y == y0)

          { 
            random = rand() %10 + 1 ;
            y0 = random; 
            x0 = random; 
          }

      }





    }



    }







