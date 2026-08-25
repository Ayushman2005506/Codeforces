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
        int left=0;
        int right=n-1;
        while(s[left]!='B'){
            left++;
        }
        while(s[right]!='B'){
            right--;
        }
        cout<<right-left+1<<endl;
    }
    return 0;
}
