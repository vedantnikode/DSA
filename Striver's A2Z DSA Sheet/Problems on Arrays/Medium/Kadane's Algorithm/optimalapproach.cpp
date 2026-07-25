#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution{
public:
    int MaximumSubarraySum(vector<int>& arr){
        int n = arr.size();
        long long maxi = LLONG_MIN;
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum+=arr[i];

            if(sum>maxi){
                maxi = sum ;
            }
            if(sum<0){
                sum=0;
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