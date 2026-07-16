#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void ZeroOneTwo(vector<int>& arr){
        int n = arr.size();
        int count0=0, count1=0, count2=0;

        for(int i=0; i<n; i++){
            if(arr[i]==0) count0++;
            else if (arr[i]==1) count1++;
            else count2++;
        }
       
        int Index=0;
        while(count0--){
            arr[Index] = 0;
            Index++;
        }
        while(count1--){
            arr[Index] = 1;
            Index++;
        }
        while(count2--){
            arr[Index] = 2;
            Index++;
        }

    }
};

int main(){
    vector<int> arr = {1, 0, 2, 1, 0};
    Solution obj;
    obj.ZeroOneTwo(arr);
    for(auto it: arr){
        cout<<it<<" ";
    }
    return 0;

}
