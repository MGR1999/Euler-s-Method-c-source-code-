#include <iostream>

using namespace std;


float euler_method(float x, float y, float step, int times);


int main(){

 float t = 0;
 float y = 0;
 float delta = 0;
 int times = 0;

 cout << " please enter intial t/x condition." << endl;

 cin >> t;

 cout << "please enter intial y value." << endl;

 cin >> y;

 cout << "please enter the step size (delta t/x)." << endl;

 cin >> delta;

 cout << "How many times do you want to compute?" << endl;

 cin >> times;

 euler_method(t, y, delta, times);


}

float euler_method(float x, float y, float step, int timez){

 // equation

 float func = x -(x * y);

 if(timez == 0){
 
 	return (y + (step * func));
 } 

 else{
	cout << (y + (step * func)) << endl;
	return euler_method((x + step),(y + (step * func)), step, (timez-1)); 
 }


}



