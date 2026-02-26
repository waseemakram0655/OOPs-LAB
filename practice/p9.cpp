#include<iostream>
#include<string>
using namespace std;
class player{
	string name;
	int number;
	
	public:
		player(string s="",int p=0):name(s),number(p){
		}
		void setname(string n){name=n;
		}
		void setnumber(int n){number=n;
		}
		string getname(){return name;
		}
		int getnumber(){return number;
		}
		void display(){
			cout<<"Player name is "<<name<<endl;
			cout<<"Player number is "<<number<<endl;
		}
};
class team{
	player p[5];
	string name;
	int count;
	public:
		team(string n="",int f=0):name(n),count(f){
		}
		
		void setname(string n){name=n;
		}
		void setcount(int g){count=g;
		}
		int getcount(){return count;}
		string getname(){return name;
		}
		void setplayer(){
			for (int i=0;i<count;i++){
				string h;int c;
				cout<<"Enter name of player\n";
				cin>>h;
				cout<<"Enter number of player\n";
				cin>>c;
				p[i].setname(h);
				p[i].setnumber(c);
			}
		}
		void display(){
			cout<<"The name of team is "<<name<<endl;
			for (int i=0;i<count;i++){
				p[i].display();
		}
		
	}
	
};
int main(){
	team t1("Pakistan",5);
	t1.setplayer();
	t1.display();
	return 0;
}