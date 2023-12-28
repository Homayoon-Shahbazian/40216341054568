#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 number";
    cin>>a>>b>>c;
    if(c*c==a*a+b*b||b*b==a*a+c*c||a*a==b*b+c*c){
        cout<<"True";
        } else{
        cout<<"False";
    }return 0;
}