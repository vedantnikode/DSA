#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int getSingleElement(vector<int> arr){
        int n = arr.size();
        int maxi=0;

        for(int i=0; i<n; i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }

        vector<int> hash(maxi+1, 0);
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }

        for(int i=0; i<n; i++){
            if(hash[arr[i]]==1){
                return arr[i];
            }
        }
        return -1;




    }
};

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6,7,7,8,8,9,9};
    Solution obj;
    cout<<obj.getSingleElement(arr);
    return 0;
}