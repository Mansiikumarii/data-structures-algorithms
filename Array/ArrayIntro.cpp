#include<iostream>
using namespace std;

void printArray(int arr[], int size){
     cout<<"Printing the array"<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int number[15]={0};
    //accessing an array
    cout<< " Value at 0 index "<<number[1]<<endl;
    cout<<"Everything is Fine"<<endl;
    //initializing an array
    int second[3] = {5,7,11};
    cout<<" Value at 2 index "<<second[2]<<endl;
    int n=15;
    cout<<"Printing the array"<<endl;

    //initializing all locations with 0
    printArray(number,15);

    int numsize = sizeof(number)/sizeof(int);
    cout<<"Size of number is "<<numsize<<endl;

    char ch[5] = {'m','a','n','s','i'};
    cout<< ch[3]<<endl;
    return 0;
}