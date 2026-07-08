#include <iostream>
using namespace std;

int LinearSearch(int arr[], int num, int n){
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[] = {1,2,3,4,5,5,6,6,7,8};
    int num ;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Type a number num : ";
    cin>>num;
    cout<<LinearSearch(arr, num, n);
    return 0;
}