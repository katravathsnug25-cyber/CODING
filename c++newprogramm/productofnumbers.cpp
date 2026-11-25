#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
   int product = 1;
   int ld;
    while(n!=0){
        ld = n%10;
        product *= ld;
        n = n / 10;
    }
        cout<<product<<" ";
}