#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n;
    cin>>t;

    vector<long long> inputs(t);
    for (int i = 0; i < t; i++) {
        cin >> inputs[i];                 
    }
    for(int i=0;i<t;i++){
        long long n = inputs[i];
        cout<<(n-1)/2<<endl;
    }      
    
    return 0;
}
