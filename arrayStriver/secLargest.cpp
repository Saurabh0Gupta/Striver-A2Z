//largest number in array

#include<iostream>

using namespace std;
int largestElem(int arr[],int n){
    int max=0;
    int max2=-1;
    for(int i=1; i<=n; i++){         //1    2   3   4  5    
        if(arr[max]<arr[i])          //23  483  65  34  9   16
        {   max2=max;                //               max  
            max=i;                   //            max2      i     
        }else if(arr[i]<arr[max] && arr[i]>arr[max2]){
            max2=i;
        }
        
    }
    return max2;
}
int main(){
    int arr[]={1,2,3,41,35};
    int result=largestElem(arr,4);
    cout<<arr[result];
    return 0;
}