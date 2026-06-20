#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int orgnum=num;
    int revnum=0;
    while (num>0){
        int a=num%10;
        revnum=revnum*10+a;
        num=num/10;
    }
    if (orgnum==revnum){
        cout<<"true";
    }else{
        cout<<"false";
    }

}