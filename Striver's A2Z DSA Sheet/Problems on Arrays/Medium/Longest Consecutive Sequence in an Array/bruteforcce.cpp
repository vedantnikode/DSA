#include <iostream>
#include <vector>
using namespace std;

class Solution{
private:
    bool linearsearch(vector<int> arr , int num){
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==num){
                return true;
            }
            
        }
        return false; 
    }


public:
    int LongestConsecutiveSeq(vector<int>& arr){
        int n = arr.size();
        int longest = 1;

        for(int i=0; i<n ; i++){
            int temp = arr[i];
            int count = 1;
            while(linearsearch(arr, temp+1)==true){
                count++;
                temp++;
            }

            longest = max(longest,count);
        }

        return longest;

    }
};

int main(){
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    Solution obj;
    cout<<obj.LongestConsecutiveSeq(arr);
    return 0;
}