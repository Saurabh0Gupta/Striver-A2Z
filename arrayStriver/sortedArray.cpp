//chech wheather the given array is sorted or not
#include<iostream>
using namespace std;
bool sortedArray(int arr[],int n){
    int check=0;
    for(int i=1; i<5; i++){
        if(arr[check]<arr[i]  || arr[check]==arr[i]){
            check++;
        }else if(arr[check]>arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,3,3,4,5};
    if(sortedArray(arr,5)){
        cout<<"sorted hai";
    }
    else{
        cout<<"nhi hai sorted";
    }
    return 0;
}