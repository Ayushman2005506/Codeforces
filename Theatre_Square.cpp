#include <iostream>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long result;
    if(n%a==0 && m%a==0){
        result=(n/a)*(m/a);
        cout<<result;
        return 0;
    }
    else if(n%a!=0 && m%a==0){
        result=((n/a)+1)*(m/a);
        cout<<result;
        return 0;
    }
    else if(n%a==0 && m%a!=0){
        result=(n/a)*((m/a)+1);
        cout<<result;
        return 0;
    }
    else{
        result=((n/a)+1)*((m/a)+1);
        cout<<result;
        return 0;
    }
    return 0;
}
