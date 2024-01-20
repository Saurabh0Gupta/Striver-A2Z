//selection sort

#include<iostream>

using namespace std;
void selection(int arr[],int n){  //n element in array so n-1 pass
    for(int i=0; i<=n-2; i++){  //0 1 2 3  // 1 1 1 1 1 
        int minIndex=i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[minIndex]>arr[j])
            minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int arr[]={5,4,31,222,1};
    selection(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}