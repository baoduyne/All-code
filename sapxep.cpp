#include<iostream>

using namespace std;

void sapxep(int *ptr){
    int max;
    int a;
    for(int i = 0 ; i<5 ; i++){
        max = *(ptr + i);
        for(int j = i + 1 ; j<5 ; j++){
             if(max<*(ptr +j)) {max = *(ptr+j); a = j;}
        }
        int snap = *(ptr + i);
        *(ptr + i) = *(ptr + a);
        *(ptr + a) = snap;
    }

    for(int i = 0 ; i<5 ; i++) cout<<*(ptr+i);
}

int tinhtong(int *ptr){
    int sum;
    for(int i = 0 ; i<5 ; i++){
        sum = sum + *(ptr + i);
    }
    return sum;
}

int main(){
    int a[5] = {4 ,1,7,8,2};
    int *PTR = a ;
sapxep(PTR);
cout<<tinhtong(PTR);

system("pause");
}