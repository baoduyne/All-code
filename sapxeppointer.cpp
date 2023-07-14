#include<iostream>

using namespace std;

void sapxep(int *PTR){
int max;
int moc;
int p ;
for(int i = 0 ; i<5 ; i++){
    max = *(PTR+i);
    for(int j = i + 1 ; j<5 ;j++){
      if(max < *(PTR + j)) {
      max = *(PTR+j);
      p = j ;}
    }
    if(max !=*(PTR+i) )
    {moc = *(PTR + i );
    *(PTR + i ) = max;
    *(PTR + p ) = moc;}
}
for(int i = 0 ; i<5 ; i++) cout<<*(PTR+i);
}

int main(){
    int a[5];
    cout<<"Nhap day so : "<<endl;
    for(int i = 0 ; i<5 ; i++){
        cin>>a[i];
    }
    int *ptr = a;
    sapxep(ptr);

    system("pause");
}