#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long int gol;
    char nama[25];
    int Mkerja;
    float bonus;
    long int gajip;
    double gajib;

    cout<<"masukkan nama: ";
    cin>>nama;
    cout<<"masukkan golongan: ";
    cin>>gol;
    cout<<"masa kerja: ";
    cin>>Mkerja;

    if(gol == 1 && Mkerja < 5){
        gol = 5000000;
        bonus = gol*0.05;
        gajib = gol + bonus;
        cout<<"gaji bersih adalah: "<<setprecision(8)<<gajib<<endl;
    }else if(gol == 2 && Mkerja >= 5){
        gol = 7000000;
        bonus = gol * 0.07;
        gajib = gol + bonus;
        cout<<"gaji bersih adalah: "<<setprecision(8)<<gajib<<endl;
    }else if(gol == 3 && Mkerja >= 5){
        gol = 10000000;
        bonus = gol * 0.07;
        gajib = gol + bonus;
        cout<<"gaji bersih adalah: "<<setprecision(8)<<gajib<<endl;
    }else{
        cout<<"salah memsukkan input";
    }
        
    return 0;
}