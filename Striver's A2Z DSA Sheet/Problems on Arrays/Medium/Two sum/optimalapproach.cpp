#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    string twoSumExists(vector<int>& arr, int target){
        int n = arr.size();
        vector<pair<int,int>> twoIndicesarray;
        for(int i=0; i<n; i++){
            twoIndicesarray.push_back({arr[i], i});
        }
        sort(twoIndicesarray.begin(),twoIndicesarray.end());

        int start=0, end=n-1;
        while(start<end){
            if (twoIndicesarray[start].first + twoIndicesarray[end].first == target) {
                return "YES";
            } else if (twoIndicesarray[start].first + twoIndicesarray[end].first < target){
                start++;
            }else{
                end--;
            }
        }

        return "NO";
    }

    vector<int> twoSumIndices(vector<int>& arr, int target){
        int n = arr.size();
        vector<pair<int,int>> twoIndicesarray;
        for(int i=0; i<n; i++){
            twoIndicesarray.push_back({arr[i], i});
        }
        sort(twoIndicesarray.begin(),twoIndicesarray.end());

        int start=0, end=n-1;
        while(start<end){
            if (twoIndicesarray[start].first + twoIndicesarray[end].first == target) {
                return {twoIndicesarray[start].second,twoIndicesarray[end].second};
            } else if (twoIndicesarray[start].first + twoIndicesarray[end].first < target){
                start++;
            }else{
                end--;
            }
        }

        return {-1,-1};
    }
};

int main(){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    Solution obj;
    cout<<obj.twoSumExists(arr, target)<<endl;
    vector<int> res = obj.twoSumIndices(arr, target);
    cout<<"["<<res[0]<<","<<res[1]<<"]"<<endl;
    return 0;
}