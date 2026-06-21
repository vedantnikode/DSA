#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
       
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }

}

int main(){
    int arr[] = {1,2,3,4,5,7,7,8,6,5,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    for (int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}