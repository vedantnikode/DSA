#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int MajorityElement(vector<int>& arr){
        int n = arr.size();
        int count = 0;
        int el;
        for(int i=0; i<n; i++){
            if(count==0){
                el=arr[i];
                count=1;
            }else if(el==arr[i]){
                count++;
            }else{
                count--;
            }
        }

        int count1 = 0;
        for(int i=0; i<n; i++){
            if(el==arr[i]){
                count1++;
            }
        }

        if(count1>(n/2)){
            return el;
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
