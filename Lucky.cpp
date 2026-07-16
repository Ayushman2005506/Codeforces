#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    string a;
    cin>>a;
    int l=0;
    int r=5;
    int count1=0;
    int count2=0;
    while(l<r){
        count1+=a[l]-'0';
        count2+=a[r]-'0';
        l++;
        r--;
    }
    if(count1==count2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
