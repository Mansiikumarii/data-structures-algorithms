#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size -1;

    int mid = (start+ end)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid; // Key found
        }
        if(arr[mid] < key){
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
        mid = (start + end) / 2; // Recalculate mid
    }
    return -1; // Key not found
}
int main(){
    int even[4] ={2,4,6,8};
    int odd[5] = {1,3,5,7,9};

    int evenIndex = binarySearch(even, 4, 8);
    cout << "Index of 8 in even array: " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 3);
    cout << "Index of 3 in odd array: " << oddIndex << endl;
    return 0;
}