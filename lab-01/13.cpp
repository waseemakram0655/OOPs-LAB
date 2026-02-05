#include <iostream>
using namespace std;
int main()
{
  int i, marks[5],total=0;
  float avg;
  cout<<"Enter marks for 5 subjects"<<endl;
  for(int i=1;i<6;i++){
    cin>>marks[i-1];
    total+=marks[i-1];
  }
  for(int i=1;i<6;i++){
    cout<<"Marks for Subject "<<i<<"="<<marks[i-1]<<endl;
}
avg=total/5.0;
cout<<"Average = "<<avg<<endl;
if(avg>=50.0){
  cout<<"Result= Pass"<<endl;
}else cout<<"Result= Fail"<<endl;}