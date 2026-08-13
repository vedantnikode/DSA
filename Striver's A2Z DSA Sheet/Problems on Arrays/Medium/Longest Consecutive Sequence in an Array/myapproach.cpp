#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    int LongestConsecutive(vector<int> arr){
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int mostmax = 0;
        int maxi=1;
        for(int i=0; i<n; i++){
            if (arr[i+1]==arr[i]+1){
                maxi++;
            }else{
                maxi=1;
            }

            mostmax = max(mostmax,maxi);
            
        }
        return mostmax;

    }
};

int main(){
    vector<int> arr = {100, 4, 200, 1, 3, 2, 5};
    Solution obj;

    cout<<obj.LongestConsecutive(arr);
    return 0;
}