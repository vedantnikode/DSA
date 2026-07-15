#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
public:
    string twoSumExists(vector<int> arr, int target){
        unordered_map<int,int> mpp;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int compliment = target - arr[i];
            if(mpp.find(compliment) != mpp.end()){
                return "YES";
            }
            mpp[arr[i]] = i;
        }
        return "NO";

    }

    vector<int> twoSumIndices(vector<int> arr, int target){
        unordered_map<int,int> mpp;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int compliment = target - arr[i];
            if(mpp.find(compliment) != mpp.end()){
                return {mpp[compliment],i};
            }
            mpp[arr[i]] = i;
        }
        return {-1,-1};

    }
};

int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    Solution obj;
    cout<<obj.twoSumExists(arr, target)<<endl;;

    vector<int> res = obj.twoSumIndices(arr,target);
    cout<<"["<<res[0]<<","<<res[1]<<"]";
    return 0;


}