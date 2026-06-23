#include <iostream>
using namespace std;

int LargestEle(int arr[], int n){
    int maxEle = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]>maxEle){
            maxEle = arr[i];
        }
    }

    return maxEle ;
}




int main(){
    int arr[]= {1,2,3,4,3,2,2,1,7,8,9,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LargestEle(arr, n);
    return 0;

}