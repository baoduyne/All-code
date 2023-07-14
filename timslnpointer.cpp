#include<iostream>

using namespace std;

int sln(int *ptr,int n) {
int sln ;
for(int i =0 ; i<n ; i++){
 for(int j = i+1 ; j<n ; j++){
   sln = *(ptr +i);;
    if(*(ptr + j)>*(ptr+i)) sln = *(ptr+j);
    }
}
return sln;
}

int main(){
    cout<<"nhap day so can tim so lon nhat [N]: "<<endl;
    cout<<"N:"<<endl;

    int N;
    cin>>N;

    int a[N];
int *PTR =a;
    for(int i = 0 ; i<N ;i++){
        cin>>a[i];
    }



cout<<"gia tri lon nhat la: "<<endl;
int SLN = sln(PTR,N);
cout<<SLN;
system("pause");

}