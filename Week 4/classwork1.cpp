#include <iostream>

using namespace std;

int main(){
    int num;
    cout<< "Input your Integer: ";
    cin>> num;

    if (num%2 == 0 && num%5 == 0){
        cout << "Even AND Multiple of 5? Man, you're good.";
        
    } else if (num%2 == 0){
        cout<< "HiEven";
        
    } else if (num%5 == 0){
        cout << "\nHiFive";
        
    }else {
        cout << "This is neither an even number or multiple of 5. Tough luck.";
    }



    return 0;
}