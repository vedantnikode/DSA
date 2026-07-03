#include <iostream>
#include <vector>
using namespace std;


class Solution{
public:
    int removeDuplicate(vector<int>& arr){
        if(arr.empty())  return 0;
        int i=0;
        for(int j=1; j<arr.size(); j++){
            if (arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return i;
    }
};

int main(){
    vector<int> arr = {1,2,3,3,4,5,5,6};
    Solution obj;
    int k = obj.removeDuplicate(arr);

    for(int i=0; i<=k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

      
}