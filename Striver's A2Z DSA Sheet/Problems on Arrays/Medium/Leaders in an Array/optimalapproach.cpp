#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    vector<int> Leaders(vector<int>& arr){
        vector<int> ans;
        int max = arr[arr.size()-1];
        ans.push_back(arr[arr.size()-1]);
        
        for(int i = arr.size()-2; i>=0; i--){
            if(arr[i]>max){
                ans.push_back(arr[i]);
                max=arr[i];
            }

        }

        reverse(ans.begin(),ans.end());

        return ans;


    }
    
};

int main(){
    vector<int> arr = {4, 7, 1, 0};
    Solution obj;

    vector<int> ans = obj.Leaders(arr);

    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}