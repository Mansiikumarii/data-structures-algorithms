#include<iostream>
using namespace std;

int pivotIndex(int nums[], int n){
    int s=0, e=n-1;
    int mid = s + (e - s) / 2;
     while(s < e){
        if(nums[mid] > nums[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2; // Recalculate mid
     }
     return s; // Pivot index
}
int main(){
    int nums[7] ={4,5,6,7,0,1,2};
    cout <<"Pivot is: "<<pivotIndex(nums, 7) << endl;
    return 0;
}