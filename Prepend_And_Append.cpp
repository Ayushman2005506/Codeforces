#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0;
        int r=s.length()-1;
        while(l<=r){
            if((s[l]=='0'&&s[r]=='0')||(s[l]=='1'&&s[r]=='1')){
                break;
            }
            else{
                l++;
                r--;
                n=n-2;
            }
        }
        cout<<n<<endl;;
    }
    return 0;
}
