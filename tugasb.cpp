#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    e=0;
    d=0;
    for(int i=1; i<=4; i++){
        cout<<"masukkan nilai a"<<i<<": ";
        cin>>a;
        cout<<"masukkan nilai b"<<i<<": ";
        cin>>b;
        cout<<"masukkan nilai c"<<i<<": ";
        cin>>c;

        d=(a+b+c)/3;
        e=(e+d);
    }
        f=e/4;   
        cout<<"Nilai rata-rata dari seluruh penjumlahan rata-rata bilangan adalah:"<<f;

    return 0;
}