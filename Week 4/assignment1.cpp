#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <string>
using namespace std;

int main(){
	string name;
	cout << "Enter Student Full Name: ";
	getline(cin >> ws, name);
	
	bool studentstatus;
	cout << "Are You a Pan-Atlantic University Student (Enter '1' for Yes and '0 'for No)? ";
	cin >> studentstatus;
	
	int course;
	cout << "Enter Course Number From 1 to 5. \nPhotography - 1 \nPainting - 2 \nFish Farming - 3 \nBaking - 4 \nPublic Speaking - 5" << endl;
	cin >> course;
	
	int days, regfee;
	if (course == 1){
		days = 3;
		regfee = 10000;
	} else if (course == 2) {
		days = 5;
		regfee = 8000;
	} else if (course == 3) {
		days = 7;
		regfee = 15000;
	} else if (course == 4) {
		days = 5;
		regfee = 13000;
	} else if (course == 5) {
		days = 2;
		regfee = 5000;
	}
	
	int location;
	cout << "Enter Location Number From 1 to 5. \nCamp House A - 1 \nCamp House B - 2 \nCamp House C - 3 \nCamp House D - 4 \nCamp House E - 5" << endl;
	cin >> location;
	
	int lodgingperday;
	if (location == 1){
		
		lodgingperday = 10000;
		
	} else if (location == 2) {
		
		lodgingperday = 2500;
		
	} else if (location == 3) {
		
		lodgingperday = 5000;
		
	} else if (location == 4) {
		
		lodgingperday = 13000;
		
	} else if (location == 5) {
		
		lodgingperday = 5000;
	}
	
	int lodgingcost = lodgingperday * days;
	int total = regfee + lodgingcost;
	
	float lodgediscount = 0;
	if (studentstatus == 1 && (location == 2||location == 3)){
		lodgediscount = (0.05)*lodgingcost ;
		lodgingcost = lodgingcost - lodgediscount;
	}
	float regdiscount = 0;
	if ((days > 5) || (regfee > 12000)){
		regdiscount = (0.03)*regfee;
		regfee = regfee - regdiscount;
	}
	
	int r;
	
	srand(time(0));
	r = rand()%100; 
	
	int promo = 0;
	if ((r == 7) || (r == 77)){
		promo = 500;
		total = total - promo;
	}
	
	cout << "Full Receipt" << endl;
	cout << "Name: " << name << "	(PAU Student): "<< (studentstatus ? "Yes" : "No") <<endl;
	cout << "Course: " << course << "	Days:" << days << endl;
	cout << "Registration: N" << regfee << "	(Discount): N" << regdiscount << endl;
	cout << "Lodging: N" << lodgingperday << " * " << days << " = N" << lodgingcost << "	(Discount): N" << lodgediscount << endl;
	cout << "Random Draw: " << r << "	Promo applied: N" << promo << endl;
	cout << "Total: N" << total;
}