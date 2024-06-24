#include<iostream>
using namespace std;
float radius(float r){
    float Pi = 3.14;
    return Pi*r*r;
}
int main(){
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<radius(r);
}