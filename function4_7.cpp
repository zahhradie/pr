#include <iostream>
using namespace std;
string armstrong(int a){
    int d=a;
    int s=0,q;
    while(a!=0){
        q=a%10;
        s=s+q*q*q;
        a=a/10;
    }
    if(s==d){
        return "Armstrongdur";
    }
    else{
        return "Deyil";
    }
}
int main(){
    int a;
    cout<<"Ededi daxil et:";
    cin>>a;
    cout<<armstrong(a);
}
