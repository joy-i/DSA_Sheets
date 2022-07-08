
#include <iostream>
using namespace std;

int main() {    
    int t,n,j=0;
    cin>>t;
    int v[t],p[t];
    for(int i=0;i<t;i++){
        cin>>v[i];
    }    
    cin>>n;
    
    for(int i=n;i<t;i++,j++){
        p[j]=v[i];
    }
    for(int i=0;i<n;i++,j++){
        p[j]=v[i];
    }
    for(int i=0;i<t;i++){
        cout<<p[i]<<" ";
    }   

    return 0;
}