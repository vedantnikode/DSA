#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int LongestSubarray(vector<int> arr, int k){
        int n = arr.size();
        int maxi = 0;
        for(int startIndex=0; startIndex<n; startIndex++){
            for(int endIndex=startIndex; endIndex<n; endIndex++){
                int sum=0;
                for(int i=startIndex; i<=endIndex; i++){
                    sum+=arr[i];

                }
                if(sum==k){
                    maxi = max(maxi,endIndex-startIndex+1);
                }
            }

        }
        return maxi ;

    }
};

int main(){
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    Solution obj;
    cout<<obj.LongestSubarray(arr, k);
    return 0;
}

