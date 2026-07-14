#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    string TwoSumExist(vector<int>& arr, int k){
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j]==k){
                    return "YES";
                }
            }
        }
        return "NO";

    }

    pair<int,int> TwoSumIndices(vector<int>& arr, int k){
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j]==k){
                    return {i,j};
                }

            }

        }
        return {-1,-1};

    }
};

int main(){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    Solution obj;
    cout<<obj.TwoSumExist(arr,target)<<endl;
    auto p = obj.TwoSumIndices(arr,target);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}