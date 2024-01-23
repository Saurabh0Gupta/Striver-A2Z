//intersection of two array
//same element in the array

#include<iostream>
#include<vector>

using namespace std;
void intersection(vector <int> arr1,vector <int> arr2){
    int m=arr1.size();
    int n=arr2.size();
    int i=0, j=0;
    int max;
    m>n? max=m: max=n;
    vector <int> set;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else if(arr1[i]==arr2[j]){
            set.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int i=0; i<set.size(); i++){
        cout<<set[i]<<" ";
    }

}
int main(){
    vector <int> arr1={11,12,12,32,34,48,54};
    vector <int> arr2={12,12,13,32,34,54};
    intersection(arr1,arr2);

    return 0;
}