//counting the occurance of number in the by hashing

#include<iostream>

using namespace std;
void hashing(int arr[], int size){
    int hash[46]={0};
    for(int i=0; i<size; i++){
        hash[arr[i]]++;
    }
    // for(int i=0; i<46; i++){
    //    cout<<hash[i]<<" ";
    // }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<" ";
    }
}
int main(){
    int arr[]={0,2,3,3,44,4,5,6,6,5,3};
    int size=11;
    hashing(arr,size);
    return 0;
}