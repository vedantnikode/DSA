#include <iostream>
using namespace std;

int MissingNumber(int arr[], int n){
    int num = 1;
    for(int i=0; i<n; i++){
        int truee = 0;
        for(int j=0; j<n; j++){
            if(arr[j]==num){
                truee = 1;
                num++;
                break;
            }        
        }
        if (truee==0){
            return num;
        }  
    }
}

int main(){
    int arr[] = {1,2,3,4,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<MissingNumber(arr, n); 
    return 0;
}