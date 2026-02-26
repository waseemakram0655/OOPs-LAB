#include<iostream>
using namespace std;
//The default constructor is not called if there exists a parameterized one, so if want to do so we shall need constructor overloading meaning creating multiple constructors with same name and kinds

class student{
  int numberofstudent;
  string teacher;
  public:
  student(int n,string s){
    numberofstudent=n;
    teacher=s;
  }
  void getter(){
    cout<<"Teacher Name: "<<teacher<<endl;
    cout<<"Number of students: "<<numberofstudent<<endl;
  }
};
int main(){
  student s1(4,"waseem");
  s1.getter();
}