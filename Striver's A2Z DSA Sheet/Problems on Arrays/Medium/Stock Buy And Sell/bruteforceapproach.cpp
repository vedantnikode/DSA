#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int Profit(vector<int>& arr){
        int pfp = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int newpfp = arr[j]-arr[i];
                pfp = max(pfp , newpfp);

            }

        }
        return pfp;

    }
};

int main(){
    vector<int> arr = {10, 7, 5, 8, 11, 9};
    Solution obj;
    cout<<obj.Profit(arr);
    return 0;

}