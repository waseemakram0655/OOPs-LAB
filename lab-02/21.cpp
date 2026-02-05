#include<iostream>
#include<string>
using namespace std;

class library{
    string title;
    string author;
    int isbn;
    string status;
    int n;


    public:
    void getLibrary(){
      cout<<"Title: "<<title<<endl;
      cout<<"Author: "<<author<<endl;
      cout<<"ISBN: "<<isbn<<endl;
      cout<<"Status: "<<status<<endl;
    }
     void setLibrary(){

        cout<<"Enter the title of the books\n";
        getline(cin,title);
        cout<<"Enter the name of author of the books\n";
        getline(cin,author);
        cout<<"Enter the ISBN of the books\n";
        cin>>isbn;
        cout<<"Enter the status of the book\n";
        cin>>status;


     };
     void setIsbn(int borrow,char x){
  if (x=='b'){
        if (isbn==borrow){
          if(status=="available"){status="borrowed";}
        else cout<<"Not Available\n";}
    }
    if ( x=='r'){
      status="available";
    }
}};
int main(){int a,z=1;
    cout<<"What function you want to perform:\n1.Store information for books\n2.View all books\n3.Borrow book\n4.Return book\n5.Exit\n Enter the number\n";
library b[5];
while (z==1){

int borrow;
    cin>>a;
    
    switch (a){
      case 1:{for(int i=0;i<5;i++){
        b[i].setLibrary();
    }}break;
    case 2:{for(int i=0;i<5;i++){
        b[i].getLibrary();
    }}break;
    case 3: {
    cout<<"Enter the ISBN of the book you want to borrow\n";
    cin>>borrow;
    for(int i=0;i<5;i++){
        b[i].setIsbn(borrow,'b');
    }}break;
    case 4:{
    cout<<"Enter the ISBN of the book you want to return\n";
    cin>>borrow;
    for(int i=0;i<5;i++){
        b[i].setIsbn(borrow,'r');
    }}break;
    case 5:{
	cout<<"Thank you";z=0;}
		break;
	
    default:
            cout << "Invalid Main Menu Choice\n";
}
    }
}
    
    





