#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key){
    int s=0, e=n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int key){
    int s=0, e=n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int even[] = {2, 4, 6, 6, 6, 6, 6, 8};
    int odd[] = {1, 3, 3, 3, 3, 3, 5, 7, 9};
    int evenSize = sizeof(even)/sizeof(even[0]);
    int oddSize = sizeof(odd)/sizeof(odd[0]);

    cout<<"First occurrence of 6 in even array: "<< firstOccurrence(even, evenSize, 6)<<endl;
    cout<<"First occurrence of 3 in odd array: "<< firstOccurrence(odd, oddSize, 3)<<endl;
    cout<<"Last occurrence of 6 in even array: "<< lastOccurrence(even, evenSize, 6)<<endl;
    cout<<"Last occurrence of 3 in odd array: "<< lastOccurrence(odd, oddSize, 3)<<endl;
    return 0;
}