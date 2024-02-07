#include<iostream>
#include<vector>
using namespace std;
int max(int lar, int count){
    if(lar>count) return lar;
    else return count;
}
void cons(int *arr, int n){
    int largest=1;
    for(int i=0; i<n; i++){
        int cons=arr[i];
        int count=1;
        for(int j=0; j<n; j++){
            if(cons-1==arr[j]){
                cons=arr[j];
                count++;
            }
        }
        largest=max(largest,count);
        cout<<cons<<" ";
    }
    cout<<largest;
}
int main(){
    int arr[]={102,4,100,5,101,3,2,1,1};
    cons(arr,9);
    return 0;
}