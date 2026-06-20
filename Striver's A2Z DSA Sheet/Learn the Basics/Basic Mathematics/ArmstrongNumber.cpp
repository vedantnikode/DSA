#include <iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    bool ArmstrongNumber(int n){
        int sum=0;
        int org=n;
        int m=n;
        int count=0;
        while(n>0){
            count++;
            n=n/10;          
        }
        while(m>0){
            int a=m%10;
            int power=round(pow(a,count));
            sum+=power;
            m=m/10;
            cout<<power<<endl;
        }
        cout<<"sum  "<<sum<<endl;
        cout<<"org  "<<org<<endl;
        cout<<"count  "<<count<<endl;

        if(org==sum){
            return true;
        }else{
            return false;
        }

    }
};

int main(){
    Solution obj;
    cout<< obj.ArmstrongNumber(571);
    return 0;
}