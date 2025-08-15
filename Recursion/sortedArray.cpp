#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size ==0 || size ==1){
        return true; // base case
    }
    if(arr[0]> arr[1])
    return false; // if first element is greater than second, not sorted
    else{
        int remaningPart = isSorted(arr+1, size-1); // recursive call with the rest of the array
        return remaningPart; // return the result of the recursive call
    }
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"Array is sorted"<<endl;
    } else {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}