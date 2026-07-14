#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    pair<int,int> TwoSum(vector<int>& arr, int k){
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j]==k){
                    cout<<"YES"<<endl;
                    return {i,j};
                }

            }

        }
        cout<<"NO"<<endl;
        return {-1,-1};

    }
};

int main(){
    vector<int> arr = {2,6,5,8,11};
    int target = 15;
    Solution obj;
    auto p = obj.TwoSum(arr,target);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}