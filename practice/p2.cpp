#include<iostream>
using namespace std;
 // Parameterized constructor using initializer list
 class teacher{
  string name;
  int age;
  

  public:
  //We can also use a default argument to overcome overloading for default and parameterized for example teacher and the class men
  teacher(string b="unknown",int v=18):name(b),age(v){}

 };
 class student{
   int age;
 string name;

 public:
 student(){age=18;
name="Unknown";}
 student(int f,string h):age(f),name(h){}
 };
 class men{
  string name;
  int power;
   public:
   men(string b="Unknown",int pow=100):name(b),power(pow){}
   void display(){
    cout<<"The name of men is :"<<name<<endl;
    cout<<"The power of men is :"<<power<<endl;
   }
 };
 int main(){
  teacher t0;
  teacher t1("waseem",121);
  student s1;
  //Constructor run only when the object is created.
  student s2(45,"Rafay");
  men m1;
  men m2("Waseem",100);
  men m3("Rafay",99);
  m1.display();
  m2.display();
  m3.display();
  //As shown it works as i defined no need for different default and parameterized constructors..


  //Destructor 
  //Destructor is used to release resources and perform cleanup when an object is destroyed
  //the syntax is tilda +constructor~teacher(){delete xyz;}
  //It runs after the main braces.
  //Actually it is used to clean space produced by DMA other then that we don't really use it for simple allocation like static because the compiler may act as a destructor that it cleans up the space.destructors don't overload
  

 }
