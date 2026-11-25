#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int a = 1;
    for(int i=1;i<=n;i++){
        if(n%2 == 0) continue;
        cout<<a<<" ";
        a = a + 2;
        // break;

    }
}