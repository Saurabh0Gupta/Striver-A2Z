//largest number in array

#include<iostream>

using namespace std;
int largestElem(int arr[],int n){
    int max=0;
    int mila=0;
    for(int i=1; i<=n; i++){         //0    1   2   3  4    5
        if(arr[max]<arr[i])          //23  43  65  34  9   16
        {                            //        max
            max=i;  
            mila =1;                 //                     i
        }        
    }
    return max;
}
int main(){
    int arr[]={23,1143,685,34,9,166};
    int result=largestElem(arr,5);
    cout<<arr[result];
    return 0;
}