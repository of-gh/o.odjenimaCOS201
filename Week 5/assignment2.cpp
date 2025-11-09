#include <iostream>
using namespace std;

int main(){
	int answer1;
	int value1 = 700, value2 = 350;
	int correctAnswer = value1 - value2 ;
	cout << "Hello Welcome to the Subtraction Quiz"<<endl;
	cout << "Are you ready? Okay here we go!"<< endl;
	
	while (answer1 != correctAnswer){
		cout << "What is "<<value1<<" - "<<value2<< "? ";
		cin >> answer1;
		if (answer1 != correctAnswer){
			cout<<"Wrong. Try Again"<<endl;
		} else {
			cout<<"Correct!";
		}
	}
	
	return 0;
}