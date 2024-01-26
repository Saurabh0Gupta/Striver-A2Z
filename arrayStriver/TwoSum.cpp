#include<iostream>
using namespace std;
void twoSum(int arr[],int n){
    //for sorted array solution
    int p=0;
    int q=n-1;
    int tg=14;
    while(p<q){
        if(arr[p]+arr[q]==tg){
            cout<<"indexes are "<<p<<"&"<<q;
            return;
        }else if(arr[p]+arr[q]<tg){
            p++;
        }else if(arr[p]+arr[q]>tg){
            q--;
        }
    }
}
int main(){
    int arr[]={2,3,4,4,5,6,10,11};
    twoSum(arr,8);
    return 0;
}