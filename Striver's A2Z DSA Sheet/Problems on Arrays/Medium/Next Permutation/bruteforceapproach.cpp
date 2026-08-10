#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> nextPermutation(vector<int> nums){
        


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