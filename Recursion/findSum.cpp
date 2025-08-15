#include<iostream>
using namespace std;

int findSum(int arr[], int size){
    if(size ==0)
    return 0;

    if(size ==1)
    return arr[0];

    int remaingPart = findSum(arr+1, size-1); // recursive call with the rest of the array
    int sum= arr[0] + remaingPart; // add the first element to the sum of the remaining part
    return sum; // return the total sum
}
int main(){
    int arr [6] ={6,7,3,4,9,2};
    int size = 6;

    cout<<findSum(arr,size)<<endl; // output the sum of the array elements
    
    return 0;
}