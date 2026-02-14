#include<iostream>
using namespace std;

class satellite{
const int id;
const string date;
float radius;

public:
satellite(int id,string date,float radius):id(id),date(date){

    this->radius=radius;
}
static int counter;
void viewReport(){
    cout<<"ID ="<<id<<endl;
    cout<<"Date ="<<date<<endl;
    cout<<"Radius ="<<radius<<endl;
    cout<<endl;
    counter++;

}

void calibrate(float r){
    radius=r;

}
void count(){
    cout<<"The number of times report viewed are "<<counter<<endl;
    cout<<endl;
}



};
int satellite::counter=0;

int main(){
satellite s1(1001,"17th July",2002);
satellite s2(1201,"19th July",2202);
s1.viewReport();
s1.count();
s1.calibrate(28.5);
s1.viewReport();
s1.count();


    return 0;
}