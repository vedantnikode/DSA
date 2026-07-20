#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int MajorityElement(vector<int>& arr){
        int n = arr.size();
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(arr[j]==arr[i]){
                    count++;
                }
            }
            if(count>(n/2)){
                return arr[i];
            }
        }
        return -1;

    }
};

int main(){
    vector<int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    Solution obj;
    cout<<obj.MajorityElement(arr);
    return 0;
}