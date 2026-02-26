
// An event management company organizes different types of events such as weddings, seminars,
// conferences, birthday parties, and corporate meetings. Every time the company confirms and registers a
// new event, a new event record is created in the system.
//  The company owner wants to track:
//  The total number of events ever registered.
//  The number of completed events.
//  The number of upcoming events (yet to be conducted).
// Since these values represent shared information for all events, the system should use static data
// members to maintain overall event statistics.
#include<iostream>
using namespace std;
class event{
  private:
  string name;
  int date;
  string type;
  static int nupcomingevents;
  static int ncompletedevents;
  static int totalevents;

  public:
  event(string n,int d,string t,int todaydate){
    name=n;
    date=d;
    type=t;
    if(d>=todaydate){
      nupcomingevents++;
      totalevents++;
    }else{ncompletedevents++;
    totalevents++;}
  }
  static void display(){
    cout<<"The total events ever registered is = "<<totalevents<<endl;
    cout<<"The total events completed is = "<<ncompletedevents<<endl;
    cout<<"The total events upcoming is = "<<nupcomingevents<<endl;
    
  }
};
int event::nupcomingevents;
int event::ncompletedevents;
int event::totalevents;

int main(){
  event e1("waseem",15,"marraige",10),e2("Rafay",9,"Birthday",10);
  event::display();
}