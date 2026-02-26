//CONST POINTERS
////*If the data is constant but pointer not then we don't need to initialize it when we declare it like const int *p;  but if we have constant pointer we must have to initialize while declaring it as it is necessary like int *const p=&x;   if we have both constant we will also initialize it while declaring like const int *const p=&x;
#include<iostream>
using namespace std;
class f{
  //constant pointers and constant data
  int n;
  int w;
  const  int *const p;
  public:
  f(int a,int b):n(a),w(b),p(&n){}
  void modify(){
    //*p=10;
    //p=&w;
    //both are not possible as it is a constant data and constant pointer

  }

};
class w{
  //constant pointers and non constant data;
  int a;
  int b;
  int *const p=&a;
  public:
  w(int x,int y):a(x),b(y){}
  void modify(){
    //p=&b;   we can not modify the pointer as it is constant but we can modify the data
    *p=a+1;


  }
  void display(){
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
  }

};
class object{
  int x;
  int y;
  const int *p=&x;
  public:
  object(int a,int b):x(a),y(b){}
void modify(){
  //We can modify the pointer as iit is not constant
  p=&y;
  //*p=y;
  //as mentioned it is a non constant pointer to constant data so, it can not be modified
}
void display(){
    cout<<"The value of x is :"<<x<<endl;
    cout<<"The value of y is :"<<y<<endl;
    cout<<"The value of the pointer address is :"<<*p<<endl; 
  }
};

int main(){
  object ob1(5,10);
  ob1.display();
  ob1.modify();
  ob1.display();

  w w1(10,15);
  w1.display();
  w1.modify();
  w1.display();


  f f1(25,23);
  return 0;
}