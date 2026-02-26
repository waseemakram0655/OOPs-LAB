//Inline functions and static data members
//INLINE FUNCTION
//*inline functions are used to save time that they only consist of one line and they are used to prite only one line if it is exceeded from one line then it becomes normal function look at the example
#include<iostream>
using namespace std;
class object{
  //A static member function can only access static function not normal functions
  int x=10;
  int y=52;
  //static data members
  static int z;
  public:
  inline void display(){cout<<"The number is :"<<x<<endl;}
void static print(){
//cout<<""<<x<<endl;  we can only print static variables
//cout<<""<<y<<endl;
z=25;cout<<""<<z<<endl;
}
};

int object::z=0;//static data member initialization.
int main(){
  //In main we use if our class is object and x is static so, the syntax will be student::x;
  //::This is scope resolution operator
  //Satatic function can only modify static variables
  object o;
  o.display();
  o.display();
  o.print();
}