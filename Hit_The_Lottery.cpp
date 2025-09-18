#include <iostream>
using namespace std;

int main(){
    int arr[]={1,5,10,20,100};
    int n;
    cin>>n;
    int count=0;
    for(int i=4;i>=0;i--){
        if(arr[i]<=n){
            count += (n/arr[i]);
            n %= arr[i];
        }
    }
    cout<<count;
    return 0;
}
