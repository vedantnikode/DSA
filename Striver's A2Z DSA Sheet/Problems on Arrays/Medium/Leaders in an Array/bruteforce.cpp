#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> LeadersofArray(vector<int>& arr){
        vector<int> res;
        int n = arr.size();
        for(int i=0; i<n; i++){
            bool leader = true;
            for(int j=i+1; j<n; j++){
                if(arr[j]>=arr[i]){
                    leader = false;
                    break;
                }     
            }
            if(leader==true){
                res.push_back(arr[i]);
            }
        }
        return res;


    }
};

int main(){
    Solution obj;
    vector<int> arr = {4, 7, 1, 0};

    vector<int> ans = obj.LeadersofArray(arr);

    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}