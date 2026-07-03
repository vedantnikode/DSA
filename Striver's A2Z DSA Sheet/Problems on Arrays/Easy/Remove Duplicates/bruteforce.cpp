#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int removeDuplicate(vector<int>& arr){
        unordered_set<int> seen;

        int Index = 0;
        for (int i=0; i<arr.size(); i++){
            if(seen.find(arr[i]) == seen.end()){
                seen.insert(arr[i]);
                arr[Index] = arr[i];
                Index++;
            }
        }
        return Index;
    }
    

};


int main(){
    vector<int> arr = {1,2,3,3,4,5,5,6};
    Solution obj;
    int k = obj.removeDuplicate(arr);

    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;     
}