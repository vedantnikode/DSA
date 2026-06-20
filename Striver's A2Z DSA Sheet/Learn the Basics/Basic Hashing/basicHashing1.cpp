#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"No of elements : ";
    cin>>n;
    int arr[9];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }

    for (int i=0; i<13; i++){
        cout<<hash[i]<<" ";
    }
    cout<<endl;

    int q;
    cout<<"Enter query : ";
    cin>>q;
    while(q--){
        int q1;
        cin>>q1;
        cout<<hash[q1];
        cout<<endl;

    }
    return 0;
}