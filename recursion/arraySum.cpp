#include<iostream>

using namespace std;
int arraySum(int arr[],int n){
    if(n==0){
        int sum=0;
        return sum;
    }
    int result=arraySum(arr,n-1);
    int sum=sum+arr[n];
    return sum;
}
int main(){
    int arr[]={1,2,3,4,5};
    int result=arraySum(arr,5);
    cout<<result;
    return 0;
}