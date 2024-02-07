#include<iostream>

using namespace std;

int mini(int min, int min2){
    if(min<min2) return min;
    else return min2;
}
int buyAndSell(int *arr, int n){
    int min=arr[0]; 
    int maxprofit=0;
    for(int i=0; i<n; i++){
        int cost=arr[i]-min;
        maxprofit=max(cost,maxprofit);
        min=mini(min,arr[i]); //tracking  minimun
    }
    return maxprofit;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    cout<<"maximum profit is "<<buyAndSell(arr,6);
    return 0;
}