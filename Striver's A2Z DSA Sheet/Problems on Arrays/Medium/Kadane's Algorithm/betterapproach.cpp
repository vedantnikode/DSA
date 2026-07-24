#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int MaximumSubarraySum(vector<int>& arr){
        int n = arr.size();
        int maxi = INT_MIN ;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=arr[j];
                maxi = max(sum,maxi);
            }
        }
        return maxi;

    }
};

int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution obj;
    cout<<obj.MaximumSubarraySum(arr);
    return 0;
}