
#include<iostream>
using namespace std;

class employee{
    int id;
    string name;
    float salary;

    public:
    static int count;

    employee(int id,string name,float salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
        count++;
    }
    void display(){
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"salary = "<<salary<<endl;
        cout<<"\n";
    }
    static void c(){
        cout<<"The total number of employees are "<<count<<endl;
        cout<<endl;
    }
};
int  employee::count=0;

int main(){
    int i=1001;
    employee e1(i,"waseem",250000.25);
    e1.display();
    employee e2(i+1,"Talha",255000.25);
    e2.display();
    employee e3(i+2,"Ahmed",250200.25);
    e3.display();
    employee e4(i+3,"Rafay",260000.25);
    e4.display();
    employee::c();
    employee e5(i+4,"Saqib",290000.25);
    e5.display();
    employee::c();



    return 0;
}

