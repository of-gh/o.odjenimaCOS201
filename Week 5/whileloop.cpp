#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
int i = 1;
int sum = 0;
while (i<10){
	sum = sum + 1;
	
	cout<<"When i = " << i;
	i++;
	cout << "\nThe sum is "<<sum<<"\n";
}

}