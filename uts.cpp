#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double const ganjil = 0.10;
    double const genap = 0.15;
    double const lansia = 0.05;
    double const pajak = 0.10;
    double hargaGanjil;
    double hargaGenap;


    //perhitungan untuk diskon genap//
    double totalGenap;
    double totalGenap1;
    double totalGenap1_1;
    double totalGenap1A;
    double totalGenap1A_1;
    double totalGenap1_2;
    double diskonGenap;
    //perhitungan untuk diskon genap end//

    //perhitungan diskon ganjil//
    double totalGanjil;
    double totalGanjil1;
    double totalGanjil1_1;
    double totalGanjil1A;
    double totalGanjil1A_1;
    double totalGanjil1_2;
    double diskonGanjil;
    //perhitungan diskon ganjil end//
    
    //variabel penampil untuk diskon lansia//
    double final_LansiaGanjil =0;
    double final_LansiaGenap =0;
    //variabel penampil untuk diskon lansia end//

    //variabel penampil untuk diskon tanpa lansia//
    double final_Genap;
    double final_Ganjil;
    //variabel penampil untuk diskon tanpa lansia end//

    int umur;
    cout<<"berapakah umur anda?";
    cin>>umur;
    if(umur >= 60){
        for(int i=1; i<=6; i++){
            cout<<"masukkan harga barang pada bulan ganjil ke "<<i<<" :";
            cin>>hargaGanjil;
            cout<<"masukkan harga barang pada bulan genap ke "<<i<<" :";
            cin>>hargaGenap;

            //rumus bulan genap//
            diskonGenap = hargaGenap*pajak;
            totalGenap = hargaGenap + diskonGenap;

            totalGenap1 = totalGenap;
            totalGenap1_1 = totalGenap1 * genap;
            totalGenap1_2 = totalGenap1-totalGenap1_1;

            totalGenap1A = totalGenap1_2 * lansia;
            final_LansiaGenap += totalGenap1_2 - totalGenap1A;
            //rumus bulan genap end//

            //rumus bulan ganjil//
            diskonGanjil = hargaGanjil*pajak;
            totalGanjil = hargaGanjil + diskonGanjil;

            totalGanjil1 = totalGanjil;
            totalGanjil1_1 = totalGanjil1 * ganjil;
            totalGanjil1_2 = totalGanjil1-totalGanjil1_1;

            totalGanjil1A = totalGanjil1_2 * lansia;
            final_LansiaGanjil += totalGanjil1_2 - totalGanjil1A;
            //rumus bulan ganjil end//            
        }

        cout<<"Total keuntungan diskon untuk para lansia dibulan ganjil adalah: "<<setprecision(16)<<final_LansiaGanjil<<endl;
        cout<<"Total keuntungan diskon untuk para lansia dibulan genap adalah: "<<setprecision(16)<<final_LansiaGenap<<endl;
        cout<<"Totalkeuntungan selama satu tahun dengan diskon untuk lansia adalah : "<<setprecision(16)<<final_LansiaGenap+final_LansiaGanjil<<endl;

    }else{
        for(int i=1; i<=6; i++){
            cout<<"masukkan harga barang pada bulan ganjil ke "<<i<<" :";
            cin>>hargaGanjil;
            cout<<"masukkan harga barang pada bulan genap ke "<<i<<" :";
            cin>>hargaGenap;

             //rumus bulan genap//
            diskonGenap = hargaGenap*pajak;
            totalGenap = hargaGenap + diskonGenap;

            totalGenap1 = totalGenap;
            totalGenap1_1 = totalGenap1 * genap;
            totalGenap1_2 = totalGenap1-totalGenap1_1;

            final_Genap += totalGenap1_2;
            //rumus bulan genap end//

            //rumus bulan ganjil//
            diskonGanjil = hargaGanjil*pajak;
            totalGanjil = hargaGanjil + diskonGanjil;

            totalGanjil1 = totalGanjil;
            totalGanjil1_1 = totalGanjil1 * ganjil;
            totalGanjil1_2 = totalGanjil1-totalGanjil1_1;

            final_Ganjil += totalGanjil1_2;
            //rumus bulan ganjil end//   
        }
        cout<<"Total keuntungan diskon untuk para lansia dibulan ganjil adalah: "<<setprecision(16)<<final_Ganjil<<endl;
        cout<<"Total keuntungan diskon untuk para lansia dibulan genap adalah: "<<setprecision(16)<<final_Genap<<endl;
        cout<<"Totalkeuntungan selama satu tahun dengan diskon untuk lansia adalah : "<<setprecision(16)<<final_Genap+final_Ganjil<<endl;
    }

    return 0;
}
