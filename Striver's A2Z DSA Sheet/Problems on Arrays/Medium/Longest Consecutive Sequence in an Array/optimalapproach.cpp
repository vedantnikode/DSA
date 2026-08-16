#include <iostream>
#include <vector>
#include <climits>
#include <unordered_set>
using namespace std;

class Solution{
public:
    int LongestConsecutive(vector<int> arr){
        unordered_set<int> st;
        int n = arr.size();
        int longest = INT_MIN;

        for(int i=0; i<n; i++){
            st.insert(arr[i]);
        }
        
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int count = 1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x++;

                }
                longest = max(longest,count);

            }
             
        }
        return longest;

    }
};

int main(){
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    Solution obj;

    cout<<obj.LongestConsecutive(arr);
    return 0;
}