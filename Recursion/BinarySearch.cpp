#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int target){
    if(s > e)
        return false;
    int mid = s + (e - s) / 2;
    if(arr[mid] == target)
        return true;
    if(arr[mid] < target){
        return binarySearch(arr, mid + 1, e, target);
    } 
    else{
        return binarySearch(arr, s, mid - 1, target);
    }
}

int main(){
    int arr[6] = {-1,0,3,5,9,12};
    int target = 9;
    int size = 6;
    bool found = binarySearch(arr, 0, size - 1, target);
    cout << (found ? "Found" : "Not Found") << endl;
    return 0;
}