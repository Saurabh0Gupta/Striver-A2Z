#include<iostream>
using namespace std;
//brute force approach
int bruteForce(int *arr,int n){
    for(int i=0; i<n; i++){
    int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2)
        return count;
    }  
}
//better by hashing
// int majorElem(int *arr, int n){
//     vector<int,int> map;
//     for(int i=0; i<n; i++){
//         map[arr[i]]++;
//     }
//     for(auto it:map){
//         if(it.second>n/2){
//             return it.first;
//         }
//     }
//     return -1;
// }

int majorityElem(int *arr, int n){
    int el;
    int count=0;
    for(int i=0; i<n; i++){
        if(count==0){
            el=arr[i];
            count++;
        }else if(arr[i]==el){
            count++;
        }else{
            count--;
        }
    }
    int count1=0;
    for(int i=0; i<n; i++){
        if(el==arr[i]) count1++;
    }
    if(count1>n/2){
        return count1;
    }
    return -1;
}
int main(){
    int arr[]={2,3,3,1,3,4,3};
    cout<<majorityElem(arr,7);
}