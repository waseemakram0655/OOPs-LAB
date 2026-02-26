// You&#39;re building a simple food delivery app. The app has Customer and Restaurant. They connect
// through Order.
// Your Task:
// Write the code for Customer, Restaurant, and Order classes showing their relationship.
// Simple Requirements:
// 1. Customer Class:
// o Properties: name
// o Method: placeOrder(Restaurant* r, string food) - creates an order
// 2. Restaurant Class:
// o Properties: name
// o Method: takeOrder(Order* o) - receives an order
// 3. Order Class:
// o Properties: id, customer, restaurant, foodItem
// o Method: show() - prints order details
// o

// What Your Code Must Show:
// Customers and Restaurants created first (before any orders)
// Order connects them (stores customer and restaurant names)

#include<iostream>
using namespace std;

class customer{
    public:
    string name;
    customer(string i=""):name(i){}
    void placeorder(order &o,rest &p){
      string a,b;
      cout<<"Enter the food you want to order:"<<endl;
      cin>>a;
      o.setfood(a);
      cout<<"Enter the restaurant from which you want to order:"<<endl;
      cin>>b;
      p.setrest(b); 
    }
string getcustomer(){return name;}
};
class rest{
    private:
 string name;
 
 public:
 string status;
 rest(string nam=""):name(nam){}
    string getrest(){return name;}
    void setrest(string o){
      name=o;
    }
    void takeorder(string x){
   status=x;}
};
class order{
    public:
    int id;
    customer *c;
    rest *r;
    string fooditem;

    order(int i=1,string food="",customer *s,rest*l):id(i),fooditem(food){r=l;
      c=s;
    }
    void setfood(string x){
      fooditem=x;
    }
    void est(){cout<<c->getcustomer()<<" placed order at "<<r->getrest()<<endl;}
      void info(){cout<<id<<" "<<fooditem<<" for "<<c->getcustomer()<<" from "<<r->getrest()<<endl;}
      void status(){cout<<r->getrest()<<" "<<r->status<<" "<<fooditem<<endl;}
      void gone(){cout<<c->getcustomer()<<" still exists: "<<r->getrest()<<endl;}
        
    };
    // void placingorder(){
    //    cout<<c->name<<" placed order at "<<r->name<<endl; }
    //    void orderdetails(){
    //     cout<<"order Number "<<id<<":"<<c->name<<" placed order at "<<r->name<<" for "<<fooditem<<endl; }
       

int main(){
    customer s1("Talha");
    rest r1("XYZ");
    r1.takeorder("WAiting");
    order o1(101,"Cake",&s1,&r1);
    s1.placeorder(o1,r1);
     cout<<"=================================placing order============================"<<endl;
     o1.est();
     cout<<"=================================Order Details============================"<<endl;
     o1.info();
     cout<<"=================================Restaurant Status============================"<<endl;
     o1.status();
     cout<<"=================================After Orders Are Gone============================"<<endl;
     o1.gone();
    
}