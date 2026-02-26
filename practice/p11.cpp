// A software house wants to develop a simple Employee Management System to manage employee
// records.
// Whenever a new employee joins the company, a new object of the Employee class is created in the
// system.
// The management has the following requirement:
//  Every employee must have a unique Employee ID.
//  The Employee ID should be generated automatically.
//  The ID should increase sequentially (for example: 1001, 1002, 1003…).
//  The user should NOT manually enter the Employee ID.
// Since the Employee ID generator should be common for all employees and must maintain continuity,
// the system should use a static data member to generate unique IDs.
#include<iostream>
using namespace std;
class employee{
static int generator;
string name;
string department;
int id;

public:
employee(string name,string department){
  this->department=department;
  this->name=name;
  id=generator;
  generator++;
}
void display(){
  cout<<"The employee name is "<<name<<" with department "<<department<<" having ID "<<id<<endl;
}

};
int employee::generator=1001;


int main(){
employee e1("Waseem","AI"),e2("Rafay","Finance"),e3("Saqib","CS");
e1.display();
e2.display();
e3.display();
  return 0;
}