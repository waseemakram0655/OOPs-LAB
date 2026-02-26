//COPY CONSTRUCTORS
#include<iostream>
using namespace std;

class team{
  int number;
  int score;
  int *wins;
  public:
  void display(){
    cout<<"The number of players is: "<<number<<endl;
    cout<<"The score of the team is: "<<score<<endl;
    cout<<"The number of wins is: "<<*wins<<endl;
  }
  team(int i,int j,const int &k){
    number=i;
    score=j;
    wins=new int;
    *wins=k;
}
team(const team &t){
  wins=new int;
  *wins=*(t.wins);
  number=t.number;
  score=t.score;
}

};
class object{
  int number;
  int id;
  public:
  object(int i,int n){
    number=i;
    id=n;}
void display(){
  cout<<"The number is: "<<number<<endl;
  cout<<"The ID is: "<<id<<endl;

  }
};

int main(){
  //DEFAULT COPY CONSTRUCTOR
//constructors can be copied in main bracket
//like object ob1(10,20);
//ob2=ob1;
//or ob2(ob1);
//For Example
object ob1(10,20);
ob1.display();
object ob2=ob1;
ob2.display();
object ob3(ob2);
ob3.display();
cout<<"\n\n\n\n\n";
//USER DEFINED COPY CONSTRUCTOR
//we must assign new memory if we have pointers or DMA other wise they will point to same location making it dangerous so we must do it and after that we must call destructor.We need these(user defined copy constructor)only if we have pointer or dma if normal then donot need user defined constructor for deep copy.
team t1(9,35,65);
team t2(t1);
t1.display();
t2.display();
//we must use const in passing the refference as it is necessary without it the compiler will produce error.


  return 0;
}