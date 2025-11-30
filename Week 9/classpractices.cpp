#include <iostream>
using namespace std;

void readArray(int list[],int size){
     for(int mi=0;mi<=size-1; mi++){
        cin>>list[mi];
    }
    
}
void nprintarrray(int list[],int size){
       for(int mi=0;mi<=size-1; mi++){
        cout<<list[mi]<<endl;
    }
}


int main(){
  
    int arr[] = {1,2,3,4,5};
    int sum=0;
    cout<<sum<<endl;
    int size= sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<=size-1;i++){
       sum=  sum+arr[i];}
       cout<<sum;

    int size1;
    int arr1[50];
    cout<<"Enter a size for the array";
    cin>>size1;
    cout<<"list the members of the array";
    readArray(arr1,size1);
    nprintarrray(arr1,size1);

}
