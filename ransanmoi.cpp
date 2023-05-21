#include<iostream>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

void setwindowsize(short width , short height)
{
  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

  SMALL_RECT WindowSize;
  WindowSize.Top = 0;
  WindowSize.Left = 0 ;
  WindowSize.Right = width;
  WindowSize.Bottom = height;

  SetConsoleWindowInfo(hStdout,1,&WindowSize);

}


void GoTo(SHORT posX,SHORT posY)
{
  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD Position;
  Position.X = posX;
  Position.Y = posY;
}

int main()
{
     GoTo(20, 40);

      cout<<"hello";

      system("pause");



}





