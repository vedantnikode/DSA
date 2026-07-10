#include <iostream>
#include <vector>
using namespace std;

int MissingNumber(vector<int> arr){
    int n = arr.size()+1 ;
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum+=arr[i];
    }
    // long long exp = (n *1LL* (n + 1)) / 2; 
    int exp =( n*(n+1) ) / 2 ;
    return exp-sum;
}

int main(){
    vector<int> arr = {1,3,4,5,6,7,8,9};
    cout<<MissingNumber(arr);
    return 0;
}