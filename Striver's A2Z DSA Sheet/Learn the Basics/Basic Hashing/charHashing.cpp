#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Type a string s : ";
    cin>>s;
    
    int hash[25]={0};
    for (int i=0; i<s.length(); i++){
        hash[s[i]-'a']+=1;
    }
    
    for (int i=0; i<25; i++){
    cout<<hash[i]<<" ";
    }
    cout<<endl;

    int q;
    cout<<"query : ";
    cin>>q;

    while(q--){
        char ch;
        cin>>ch;
        cout<<hash[ch-'a']<<endl;
    }
    return 0;
}