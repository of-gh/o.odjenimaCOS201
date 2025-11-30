#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
int i = 1;
int sum = 0;

for (i = 1; i<= 5; i++){
	sum = sum + i;
}
/*while (i<=5){
	sum = sum + i;
	
	i++;
}*/
cout << "\nThe sum is "<<sum<<"\n";
}