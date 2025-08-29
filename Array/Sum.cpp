#include<iostream>
using namespace std;

int main(){
    int arr[3] = {1,2,3};
    int n=3, sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<" Sum = "<<sum<<endl;
    return 0;
}