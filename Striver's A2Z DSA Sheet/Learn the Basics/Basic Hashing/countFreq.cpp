#include <iostream>
#include <unordered_map>
using namespace std;

void countFreq(int arr[], int n){
    unordered_map<int , int > mpp;
    for (int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto x: mpp){
        cout<<x.first<<"-->>"<<x.second<<endl;
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr,n);
    return 0;
}