#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(){
	int number1, number2, temp, guess, diff;
	
	srand(time(0));
	number1 = rand()%10; 
	number2 = rand()%10;
	
	
	if (number1 < number2){
		// Swap using a temporary variable
    	temp = number1;
    	number1 = number2;
    	number2 = temp;
	}	
	cout << "What do you think is the difference of Numbers 1 and 2 ";
	cin >> guess;
	
	diff = number1-number2;
	
	if (guess == diff){
		cout << "You were right! How did you know, smarty pants?";
		
	} else {
		cout << "Huh, you were wrong. Maybe next time :/";
		cout << "\nThe correct answer is: " << diff;
	}
	
	return 0;
}