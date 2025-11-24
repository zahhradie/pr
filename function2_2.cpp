#include <iostream>
using namespace std;
string eded(int a){
    if(a>0) return "Musbetdir";
    else if(a<0) return "Menfidir";
    return "Sifirdir";
}
int main(){
    int a;
    cout<<"Ededi daxil edin:";
    cin>>a;
    cout<<eded(a);
}
