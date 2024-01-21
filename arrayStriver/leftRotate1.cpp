//left rotate an array by one 

#include<iostream>

using namespace std;
void leftRotate(int arr[],int n){
    int temp=arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    leftRotate(arr,5);
    return 0;
}