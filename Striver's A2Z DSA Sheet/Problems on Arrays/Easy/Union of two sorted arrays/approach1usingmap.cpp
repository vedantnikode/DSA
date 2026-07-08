#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> FindUnion(int arr1[], int arr2[], int n, int m){
        map<int,int> freq;
        for(int i=0; i<n; i++){
            freq[arr1[i]]++;
        }
        for(int i=0; i<m; i++){
            freq[arr2[i]]++;
        }
        vector<int> Union;
        for(auto& it : freq){
            Union.push_back(it.first);
        }
        return Union;
    }

};

int main(){
    int arr1[] = {1,2,3,3,4,4,5,6,7,8};
    int arr2[] = {3,4,5,5,6,6,7,8,9,10,11,11};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    Solution obj;
    vector<int> Union = obj.FindUnion(arr1, arr2, n, m);

    for(auto& ints : Union){
        cout<<ints<<" ";
    }
}