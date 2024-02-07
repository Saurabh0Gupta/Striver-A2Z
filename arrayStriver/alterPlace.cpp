#include<iostream>
#include<vector>
using namespace std;
void opitmalapproach(int *arr, int n){
    vector <int> ans;
    int pos=0;
    int neg=1; 
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            ans.push_back(arr[neg]);
            neg+=2;
        }else{
            ans.push_back(arr[pos]);
            pos+=2;
        }
    }
    for(int i=0; i <n; i++){
        cout<<ans[i]<<" ";
    }
}
void alternatePlace(int *arr, int n){
    //for equal number of posi. and nega.
    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<n; i++){
        if(arr[i]<0)
        neg.push_back(arr[i]);
        else
        pos.push_back(arr[i]);
    }
    if(pos.size()>neg.size()){
        for(int i=0; i<neg.size(); i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }
    }else{
        for(int i=0; i<pos.size(); i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }
    }
}
int main(){
    int arr[]={3,1,-2,-5,2,-4,3,2};
    alternatePlace(arr,8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}