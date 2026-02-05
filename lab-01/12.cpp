#include<iostream>
using namespace std;
struct book{
	int bookId;
	string bookName;
	string Author;
	float price;
};
void input(struct book b[]){
for (int i=0;i<3;i++){
	cout<<"Book"<<i+1<<endl;
	cout<<"Enter BookId"<<endl;
	cin>>b[i].bookId;
	cout<<"Enter BookName"<<endl;
	cin>>b[i].bookName;
	cout<<"Enter BookAuthor"<<endl;
	cin>>b[i].Author;
	cout<<"Enter BookPrice"<<endl;
	cin>>b[i].price;
	
}
}
void show(struct book b[]){
	for (int i=0;i<3;i++){
	cout<<"Book"<<i+1<<endl;
	cout<<"BookId "<<b[i].bookId<<endl;
	cout<<"BookName "<<b[i].bookName<<endl;
	cout<<"Author "<<b[i].Author<<endl;
	cout<<"Price "<<b[i].price<<endl;	
}
}
void cal(struct book b[]){
	float total;
	for (int i=0;i<3;i++){
		total+=b[i].price;
	}
	cout<<"Total Price :$"<<total<<endl;
}
int main(){
 book b[3];
 input(b);
 show(b);
 cal(b);
 
	
}