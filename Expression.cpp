#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1&&b==1&&c==1){
        cout<<3;
    }
    else if(a==1 && c==1){
        cout<<a+b+c;
    }
    else if((a==1 && b==1)||(b==1&&c==1)){
        if(a==1 && b==1){
            cout<<c*2;
        }
        else{
            cout<<a*2;
        }
    }
    else if(a==1 || b==1||c==1){
        if(a==1){
            cout<<(a+b)*c;
        }
        else if(c==1){
            cout<<a*(b+c);
        }
        else{
            if(a<c){
                cout<<(a+b)*c;
            }
            else{
                cout<<a*(b+c);
            }
        }
    }
    else{
        cout<<a*b*c;
    }
    return 0;
}
