#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mishka=0;
    int chris=0;
    for(int i=0;i<n;i++){
        int m,c;
        cin>>m>>c;
        if(m>c){
            mishka++;
        }
        else if(c>m){
            chris++;
        }
    }
    if(mishka>chris){
        cout<<"Mishka";
    }
    else if(chris>mishka){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
