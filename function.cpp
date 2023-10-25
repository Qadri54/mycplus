#include <iostream>
using namespace std;

int kpk(int m, int n){
    int hasil = m;
    while(hasil%n != 0){
        hasil += m;
    } 
    return hasil;
    
}

int main(){
    int a;
    int b;
    cout<<"masukkan niali a: ";
    cin>>a;
    cout<<"masukkan nilai b: ";
    cin>>b;

    cout<<kpk(a,b);

    return 0;
}