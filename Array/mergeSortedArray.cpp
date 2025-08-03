#include<iostream>
#include<vector>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n, int nums3[]){
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(nums1[i]< nums2[j] ){
            nums3[k]= nums1[i];
            i++;
            k++;
        }
        else{
            nums3[k] = nums2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        nums3[k++] = nums1[i++];
        }

        while(j<n){
            nums3[k++] = nums2[j++];
        }
}
void print(int nums[], int size){
    for(int i=0; i<size; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int nums1[3] = {1,2,3};
    int nums2[3] ={2,5,6};
    int nums3[6]={0};
    merge(nums1, 3, nums2, 3, nums3);
    print(nums3, 6);
    return 0;
}