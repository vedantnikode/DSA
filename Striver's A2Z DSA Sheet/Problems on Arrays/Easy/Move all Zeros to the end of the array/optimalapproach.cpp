#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void MoveZeroes(vector<int>& arr){
        int j = -1;
        for (int i=0; i<arr.size(); i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;

       
        for (int i=j+1; i<arr.size(); i++){
            if(arr[i]!=0){
                swap(arr[j],arr[i]);
                j++;
                for(int i=0; i<arr.size(); i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                
            }
        }
        


    }
};

int main(){
    Solution obj;
    vector<int> arr = {1,2,0,3,0,4,5,0,6,0};
    obj.MoveZeroes(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}