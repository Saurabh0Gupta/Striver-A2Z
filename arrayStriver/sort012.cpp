//sort 0 1 and 2
//0,2,2,1,2,1,1,0
#include<iostream>

using namespace std;
void sort(int *arr, int n){  //brute force and better
    int count0=0,count1=1,count2=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0)
        count0++;
        else if(arr[i]==1)
        count1++;
        else
        count2++;
    }

    for(int i=0; i<count0; i++){
        arr[i]=0;
    }
    for(int i=count0; i<count1; i++){
        arr[i]=1;
    }
    for(int i=count1; i<n; i++){
        arr[i]=2;
    }
}
//optimal by dutch National flag algorithms
void optimalSort(int *arr,int n){
    int low=0;
    int mid=0;
    int high=n-1;
    for(int i=0; i<n; i++){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++,mid++;
        }else if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int arr[]={0,2,2,1,2,1,1,0};
    optimalSort(arr,8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}