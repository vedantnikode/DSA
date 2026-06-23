#include <iostream>
#include <algorithm>
using namespace std;

pair<int,int> GetElement(int arr[], int n){
    if (n==0 || n==1){
        return {-1, -1} ;
    }
    sort(arr, arr+n);
    return {arr[1], arr[n-2]};
}

int main(){
    int arr[] = {2,3,4,5,6,7,8,9,8,7,6,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    auto ans = GetElement(arr, n);
    cout<<ans.first<<" ";
    cout<<ans.second;
    return 0;
}
