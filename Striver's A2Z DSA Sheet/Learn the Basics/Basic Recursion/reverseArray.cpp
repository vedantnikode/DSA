// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
// public:
//     vector<int> ReverseArray(vector<int>& arr){
//         int n=arr.size();

//         vector<int> rev(n);

//         for(int i=0; i<n; i++){
//             rev[i]=arr[n-i-1];
//         }
//         return rev;
//     }
// };

// int main(){
//     Solution obj;
//     vector<int> arr={1,2,3,4,5};
//     vector<int> result=obj.ReverseArray(arr);

//     for(int i=0; i<result.size(); i++ ){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }




#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> ReverseArray(vector<int>& arr){
        int j1=0;
        int j2=arr.size()-1;
        while(j1<j2){
            swap(arr[j1],arr[j2]);
            j1++;
            j2--;
        }
        return arr;
    }
};

int main(){
    Solution obj;
    vector<int> arr={1,2,3,4,5};
    obj.ReverseArray(arr);

    for(int i=0; i<arr.size(); i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;
}