#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n){
    for (int i=0; i<n-1 ; i++){
        int minValue=arr[i];
        int minIndex=i;
        for (int j=i; j<n; j++){
            if (minValue>arr[j]){
                minValue=arr[j];
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }



}

int main(){
    int arr[] = {1,2,8,9,7,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Selection_Sort(arr, n);


    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;

}