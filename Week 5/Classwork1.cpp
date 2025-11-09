#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
	int year;
	
	cout<< "Enter the year you were born, cutie <3 : ";
	cin>> year;
	
	switch (year%12){
		case 0 :
			cout<<"You got Monkey! You are witty and curious!\nYou are most compatible with the Ox and the Rabbit";
			break;		
		case 1 :
			cout<<"You got Rooster! You are hardworking and observant!\nYou are most compatible with the Ox and the Snake";
			break;		
		case 2 :
			cout<<"You got Dog! You are loyal and honest!\nYou are most compatible with the Rabbit and Tiger";
			break;		
		case 3 :
			cout<<"You got Pig! You are generous and diligent!\nYou are most compatible with the Tiger, Rabbit and Sheep";
			break;		
		case 4 :
			cout<<"You got Rat! You are quick-witted and charming!\nYou are most compatible with the Ox, Dragon  and Monkey";
			break;		
		case 5 :
			cout<<"You got Ox! You are patient and determined!\nYou are most compatible with the Rat, Snake and Rooster";
			break;	
		case 6 :
			cout<<"You got Tiger! You are brave and competitive!\nYou are most compatible with the Dog, Horse and the Pig";
			break;
		case 7 :
			cout<<"You got rabbit! You are gentle and compassionate!\nYou are most compatible with the Sheep, Monkey, Dog, and Pig";
			break;
		case 8 :
			cout<<"You got dragon! You are confident and enthusiastic!\nYou are most compatible with the Rooster, Rat and Monkey";
			break;
		case 9 :
			cout<<"You got snake! You are wise and intuitive!\nYou are most compatible with the Dragon and the Rooster";
			break;
		case 10:
			cout<<"You got Horse! You are energetic and independent!\nYou are most compatible with the Tiger, Sheep and Rabbit";
			break;
		case 11 :
			cout<<"You got Sheep! You are calm and creative!\nYou are most compatible with the the Rabbit, Horse and Pig";
			break;							
		default :
			cout<<"NOT A YEAR KIDDO";
		
	}
}