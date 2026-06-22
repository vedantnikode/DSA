#include <iostream>
using namespace std;

void RecursiveInsertionSort(int arr[],int i, int n){
    if(i==n) return;

    int j = i;
    while(j>0){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        j--;
    }

    RecursiveInsertionSort(arr, i+1, n);

}

int main(){
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    RecursiveInsertionSort(arr,0, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
