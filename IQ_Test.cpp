#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int even=0;
    int odd=0;
    int even_index=0;
    int odd_index=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            even++;
            even_index=i+1;
        }
        else{
            odd++;
            odd_index=i+1;
        }
    }
    if(even==1){
        cout<<even_index;
    }
    else{
        cout<<odd_index;
    }
    return 0;
}

