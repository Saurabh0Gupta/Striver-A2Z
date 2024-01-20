//merge sort using striver's approch time complexity is n(log n) & space complexity is o(n)

#include<iostream>
using namespace std;
void merge(int arr[],int s, int mid, int e){
    int *temp;
    int left=s; 
    int right=mid+1;
    while(left<=mid && right<=e){
        if(arr[left]<arr[right]){
            // push karna hai left element ko temp arraay me
            //left++;
        }else{
            //push karna hai right element ko temp array me
            //right++;
        }
    }
    while(left<=mid){
        // push karna hai left element ko temp arraay me
        //left++;
    }
    while(right<=e){
        //push karna hai right element ko temp array me
        //right++;
    }
    //for()//for loop laga ke copy karna hai temp array se old me

}
void mergeSort(int arr[],int s, int e){
    if(s>=e) return;

    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<' ';
    }
   
}
int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    return 1;
}

//not complete kyuki mai isme ye  nhi samjh paya hu ki arr temp kaise banau