#include <iostream>
using namespace std;

bool IsSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,4,4,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<IsSorted(arr, n)<<endl;
    printf("%s", IsSorted(arr, n) ? "True" : "False");  // Output result

    return 0;
}