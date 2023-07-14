#include<iostream>

using namespace std;

void chuyenhoa(char *ptr){
    for(int i = 0 ; i<5 ; i ++){
*(ptr+i)=*(ptr+i) - 32;
cout<<*(ptr+i);
    }
}

int main(){
    char a[5] = {'d' ,'u','y','d','z'};
    char *PTR;
    PTR = a;
    chuyenhoa(PTR);
    system("pause");
}