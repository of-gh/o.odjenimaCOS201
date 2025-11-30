#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
	int i = 1;
	int j = 1;
	int sum = 0;

	for (i = 1; i<= 2; i++){
		for (j = 1; j<= 3; j++){
			sum = sum + i + j;
			cout<< sum << endl;
		}
	}
}
