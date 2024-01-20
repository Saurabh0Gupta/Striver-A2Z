//bubble sort 
//time complexity=>o(n*n) i worst and average case but o(n) in best case


#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    int didswap=0;                //for optimization 
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                didswap++;
            }
        }
            cout<<"optimized\n";
            if(didswap==0){
                break;
            }
            
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    bubbleSort(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}