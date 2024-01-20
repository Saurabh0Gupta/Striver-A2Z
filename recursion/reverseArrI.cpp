// reversing array using only one array pointer

#include<iostream>

using namespace std;
void arrReverse(int arr[],int i, int n){
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    arrReverse(arr,i+1,n-i-1);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    arrReverse(arr,0,6);
    for(int i=0; i<6; i++){
        cout<<arr[i];
    }
    return 0;
}