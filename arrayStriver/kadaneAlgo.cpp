#include<iostream>

using namespace std;
int maxSubArray(int arr[],int n){
    int sum=0;
    int max=arr[0];
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum > max){
            max=sum;
        }
    }
    return max;
}
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    cout<<maxSubArray(arr,8);
}