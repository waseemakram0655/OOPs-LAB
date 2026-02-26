// The space agency is also working on software that keeps track of its missions, and the spacecrafts and astronauts
// associated with those missions. Each Astronaut has a name, expertise, and a status (assigned to a mission or not).
// Each spacecraft has a unique name, capacity, and mission readiness status. Each mission has a unique name,
// duration, mission requirements, and destination. It also stores information about the spacecraft used for the
// mission, and the astronauts participating in the mission. One mission can have only one spacecraft, and can have
// a maximum of n astronauts, where n is the capacity of the spacecraft participating in the mission. It has the
// functionality to assign a spacecraft to the mission, which ensures that the spacecraft is mission ready before
// assignment, and then updates the maximum number of astronauts that can be assigned to the mission. It also has
// the functionality to add an astronaut to the mission, which first ensures that the astronaut is not assigned to any
// other mission, and then checks if their expertise matches at least one of the mission requirements. This function
// also validates that no more than n astronauts can be added to the mission. For the above scenario, your task is to
// identify the attributes and functions of all three entities, and write a C++ program for it. You need to match the
// following requirements:
// 1. Implement the astronaut class with a parameterized constructor, using member initialization list and also
// provide destructor.
// 2. Implement the spacecraft class with a parameterized constructor, using member initialization list.
// 3. Perform the following tasks:
// i. Implement the mission class with a parameterized constructor that accepts all class members as
// argument, except the astronauts. You need to dynamically allocate an array for astronauts based
// on the spacecraft size.
// ii. Implement the function for adding a spacecraft as defined in the scenario.
// iii. Implement the function for adding an astronaut as defined in the scenario.
#include<iostream>
using namespace std;
class astronaut{
  string name;
  string expertise;
  string status;
  public:
  astronaut(string n,string h,string j):name(n),expertise(h),status(j){}
  void setname(string f){name=f;}
  void setexpertise(string f){expertise=f;}
  void setstatus(string f){status=f;}
  string getname(){return name;}
  string getstatus(){return status;}
  string getexpertise(){return expertise;}

};
class spacecraft{
  string name;
  int capacity;
  string readiness;
  public:
  string getreadiness(){return readiness;}
  string getname(){return name;}
  int getcapacity(){return capacity;}
  void setreadiness(string n){
    readiness=n;
  }
  spacecraft(string n,int h,string j):name(n),capacity(h),readiness(j){}

};
class mission{
  string name;
  int duration;
  string requirement;
  string destination;
  spacecraft &sp;


  public:
  mission(string n,int m,string o,string p,spacecraft &s):name(n),duration(m),requirement(o),destination(p),sp(s){}

  astronaut *ast[sp.getcapacity()];
  ast=new astronaut[sp.getcapacity()];
  for (int i=0;i<sp.getcapacity();i++){
    cout<<"Enter Astronaut name"

  }
  

};
int main(){

}