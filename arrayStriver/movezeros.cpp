//moves zeros

#include<iostream>

using namespace std;
void moveRightZeros(int arr[],int n){
    int i=0;
    int j=0;
    for(;j<n; j++){
        if(arr[j]==0){
            j++;
        }else if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void moveLeftZeros(int arr[],int n){
    int  i=0, j=0;
    for(; j<n; j++){          //0,0,0,1,3,2,4,0
        if(arr[j]!=0){
            j++;
            cout<<" ad";
        }else if(arr[j]==0){
            swap(arr[i],arr[j]);
            cout<<arr[i]<<" "<<arr[j];
            i++;
            j++;
        }
    }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
}
int main(){
    int arr[]={1,0,2,0,3,0,4,0}; 
    // moveRightZeros(arr,8);
    moveLeftZeros(arr,8);
    return 0;
}