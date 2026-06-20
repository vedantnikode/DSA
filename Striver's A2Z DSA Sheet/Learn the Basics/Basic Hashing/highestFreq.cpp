#include <iostream>
#include <unordered_map>
using namespace std;

int HighestFreq(int arr[], int n){
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    
    int Highest=0;
    int element=arr[0];
    for(int i=0; i<n; i++){
        if(mpp[arr[i]]>Highest){
            Highest=mpp[arr[i]];
            element=arr[i];
        }
    }
    return element;


    }


int main(){
    int arr[] = {1,2,3,4,4,4,4,5,4,3,2,1,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<HighestFreq(arr, n);
    return 0;
    
}