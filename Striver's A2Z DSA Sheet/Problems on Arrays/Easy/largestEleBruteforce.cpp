#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LargestElement(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}


int main(){
    vector<int> arr = {2,3,4,5,4,3,2,6,7,8,7,6,5};
    cout<<LargestElement(arr);
    return 0;
}


//Time complexity O[Nlog(N)]
//Space Complexity O[1]