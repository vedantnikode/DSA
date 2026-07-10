#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int CountMax(vector<int>& arr){
        int count = 0;
        int maxi = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                count++;
            }else{
                count = 0;
            }
        maxi = max(count,maxi);                  

        }
    return maxi;

    }
};

int main(){
    vector<int> arr = {0,1,1,1,1,0,1,0,1,0,0,0,1,1,1,1,1};
    Solution obj;
    cout<<obj.CountMax(arr);
    return 0;
}