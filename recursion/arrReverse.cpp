#include<iostream>
using namespace std;
void arrReverse(int arr[],int start,int last){
    if(start>=last)
    return;
    swap(arr[start],arr[last]);
    arrReverse(arr,start+1,last-1);
}
void printArr(int arr[],int size, int i){
    if(i>size-1)
    return;
    cout<<arr[i]<<" ";
    printArr(arr,size,i+1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    arrReverse(arr,0,size-1);
    printArr(arr,size,0);
    // for(int i=0; i<size; i++){
    //     cout<<arr[i];
    // }
    return 0;
}