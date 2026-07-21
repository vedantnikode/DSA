#include <iostream>
#include <Vector>
#include <unordered_map>
using namespace std;

class Solution{
public:
    int MajorityElement(vector<int> arr){
        int n = arr.size();
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        for(auto& pair : mpp){
            if(pair.second>(n/2)){
                return pair.first ;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    Solution obj;
    cout<<obj.MajorityElement(arr);
    return 0;
}