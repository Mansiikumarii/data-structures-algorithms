#include<iostream>
using namespace std;
 int TwoPower(int n){
    if(n ==0)
    return 1;

    return 2*TwoPower(n-1);
 }
int main(){
    int n;
    cin>>n;

    cout<< TwoPower(n);
    return 0;
}