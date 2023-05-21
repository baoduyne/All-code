#include<iostream>

using namespace std;


void giai(char *NHAP[]){

for(int i = 0 ; i<= sizeof(*(NHAP));i++){
  *(NHAP+i) = *(NHAP+i) - 32;
}


}

int main()
{
  int N;
  
char nhap[10];

char *ptr = &nhap[0];

giai(&ptr);

cout<<*(ptr);

}