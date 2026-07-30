#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> Rearrange(vector<int> arr){
        int n = arr.size();
        vector<int> temp(n,0);
        int posIndex=0 , negIndex=1;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                temp[posIndex] = arr[i]; 
                posIndex+=2;
            }else{
                temp[negIndex] = arr[i];
                negIndex+=2;
            }

        }
        return temp;

    }
};

int main(){
    vector<int> arr = {1,2,-4,-5};
    Solution obj;
    vector<int> ans = obj.Rearrange(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}