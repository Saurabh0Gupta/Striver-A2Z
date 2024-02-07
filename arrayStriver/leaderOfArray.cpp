#include<iostream>
#include<vector>
//10,22,12,3,0,6
using namespace std;
//brute force approach
void leader(int *arr, int n){
     vector<int> ans;
    for(int i=0; i<n; i++){ //6
        bool leader=true;
        if(i==n-1){
            ans.push_back(arr[i]);
        }else{
            for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(arr[i]);
        }
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
//optimal approach hai ye bhai
void leaderArray(int *arr, int n){
    vector<int> ans;
    int maxi=INT16_MIN;
    for(int i=n-1; i>=0; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr[]={10,22,12,3,0,6};
    // leaderArray(arr,6);
    leader(arr,6);
    return 0;
}