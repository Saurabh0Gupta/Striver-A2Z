// remove duplicate and return number of unique element

#include<iostream>

using namespace std;
int duplicate(int arr[],int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            cout<<arr[i]<<" ";
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<arr[i];
    return i+1;
}
int main(){
    int arr[]={1,1,1,2,2,2,3,3,3,4,4,4,5};
    int unique=duplicate(arr,13);
    cout<<"\nunique num is "<<unique<<"\n";
    return 0;
}