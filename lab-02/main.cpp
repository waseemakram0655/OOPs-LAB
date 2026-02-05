#include<iostream>
#include "23.h"
using namespace std;

int main(){
  int n;
cout<<"Enter number of employees\n";
cin>>n;
employee e[n];
float salaries[n];
for(int i=0;i<n;i++){
e[i].set();
}
for(int i=0;i<n;i++){
salaries[i]=e[i].total(e[i].overtime());
}
int z=1;
while(z==1){
string search;
cout<<"Do you want to exit\n1 for yes\n0 for no\n";
cin>>z;
cout<<"Enter the name of employee you want to see information\n";
cin>>search;
for(int i=0;i<n;i++){
  
if(e[i].search(search)==1){
e[i].regularpay();
e[i].overtime();
e[i].total(e[i].overtime());
float x=e[i].overtime();
e[i].display(x,e[i].total(x));
}}}

cout<<"=============================================================\n";
int m=0,y=0;
for(int i=0;i<n;i++){
if(salaries[i]<salaries[y])
 {y=i;}

if(salaries[i]>salaries[m]){m=i;}}
cout<<"The Employee with lowest salary is \n";
e[m].display(e[m].overtime(),e[m].total(e[m].overtime()));
cout<<"The Employee with Highest salary is \n";
e[y].display(e[y].overtime(),e[y].total(e[y].overtime()));
}