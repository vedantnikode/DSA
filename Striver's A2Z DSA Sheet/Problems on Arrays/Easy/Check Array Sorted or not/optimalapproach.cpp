#include <iostream>
using namespace std;

bool Check(int arr[], int n){
    for (int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Check(arr, n)<<endl;
    printf("%s", Check(arr, n) ? "True" : "False");  // Output result

    return 0;
}