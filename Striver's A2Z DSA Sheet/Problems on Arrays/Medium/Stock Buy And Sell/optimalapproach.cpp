#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
public:
    int Profit(vector<int>& arr){
        int maxProfit=0;
        int minPrize = INT_MAX;
        int n =arr.size();
        
        for(int i=0; i<n; i++){
            if(arr[i]<minPrize){
                minPrize=arr[i];
            } else {
                maxProfit = max(maxProfit, arr[i]-minPrize);
            }

        }

        return maxProfit;

    }
};

int main(){
    vector<int> arr = {10, 7, 5, 8, 11, 9};
    Solution obj;
    cout<<obj.Profit(arr);
    return 0;
}