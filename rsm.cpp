#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
#include<ctime>

using namespace std;

struct point
{
  int x;
  int y;
  int x0,y0;

};


void gotoxy(int x , int y)
{
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD a={x,y};
  SetConsoleCursorPosition(h,a);
}


int main()
{
srand(time(0));
int asd;
   point snake[asd];
   int xp,yp; //toa do cua apple;
   int random = rand() %10 + 1;
   int size = 1;
   

   xp = random;
   yp = random;


while(true)
{
if(kbhit())
{  
char key = getch();
  if(key == 'a'){snake[0].x--;}
  if(key == 's'){snake[0].y++;}
  if(key == 'd'){snake[0].x++;}
  if(key == 'w'){snake[0].y--;} 
 for ( int i = 0 ; i<= size ; i++)
 {    
 if(i==0){
    snake[0].x0 = snake[0].x ;
    snake[0].y0 = snake[0].y ;
      gotoxy(snake[0].x , snake[0].y);
      cout<<"*";
 }
else { 
    snake[i].x0=snake[i].x;snake[i].y0=snake[i].y;
    snake[i].x=snake[i-1].x0;snake[i].y=snake[i-1].y;
    gotoxy(snake[i].x,snake[i].y);
       cout<<"*";
}

 }

 gotoxy(xp,yp);
cout<<"O";
if(snake[0].x==xp && snake[0].y==yp)
{ 
    random = rand() %10 +1 ;
    xp=random;
    yp=random;
size++;

}

  Sleep(100);
  system("cls");
  
}    








}



}

