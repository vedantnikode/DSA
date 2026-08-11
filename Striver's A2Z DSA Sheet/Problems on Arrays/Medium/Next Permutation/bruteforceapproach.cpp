#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    vector<int> nextPermutation(vector<int> nums){
        vector<vector<int>> all;
        sort(nums.begin(), nums.end());

        do{
            all.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        
        for(int i=0; i<all.size(); i++){
            if(all[i]==nums){
                if(i==all.size()-1){
                    return all[0];
                }
                return all[i+1];
            }
            

        }
        
        


    }
};

int main(){
    vector<int> nums = {1,2,3};
    Solution obj;

    vector<int> result = obj.nextPermutation(nums);

    for(auto it : result){
        cout<<it<<" ";
    }
    return 0;
}