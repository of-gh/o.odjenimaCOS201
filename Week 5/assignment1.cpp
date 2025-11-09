#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <string>
using namespace std;

int main(){
	int count = 0;
	while(count <= 3){
		string name;
		cout << "\nEnter Student Full Name: ";
		getline(cin >> ws, name);
		
		bool studentstatus;;
		cout << "Are You a Pan-Atlantic University Student (Enter '1' for Yes and '0 'for No)? ";
		cin >> studentstatus;
		/*if ((studentstatus != 1) && (studentstatus != 0)){
			cout << "Invalid Input:( Try Again!";
			return 1;
		} */
		switch (studentstatus){
			case 1:
			case 0:
				break;
			default:
				cout << "Invalid Input:( Try Again!";
				return 1;
		}
		
		int course;
		cout << "Enter Course Number From 1 to 5. \nPhotography - 1 \nPainting - 2 \nFish Farming - 3 \nBaking - 4 \nPublic Speaking - 5" << endl;
		cin >> course;
		
		//course code
		int days, regfee;
		string coursename;
		/*if (course == 1){
			coursename = "Photography";
			days = 3;
			regfee = 10000;
		} else if (course == 2) {
			coursename = "Painting";
			days = 5;
			regfee = 8000;
		} else if (course == 3) {
			coursename = "Fish Farming";
			days = 7;
			regfee = 15000;
		} else if (course == 4) {
			coursename = "Baking";
			days = 5;
			regfee = 13000;
		} else if (course == 5) {
			coursename = "Public Speaking";
			days = 2;
			regfee = 5000;
		} else {
			cout << "Invalid Input:( Try Again!";
			return 1;
		}*/
		
		switch (course) {
			case 1: 
				coursename = "Photography";
				days = 3;
				regfee = 10000;
				break;
			case 2:
				coursename = "Painting";
				days = 5;
				regfee = 8000;
				break;
			case 3:
				coursename = "Fish Farming";
				days = 7;
				regfee = 15000;
				break;
			case 4:
				coursename = "Baking";
				days = 5;
				regfee = 13000;
				break;
			case 5:
				coursename = "Public Speaking";
				days = 2;
				regfee = 5000;
				break;
			default:
				cout << "Invalid Input:( Try Again!";
				return 1;
		}
		
		//location code
		int location;
		cout << "Enter Location Number From 1 to 5. \nCamp House A - 1 \nCamp House B - 2 \nCamp House C - 3 \nCamp House D - 4 \nCamp House E - 5" << endl;
		cin >> location;
		
		string lodgename;
		int lodgingperday;
		/*if (location == 1){
			lodgename = "Camp House A";
			lodgingperday = 10000;
			
		} else if (location == 2) {
			lodgename = "Camp House B";
			lodgingperday = 2500;
			
		} else if (location == 3) {
			lodgename = "Camp House C";
			lodgingperday = 5000;
			
		} else if (location == 4) {
			lodgename = "Camp House D";
			lodgingperday = 13000;
			
		} else if (location == 5) {
			lodgename = "Camp House E";
			lodgingperday = 5000;
		} else {
			cout << "Invalid Input:( Try Again!";
			return 1;
		}*/
		switch (location){
			case 1:
				lodgename = "Camp House A";
				lodgingperday = 10000;	
				break;
			case 2:
				lodgename = "Camp House B";
				lodgingperday = 2500;
				break;
			case 3:
				lodgename = "Camp House C";
				lodgingperday = 5000;
				break;
			case 4:
				lodgename = "Camp House D";
				lodgingperday = 13000;
				break;
			case 5:
				lodgename = "Camp House E";
				lodgingperday = 5000;
				break;
			default:
				cout << "Invalid Input:( Try Again!";
				return 1;
			
		}
		
		int lodgingcost = lodgingperday * days;
		
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
		
		int total = regfee + lodgingcost;
	
		int r;
		srand(time(0));
		r = (rand()%99) + 1; 
		
		int promo = 0;
		/*if ((r == 7) || (r == 77)){
			promo = 500;
			total = total - promo;
		}*/
		switch (r){
			case 7:
				promo = 500;
				total = total - promo;
				break;
			case 77:
				promo = 500;
				total = total - promo;
				break;			
		}
		
		cout << "Full Receipt" << endl;
		cout << "Name: " << name << "	(PAU Student): "<< (studentstatus ? "Yes" : "No") <<endl;
		cout << "Course: " << coursename << "  |	Days:" << days << endl;
		cout << "Registration: N" << regfee << "  | (Discount): N" << regdiscount << endl;
		cout << "Lodging: "<< lodgename <<" | Cost:  N" << lodgingperday << " * " << days << " = N" << lodgingcost << "  |(Discount): N" << lodgediscount << endl;
		cout << "Random Draw: " << r << "  | Promo applied: N" << promo << endl;
		cout << "Total: N" << total << endl;
		cout << "Have A Great Day and Enjoy the Program!";
		cout << "\n__________________________________________________________________________________";
		
		
		
		count++;
	}
	return 0;
}