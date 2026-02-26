// An online learning platform offers different courses to students. The platform charges the same
// registration fee for all students enrolled in a particular course. However, management may change the
// registration fee in the future.
// Each student record should contain student name, email, and course title. The registration fee should
// not be stored separately for every student; instead, it should be shared among all objects using a static
// data member.
#include<iostream>
using namespace std;

class Platform{
  static int csfee;
  static int sefee;
  static int aifee;
  string name;
  string email;
  string course;
  int *fee;
  public:
  Platform(string name,string email,string course){
    this->name=name;
    this->email=email;
    this->course=course;
    if(course=="AI"){fee=&aifee;}else if(course=="CS"){fee=&csfee;}
    else fee=&sefee;
  }
  void display(){
    cout<<"Student "<<name<<" with email "<<email<<" is enrolled in "<<course<<" with fee "<<*fee<<endl;
  }
  static void changeai(int n){aifee=n;}
  static void changecs(int n){csfee=n;}
  static void changese(int n){sefee=n;}
};
int Platform::aifee=2500;
int Platform::csfee=2600;
int Platform::sefee=2700;
int main(){
  Platform s1("Waseem","waseem@wa.edu.pk","CS"),s2("Rafay","Rafay@xyz.pk","SE");
  s1.display();
  s2.display();
Platform::changecs(3000);
s1.display();





  return 0;
}