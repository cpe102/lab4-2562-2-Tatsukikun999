#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int n){
    int i=2;
    while(i<=n){
        if(n%1==0);
        return i;
    }
}
int main(){
    int x;
    cout << "Input number : ";
    cin >> x;
    cout  << "Result : "<< findDivisor(x);
}