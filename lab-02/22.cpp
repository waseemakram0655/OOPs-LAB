// Create a banking system that manages accounts with:
//  Account number
//  Account holder name
//  Current balance
// The system must support these operations:
// 1. Deposit money into account
// 2. Withdraw money from account
// 3. Check current balance
// 4. Display account information
// 5. Validate all transactions (no negative deposits, no overdrafts)
// Rules:
//  Account balance cannot go negative
//  Withdrawal amount must be ≤ current balance
//  Deposit amount must be positive
#include <iostream>
using namespace std;

class bank{
  string number;
  string name;
  int balance;
public:
bank(){
    number = "12345";
    name = "Waseem";
    balance = 0;
}

  
  //
  void function(string num,int bal,int choise){
    if(choise==1){
    if(num==number){
    if(bal<=0){
      cout<<"Invalid Amount\n";
    }
    else{
      balance+=bal;
      cout<<"Deposit Successful\n";
    }
  }
else cout<<"Invalid Number\n";}
if(choise==0){
  if(num==number){
    if(bal<=0){cout<<"Invalid Amount\n";}
    else if (bal>balance){cout<<"Low Account Balance\n";}
    else {
      balance-=bal;
      cout<<"Withdrawal Successful\n";
    }
  }else cout<<"Invalid number\n";
}
  }

  void check(string num){
    if(num==number){cout<<"Your balance is = "<<balance<<endl;}
    else cout<<"Invalid Account number\n";
  }
  void display(string numb){
    if(numb==number){
      cout<<"Name = "<<name<<endl;
      cout<<"Account Number = "<<number<<endl;
      cout<<"Balance = "<<balance<<endl;
    }
    else cout<<"Invalid  account\n";
  }

};

int main(){
bank b1;
int z=0,n,balance;
string name,number;
while(z==0){
cout<<"Enter the Function You want to perform\n1. Deposit money into account\n2. Withdraw money from account\n3. Check current balance\n4. Display account information\n5. Exit\n\nKindly Enter The Number\n";
 cin>>n;
 switch(n){
  case 1:{
  cout<<"Enter Account Number\n";
  cin>>number;
  cout<<"Enter Amount to Deposit\n";
  cin>>balance;
b1.function(number,balance,1);
b1.display(number);
  break;}
  case 2:{
  cout<<"Enter Account Number\n";
  cin>>number;
  cout<<"Enter Amount to Withdrawal\n";
  cin>>balance;
b1.function(number,balance,0);
b1.display(number);
  break;}
  case 3:{
    cout<<"Enter Account Number\n";
  cin>>number;
  b1.check(number);
  break;}
  case 4:{
    cout<<"Enter Account Number\n";
  cin>>number;
  b1.display(number);
  break;}
  case 5:{z=1;
  break;}
  default : {cout<<"Invalid input\n";};
 }

}
}