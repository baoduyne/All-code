#include<iostream>

using namespace std;



class person{
  protected:
  string name;
  int age;

  public:
  void get();
  void put();
};

class student : public person{
int id;
int marks[6];
public:

virtual void get(){
  static int IDst = 1;
  int sum=0;
  for(int i = 0 ; i<6; i++){
    sum = sum + marks[i];
  }
  cout<<name<<" "<<age<<" "<<sum<<" "<<IDst<<endl;
  IDst++;
}

virtual void put(){
  cin>>name;
  cin>>age;
  for(int i = 0 ;i<6 ;i++){
    cin>>marks[i];
  }
}

};

class professor : public person {
int cer;

public:

virtual void put(){
  cin>>name;cin>>age;cin>>cer;
}

virtual void get(){
  static int IDpr = 1;
  cout<<name<<" "<<age<<" "<<cer<<" "<<IDpr<<endl;
  IDpr++;
}



};




int main(){
  student st;
  professor pr;
  int n ;
  cin>>n;
  for(int i = 0 ;i<n;i++){
    int chose;
    cin>>chose;
    if(chose==1){
           pr.put();
           pr.get();
    }
    if(chose==2){
      st.put();
      st.get();
    }
  }
  system("pause");
  return 0;
}