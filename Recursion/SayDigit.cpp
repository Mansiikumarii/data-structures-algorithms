#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    // base case
    if(n==0){
        return;
    }

    //process
    int digit = n % 10; // last digit
    n = n / 10; // remove last digit
    //recursive call
    sayDigit(n, arr);
    
    cout<<arr[digit]<<" "; // print the digit in words

    
}
int main(){
    int n;
    cin>>n;
    string arr[10] = {"zero", "one", "two", "three", "four",
         "five", "six", "seven", "eight", "nine"};
cout<<endl;
sayDigit(n, arr);
cout<<endl;
    return 0;
}