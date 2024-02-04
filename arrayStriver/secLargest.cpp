//largest number in array

#include<iostream>

using namespace std;
int largestElem(int arr[],int n){
    int max=arr[0];
    int max2=-1;
    for(int i=1; i<n; i++){         //1    2   3   4  5    
        if(max<arr[i])          //23  483  65  34  9   16
        {   max2=max;           //    max  
            max=arr[i];                   //        max2  i     
        }else if(arr[i]<max && arr[i]>max2){
            max2=arr[i];
        }
    }
    return max2;
}
int main(){
    int arr[]={51,2,3,41,35};
    int result=largestElem(arr,5);
    cout<<result;
    return 0;
}