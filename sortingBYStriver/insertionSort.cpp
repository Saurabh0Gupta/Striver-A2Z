//insertion sort by pw  
//divide array into sort and unsorted and then check and insert

#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[]={500,4,3,6,71,3,-2000,4};
    insertionSort(arr,8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}