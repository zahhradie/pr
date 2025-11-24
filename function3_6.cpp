#include <iostream>
using namespace std;
int cem(int a){
    int c=0,i=1;
    while(a>=i){
        c+=i;
        i+=1;
    }
    return c;
}
int main(){
    int a;
    cout<<"ededi daxil et:";
    cin>>a;
    cout<<cem(a);
}
