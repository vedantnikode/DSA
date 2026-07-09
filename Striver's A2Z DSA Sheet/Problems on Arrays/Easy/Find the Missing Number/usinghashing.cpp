#include <iostream>
#include <vector>
using namespace std;

int MissingNumber(vector<int>& arr){
    vector<int> hash(arr.size()+2, 0);
    for(int i=0; i<arr.size(); i++){
        hash[arr[i]]++;
    }
    for(int i=1; i<arr.size()+2; i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;

}

int main(){
    vector<int> arr = {1,2,3,4,5,7,8,9};
    cout<<MissingNumber(arr);
    return 0;
}