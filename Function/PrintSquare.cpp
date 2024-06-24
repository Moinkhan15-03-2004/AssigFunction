#include<iostream>
using namespace std;
int sqr(int x){
    return x*x;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){

    cout<<sqr(i);
    cout<<endl;
    }
}