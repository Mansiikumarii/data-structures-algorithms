#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s + e)/2;
    int len1 = mid - s + 1; //length of left part
    int len2 = e - mid; //length of right part

    int *left = new int[len1];
    int *right = new int[len2];
    //copying elements in left part
    int k = s;
    for(int i = 0; i < len1; i++){
        left[i] = arr[k++];
    }
    int k= mid + 1;
    //copying elements in right part
    for(int i = 0; i < len2; i++){
        right[i] = arr[k++];
    }
}
void mergeSort(int *arr, int s, int e){
    if(s > e){
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s,mid);
    //right part sort karna hai
    mergeSort(arr, mid + 1, e);
    //merge karna hai
    merge(arr, s, e);
}
int main(){
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    mergeSort(arr, 0, n - 1);
    return 0;

}