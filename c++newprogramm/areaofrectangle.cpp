#include<iostream>
using namespace std;
int main(){
    float l, b, A, P;
    cout<<"Enter the l : ";
    cin>>l;
    cout<<"Enter the b : ";
    cin>>b;
    A = l*b;
    // cout<<"Area of rectangle  : A"<<endl;
    P = 2*(l+b);
    // cout<<"Perimeter of rectangle : P"<<en
    //  dl;
    if(A>P){
       cout<<"Area of rectangle ("<< A <<")is greater than perimeter ("<< P << ")";
    }
else{
    cout<<"Perimeter of rectangle ("<< P << ")is greater than area ("<< A << ")";
}
}