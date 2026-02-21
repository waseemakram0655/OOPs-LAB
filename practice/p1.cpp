#include<iostream>
using namespace std;
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