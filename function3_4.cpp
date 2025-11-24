#include <iostream>
using namespace std;
int faktorial(int a){
    int f=1,i=1;
    while(i<=a){
        f=f*i;
        i=i+1;
    }
    return f;
}
int main(){
    int a;
    cout<<"Ededi daxil et: ";
    cin>>a;
    cout<<"Netice: "<<faktorial(a);
}
