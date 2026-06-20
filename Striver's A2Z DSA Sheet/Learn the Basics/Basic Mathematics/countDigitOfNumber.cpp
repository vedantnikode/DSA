#include <iostream>
using namespace std;

int main(){
    int n=12345;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count;
    return count;


}
