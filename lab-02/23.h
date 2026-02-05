#include<iostream>
using namespace std;

class employee{
  string name;
  int ID;
  float basesalary;
  int hours;

public:
void set();
void regularpay();
float overtime();
float total(float f);
void display(float overtime,float total);
int search(string nam);
};