//THIS POINTER
//*It is used to remove the confusion of compiler while assigning values to variables and parameter having same name.
//*It is used in method chaining to return the current object.
//*It is used to access the data members of current object.
//When we are using the pointer we use-> sign to access.
//let's start
#include<iostream>
using namespace std;
class object{
  int x;
  int y;
  public:
  void setter(int x,int y){
    this->x=x;
    this->y=y;//resolve naming conflict
  }
  void show(){
    cout<<"The value of x is :"<<x<<endl;
    cout<<"The value of y is :"<<y<<endl;
  }
};
//We shall use this pointer for chaining
class team{
  int a;
  int b;
  int c;
  public:
  team(int x,int y,int z):a(x),b(y),c(z){}
  team& modify()//the return type is team& which is the refference to the same object.like there is a class car and its object is toyota then what we will do is simply through refference make an other name for it named as aliance example car& p=toyota;
  //then we can access its attributes through p like before we use toyota.speed=200; but now we can also use t.speed=200;
  {a=0;b=0;c=0;
  return *this;//We will return this pointer
  }
  void display(){
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of c is :"<<c<<endl;
  }


};

int main(){
  object ob1;
  ob1.setter(10,20);
  ob1.show();
  //It is Normal approach but if we use pointer
  object *ptr=&ob1;
  ptr->setter(5,15);
  ob1.show();
  ptr->show();
  //It is done through the -> operator
  team t1(5,10,15);
  t1.display();
  t1.modify().display();
  //As i mentioned the chaining is created

}