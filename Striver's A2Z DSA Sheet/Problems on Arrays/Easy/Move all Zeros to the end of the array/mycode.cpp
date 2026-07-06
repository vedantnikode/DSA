#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void Movezeroes(vector<int>& arr){
        vector<int> temp(arr.size());
        int j=arr.size()-1;
        int k=0;
        for(int i=0 ; i<arr.size(); i++){
            if (arr[i]==0){
                temp[j] = arr[i];
                j--;
            }else{
                temp[k] = arr[i];
                k++;
            }
        }
        for (int i=0; i<arr.size(); i++){
        cout<<temp[i]<<" ";
        }

    }
};

int main(){
    Solution obj;
    vector<int> arr = {0,1,2,3,4,0,4,3,2,0,4,3};
    obj.Movezeroes(arr);


    return 0;
}