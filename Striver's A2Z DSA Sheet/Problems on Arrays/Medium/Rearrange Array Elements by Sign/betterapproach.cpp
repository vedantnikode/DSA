#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> Rearrange(vector<int>& arr){
        vector<int> pos;
        vector<int> neg;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if (arr[i]>0){
                pos.push_back(arr[i]);
            } else {
                neg.push_back(arr[i]);
            }
        }

        for(int i=0; i<(n/2); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        return arr;
    }

};

int main(){
    vector<int> arr = {-2,5,1,2,-4,-5};
    Solution obj;
    vector<int> ans = obj.Rearrange(arr);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}