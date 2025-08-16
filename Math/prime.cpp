#include<iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;  // 0 and 1 are not prime
    for(int i=2;i*i<n; i++ ){
        if(n%i ==0)
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
}