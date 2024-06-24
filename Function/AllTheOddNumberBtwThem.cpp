#include<iostream>
using namespace std;
int Odd(int a,int b){
    
    for(int i=a;i<=b;i++){
        if(i%2!=0) cout<<i;
        cout<<endl;
    }

}
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    cout<<Odd(a,b);
}