#include <iostream>
#include <vector>
using namespace std;

void LeftRotate(vector<int>& arr){
    vector<int> nums(arr.size());

    for (int i=1; i<arr.size(); i++){
        nums[i-1] = arr[i];
    }
    nums[arr.size()-1]=arr[0];

    for (int i=0; i<arr.size(); i++){
        cout<<nums[i]<<" ";
    }

}

int main(){
    vector<int> arr = {1,2,3,4,5};
    LeftRotate(arr); 
    return 0;
}


// void LeftRotate(vector<int>& arr){
//     vector<int> nums(arr.size());
//     int Index=0 ;
//     for (int i=1; i<arr.size(); i++){
//         nums[Index] = arr[i];
//         Index++;
//     }
//     nums[Index]=arr[0];

//     for (int i=0; i<arr.size(); i++){
//         cout<<nums[i]<<" ";
//     }

// }

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     LeftRotate(arr); 
//     return 0;
// }