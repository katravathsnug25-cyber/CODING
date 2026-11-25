#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout<<"Enter n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        // int sum=1;
        for(j=1;j<=i;j++){
            cout<<j;
            // sum++;
        }
        cout<<"\n";
    }
    return 0;
}