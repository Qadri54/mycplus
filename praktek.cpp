#include <iostream>
#include <string>
 using namespace std;

 int main(){
    int usia;
    string Lulusan;
    int dukungan;
    char suratKesehatan;

    cout<<"program untuk menentukan calon kepala desa\n\n\n";
    cout<<"Berapakah umur anda?";
    cin>>usia;

    if(usia >= 40){
        cout<<"anda lulusan S1,S2,atau S3? ";
        cin>>Lulusan;

        if(Lulusan == "S1","S2","S3"){
            cout<<"Berapakah pendukung anda?";
            cin>>dukungan;
            if(dukungan >= 3000){
                cout<<"apakah anda memiliki surat keterangan sehat?(jawab 'Y' untuk iya dan jawab 'T' untuk tidak)";
                cin>>suratKesehatan;
                if(suratKesehatan == 'Y' ){
                    cout<<"selamat!!\n anda bisa mengikuti pemilihan kepala desa"<<endl;
                }else{
                    cout<<"Maaf anda tidak dapat mengikuti pemilihan kepala desa"<<endl;
                }
            }else{
                cout<<"anda tidak bisa mengikuti pemilihan calon kepala desa";
            }
        }else{
            cout<<"anda tidak bisa mengikuti pemilihan calon kepala desa";
        }
    }else{
        cout<<"anda tidak boleh mengikuti seleksi"<<endl;
    }

    return 0;
 }