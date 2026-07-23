#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution{
public:
    int MaximumSubarraySum(vector<int>& arr){
        int n = arr.size();
        int Highest = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int sum=0;
                for(int k=i; k<=j; k++){
                    sum+=arr[k];
                }
                // Highest=max(sum,Highest);
                if(sum>Highest){
                    Highest=sum;
                }

            }
        }
        return Highest;

    }
};

int main(){
    vector<int> arr1 = {2, 3, 5, -2, 7, -4};
    vector<int> arr2 = {-2, -3, -7, -2, -10, -4};
    Solution obj;
    cout<<obj.MaximumSubarraySum(arr1)<<endl;
    cout<<obj.MaximumSubarraySum(arr2)<<endl;

    return 0;
}