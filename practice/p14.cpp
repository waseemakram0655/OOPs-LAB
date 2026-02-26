// A car rental company rents cars on a per-day basis. The rental rate per day is same for all customers but
// may change depending on company policy.
// Each rental record should store customer name, car model, and number of rental days. The rental rate
// per day should be declared as a static data member. Also, create a static object of the class inside the
// program to demonstrate the concept of static object.
// Write a C++ program that creates at least three rental records and calculates total rental cost.
// Demonstrate how static data member works for all objects.
#include<iostream>
using namespace std;
class car{
  string name;
  string model;
  int noofdays;
  static int chargeperday;
  int total;


  public:
  car(string a,string b,int n):name(a),model(b),noofdays(n){}
static void charge(int n){chargeperday=n;}
void settotal(){
  total=chargeperday*noofdays;
}
void display(){
  cout<<"name :"<<name<<endl;
  cout<<"model :"<<model<<endl;
  cout<<"number of days :"<<noofdays<<endl;
  cout<<"Total bill :"<<total<<endl;
}
};
int car::chargeperday=2500;

int main(){
static car c1("Toyota","XYZ",4);
c1.settotal();
c1.display();
static car c2("Honda","ABC",5);
car::charge(2000);
c2.settotal();
c2.display();
static car c3("Suzuki","xBC",2);
c3.settotal();
c3.display();//if we call the same function twice the constructor will not call 2nd time while running and also in the prescribed boundary like main etc....
  return 0;
}