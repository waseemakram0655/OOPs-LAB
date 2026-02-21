#include<iostream>
using namespace std;

class bankaccount{
 static double annualinterestrate;
  double savingbalance;

  public:
    
  bankaccount(double y){
  savingbalance=y;}
  double calculatemonthlyinterest(){
    return (savingbalance*annualinterestrate)/12;
  }
  void totalbalance(){
    savingbalance+=calculatemonthlyinterest();
  }
  static void modifyinterestrate(double x){
    annualinterestrate=x;
  }
  void display(){
    cout<<"The new balance is: "<<savingbalance<<endl;
  }
};
double bankaccount::annualinterestrate=0.03;
int main(){
bankaccount saver1(2000), saver2(3000);

saver1.totalbalance();
saver1.display();
saver2.totalbalance();
saver2.display();
bankaccount::modifyinterestrate(0.04);
saver1.totalbalance();
saver1.display();
saver2.totalbalance();
saver2.display();
  return 0;
}