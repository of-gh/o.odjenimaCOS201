#include <iostream>
#include <cstdlib> 
using namespace std;

int add(int num1, int num2){
	int added = num1 + num2;
	return added;
}

int subtract(int num1, int num2){
	int sbtrct = num1 - num2;
	return sbtrct;
}

double divid(int num1, int num2){
	double divided = num1 / num2;
	return divided;
}
int multi(int num1, int num2){
	int mltpld = num1 * num2;
	return mltpld;
}
int mod(int num1, int num2){
	int modulos = num1 % num2;
	return modulos;
}
int main(){
	int num1;
	int num2;
	cout << "Enter Number 1\n";
	cin >> num1;
	cout << "Enter Number2\n";
	cin >> num2;
	
	int result1 = add(num1,num2);
	cout<< "Addition of your two numbers is: "<< result1<<endl;
	int result2 = subtract (num1,num2);
	cout<< "Subtraction of your two numbers is: "<< result2 <<endl;
	int result3 = divid(num1,num2);
	cout<< "Division of your two numbers is: "<< result3<<endl;
	int result4 = multi(num1,num2);
	cout<< "Multiplication of your two numbers is: "<< result4<<endl;
	int result5 = mod(num1,num2);
	cout<< "Modulos of the two numbers is: "<< result5<<endl;
}
