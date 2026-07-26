#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        int y=INT_MAX;
        while(x>0){
            int digit=x%10;
            y=min(y,digit);
            x=x/10;
        }
        cout<<y<<endl;
    }
    return 0;
}
