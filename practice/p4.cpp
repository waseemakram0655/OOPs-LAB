//CONST CASES
//c*onst variables are read only variables
//c*onst variables must be initialized when declared
//*const array can ot be modified
//*const member function can not modify any element and the syntax is void function()const{}
//**constant objects */
//**const objects can only call const member function the reason is as they are the only one which can make its constancy possible Their syntax is {const class object(x,y,z);} */
//*the constructor is same to be called if not present then the default constructor by compiler will be called
//*const class members can only be initialized through the member initializng list like 
//class{const int a,b;
//class(int x,int y):a(x),b(y){};
//}*if the function is read only only then it can be declared const no modification allowed
//*we can not assign normal variable to constant but constant to normal the reason is that it makes normal more safe butthe normal make constant less safe...
//*Now let's start
#include<iostream>
using namespace std;
class object{
  //If a class has const data members, you MUST initialize them using a constructor initializer list.
//If no constructor initializes them, the program will give an error when an object is created.
  const int x;
  const int y;
  int z;


  public:
  object(int a=0,int b=0,int c=0):x(a),y(b),z(c){//We used member initializing list to assign constant data members as shown
  }
  //const member function
  void display()const{
    cout<<"The value of x is :"<<x<<endl;
    cout<<"The value of y is :"<<y<<endl;
    cout<<"The value of z is :"<<z<<endl;
  //z+=12; we connot modify anyvalue in constant member functions
  }
  void settodefault(){
    z=0;
    //since it is a normal function it can not be called by constant objects
  }
};

int main(){
  object ob1;
  ob1.display();
  //Now constant objects as i said it can not call normal functions it can only call constant functions
  const object ob2(1,5,3);
ob2.display();
//ob2.settodefault()   as i said compiler shows error


  return 0;
}