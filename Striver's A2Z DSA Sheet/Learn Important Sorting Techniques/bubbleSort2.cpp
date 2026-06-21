#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for (int i=n-1; i>=0; i--){
        int didSwap=0;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap=1;
            }
            
        }
        if(didSwap==0){
            break;
        }
        cout<<"okkk\n";

    }

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}