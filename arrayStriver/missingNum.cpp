#include<iostream>

using namespace std;
//first optimal approach
int optimalXor(int arr[],int n,int size){
    int sum=(n*(n+1))/2;
    int sum2=0;
    for(int i=0; i<size; i++){
        sum2=sum2+arr[i];
    }
    return sum-sum2;
}

//sec optimal approach
int optimalSum(int arr[],int n,int size){
    //1^2^4^5
    //1^2^3^4^5
    int xOR1=0;
    int xOR2=0;
    for(int i=1; i<=size; i++ ){
        xOR1=xOR1^arr[i];
        xOR2=xOR2^i;
    }
    xOR2=xOR2+n;

    return xOR1^xOR2;
}
int main(){
    int arr[]={1,2,4,5};
    int ans=optimalXor(arr,5,4);
    cout<<ans;
    return 0;
}