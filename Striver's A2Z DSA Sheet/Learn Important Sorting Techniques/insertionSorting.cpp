#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for (int i=0; i<n; i++){
        int j=i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }

    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, n);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";

    }
    return 0;

}