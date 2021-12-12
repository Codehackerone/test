#include<iostream>
using namespace std;

int sub(int a, int b){
    return abs(a-b);
}

int mul(int a, int b){
    return a*b;
}

int main(){
    int a=2, b=5,c;
    c=a+b;
    cout<<c<<endl;
    return 0;
}