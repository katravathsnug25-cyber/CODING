#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Enter the 3rd number : ";
    cin>>c;
    if(a<b && a<c){
        cout<<a<<"is least number";
    }
    else if(b<a && b<c){
        cout<<b<<"is least number";
    }
    else {
        cout<<c<<" is least number";
    }
}