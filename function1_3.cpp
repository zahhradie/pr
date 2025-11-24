#include <iostream>
using namespace std;
int kv(int a){
    return a*a;
}
int kub(int a){
    return a*a*a;
}
int main(){
    int a;
    cout<<"Eded:";
    cin>>a;
    cout<<"Ededin kvadrati="<<kv(a)<<endl;
    cout<<"Ededin kubu="<<kub(a)<<endl;
}
