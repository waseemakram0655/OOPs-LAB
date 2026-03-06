#include<iostream>
using namespace std;

class WeatherStats{
public:
int n;
float* temperature=new float[n];

WeatherStats(int v):n(v){
}
void setTemperature(){
for(int i=0;i<n;i++){
cout<<"Enter temperature for day :"<<i+1<<endl;
cin>>temperature[i];
}
}


void calculateAvgtem(){
float t;
for(int i=0;i<n;i++){
t+=temperature[i];}
cout<<"The Average temperature is: "<<t/n<<endl;
}

void getTemperatureFluctuation(){
//highest-lowest
float max=temperature[0],min=temperature[1];
for(int i=0;i<n-1;i++){
if(temperature[i]<temperature[i+1]){
max=temperature[i+1];

}
if(temperature[i]<min){
min=temperature[i];}
}

float u=max-min;
cout<<"The fluctuation is: "<<u<<endl;


}
~WeatherStats(){delete[] temperature;
}
};




int main(){
int n;
cout<<"Enter number of days you want to calculate Average: "<<endl;
cin>>n;
WeatherStats w(n);
w.setTemperature();
w.calculateAvgtem();
w.getTemperatureFluctuation();

return 0;
}