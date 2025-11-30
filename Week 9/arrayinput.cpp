#include <iostream>
#include <string>

using namespace std;


/* An array is a data structure that consists of a collection of the same data type,
 stored in a contiguous block of memory and accessible using a single name with an index.*/
int main(){
	int size;
	string arr[50] = {};
	
	cout<< "How many students are there"<<endl;
	cin>> size;
	
	cout<< "Input student"<< endl;
	for (int i=0; i<size; i++){
		cin>> arr[i];
	}
	
}