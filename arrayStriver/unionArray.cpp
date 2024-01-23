//union of two value  
//1,3,4,8,10
//2,3,4,5,6,7,7,8
//1,2,3,4,5,6,7,8,10
#include<iostream>
#include<vector>
using namespace std;
void unionArr(vector <int> arr1,vector <int> arr2){
    int a1=0,a2=0;
    int m=arr1.size();
    int n=arr2.size();
    vector <int> uni;
    while(a1<m && a2<n){
        if(arr1[a1]<=arr2[a2]){
            if(uni.back()!=arr1[a1] || uni.size()==0 ){
                uni.push_back(arr1[a1]);
                cout<<" pahuchaa ";
                a1++;
            }
        }else{
           
            if(uni.back()!=arr1[a2] || uni.size()==0 ){
                uni.push_back(arr2[a2]);
                a2++;
            }
        
    }
    }
    while(a1<m){
        if(uni.back()!=arr1[a1] || uni.size()==0 ){
                uni.push_back(arr1[a1]);
                a1++;
                cout<<" pahuchaa ";

            }
    }
    while(a2<n){
        if(uni.back()!=arr1[a2] || uni.size()==0 ){
                uni.push_back(arr2[a2]);
                a2++;
            cout<<" pahuchaa ";

            }
    }
    for(int i=0; i<uni.size(); i++){
        cout<<uni[i]<<" ";
    }
    

}
int main(){
    vector <int> arr1={1,3,4,8,10};
    vector <int> arr2={2,3,4,5,6,7,7,8};
    unionArr(arr1,arr2);
    // for(int i=0; i<temp.size(); i++){
    //     cout<<temp[i]<<" ";
    // }
    return 0;
}

//this program is not working but the approch and code is right issue of vector