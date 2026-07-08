#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        set<int> st;
        for (int i=0; i<n; i++){
            st.insert(arr1[i]);
        }
        for(int i=0; i<m; i++){
            st.insert(arr2[i]);
        }
        vector<int> unionArr(st.begin(), st.end());
        return unionArr;
    }
};

int main(){
    int arr1[] = {1,2,3,3,4,4,5,6,7,8};
    int arr2[] = {3,4,5,5,6,6,7,8,9,10,11,11};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    Solution obj;
    vector<int> unionArray = obj.findUnion(arr1, arr2, n, m);
    for(auto& it: unionArray){
        cout<<it<<" ";
    }
    return 0;
}
