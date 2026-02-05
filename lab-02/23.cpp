#include "23.h"
#include<iostream>
using namespace std;

void employee::display(float overtime,float total){
  cout<<"Name = "<<name<<endl;
  cout<<"ID = "<<ID<<endl;
  cout<<"Hours = "<<hours<<endl;
  cout<<"Base Salary = "<<basesalary<<endl;
  cout<<"Overtime = "<<overtime<<endl;
  cout<<"Total Salary = "<<total<<endl;}

  int employee::search(string nam){
if (name==nam){return 1;}
else return 0;
}
void employee::regularpay(){
  cout<<"The regular pay is = "<<basesalary<<endl;
}
float employee::overtime(){
  if(hours>40){
    float to=(hours-40)*1.5*basesalary/(30*8);
    cout<<"Total hours worked overtime = "<<hours-40<<endl;
    cout<<"Overtime Salary = "<<to<<endl;
  return to;
  }else {cout<<"No Overtime done"<<endl;
  return 0.0;}

}
float employee::total(float f){
float total=f+basesalary;
cout<<"The total salary is = "<<total<<endl;
return total;
}
void employee::set(){
  cout<<"Enter name of employee\n";
  cin>>name;
  cout<<"Enter ID\n";
  cin>>ID;
  cout<<"Enter Basic Salary\n";
  cin>>basesalary;
  cout<<"Enter Hours worked\n";
  cin>>hours;}