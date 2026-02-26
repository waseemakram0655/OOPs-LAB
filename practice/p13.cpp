// A school wants to calculate examination results of students. All students are evaluated based on the
// same passing marks criteria. The passing marks are fixed and common for every student.
// Each student record should contain roll number, student name, and obtained marks. The passing marks
// should be implemented as a static data member. Create an inline function inside the class that checks
// whether the student has passed or failed based on the passing marks.
// Write a C++ program to create at least three student objects and display whether each student has
// passed or failed.

#include<iostream>
using namespace std;
class School{
  string name;
  int rollno;
  int marks;
  static int passingmarks;
  string status="none";

  public:
  School(string n,int num,int mark):name(n),rollno(num),marks(mark){}

  inline void check(){
    if(marks>=passingmarks){status="Pass";}else status="Fail";
  }
  void display(){
    cout<<"Student "<<name<<" is "<<status<<endl;
  }

};
int School::passingmarks=451;
int main(){
  School* school[2];
  school[0]=new School("Waseem",7,500);
  school[1]=new School("Ali",2,450);
  for(int i=0;i<2;i++){
    school[i]->check();
    school[i]->display();

  }
  delete school[0];
  delete school[1];

  return 0;
}