#include<iostream>
using namespace std;

class student{
protected:
float point_1;
float point_2;
public:

static int id ;

void get(){
    cout<<"P1: ";cin>>point_1;
    cout<<"P2: ";cin>>point_2;
}
};

class gd_tc{
protected:
float point_tc;

public:

void get_tc(){
    cout<<"P_tc: ";cin>>point_tc;
}
};

class std_information: public student, public gd_tc
{
private:
float sum;
float medium_score;
public:
void display(){
    sum = point_1+ point_2;
    medium_score = (point_1 + point_2 + point_tc) / 3;
    cout<<sum<<endl;
    cout<<medium_score<<endl;
}



};

int main(){

    std_information std_if;
    student stdnt;
    gd_tc gt;

    std_if.get();
    std_if.get_tc();
    std_if.display();
    
    
    
    

system("pause");
}

