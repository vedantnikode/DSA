#include <iostream>
using namespace std;
#include <map>

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mp[num]<<endl;
    }
    return 0;
}