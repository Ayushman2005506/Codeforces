#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x[3];
        int count=0;
        cin>>x[0]>>x[1]>>x[2];
        sort(x,x+3);
        if(x[0]==x[1] || x[1]==x[2]){
            cout<<0<<endl;
            continue;
        }
        while(x[0]!=x[1] && x[1]!=x[2] && x[0]!=x[2]){
            x[0]++;
            x[2]--;
            count++;
            sort(x,x+3);
        }
        cout<<count<<endl;
    }

    return 0;
}
