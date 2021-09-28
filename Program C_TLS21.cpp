#include <iostream>
using namespace std;

int main()
{
    char rentang_umur;
    float dry_food=120000, wet_food=36000, shampoo=35000, litter_box=12000, pasir=35000, snack=28000, kalung=5000, 
          tali_jalan=15000, sisir=10000, vaksin_F4=160000, vaksin_F3=150000, suntik_parasit=50000, biaya_kontrol=75000,
          obat_jamur=20000, obat_mata=40000, obat_cacing=20000, obat_kutu=30000, vitamin=20000, gunting_kuku=30000;
    
    cout<<"Selamat Datang!\nAnda berada dalam layanan informasi 'Rawat Kucing'\n";
    cout<<"Anda akan menghitung perkiraan perawatan 1 ekor kucing selama satu bulan\n";
    cout<<"Rentang umur : \n0-2 bulan = A\n2-6 bulan = B\n6-12 bulan = C\n>12 bulan = D\n";
    cout<<"Masukkan kode rentang umur kucing Anda : ";
    cin>>rentang_umur;
    cout<<"-------------------------------------------------------------------------------------------\n";
    
    switch (rentang_umur){
        case 'A' :
            cout<<"Barang-barang yang Anda butuhkan: \nWet Food = Rp"<<wet_food<< " per 2 kaleng\nPasir = Rp"<<pasir<< " per 5 kg\n";
            cout<<"Shampoo=  Rp"<<shampoo<< " per 250 ml\nLitter Box = "<<litter_box<< " per buah\n";
            break;
        case 'B' :
            cout<<"Barang-barang yang Anda butuhkan: \nDry Food = Rp"<<dry_food<< " per 4 kg\n";
            cout<<"Wet Food = Rp"<<wet_food<< " per 2 kaleng\nPasir = Rp"<<pasir<< " per 5 kg\n";
            cout<<"Shampoo = Rp"<<shampoo<< " per 250 ml\nLitter Box = "<<litter_box<< " per buah\nSnack = Rp"<<snack<< " isi 4\n";
            break;
        case 'C' :
            cout<<"Barang-barang yang Anda butuhkan: \nDry Food = Rp"<<dry_food<< " per 4 kg\n";
            cout<<"Wet Food = Rp"<<wet_food<< " per 2 kaleng\nPasir = Rp"<<pasir<< " per 5 kg\n";
            cout<<"Shampoo = Rp"<<shampoo<< " per 250 ml\nLitter Box = "<<litter_box<< " per buah\nSnack = Rp"<<snack<< " isi 4\n";
            break;
        case 'D' :
            cout<<"Barang-barang yang Anda butuhkan: \nDry Food = Rp"<<dry_food<< " per 4 kg\n";
            cout<<"Wet Food = Rp"<<wet_food<< "per 2 kaleng\nPasir = Rp"<<pasir<< " per 5 kg\n";
            cout<<"Shampoo = Rp"<<shampoo<< " per 250 ml\nLitter Box = "<<litter_box<< " per buah\nSnack = Rp"<<snack<< " isi 4\n";
            break;
        default :
            cout<<"Kode yang anda masukkan salah, harap baca kode rentang umur kembali.";
    }
    
    cout<<"-------------------------------------------------------------------------------------------\n";
    
    bool perlu;
    cout<<"1 = Perlu\n0 = Tidak Perlu\nApakah Anda perlu info barang-barang tambahan? \n";
    cin>>perlu;
    if (perlu==1) {
        cout<<"Kalung = Rp"<<kalung<< " per buah\nTali jalan = Rp"<<tali_jalan<< " per buah\n";
        cout<<"Sisir = Rp"<<sisir<< " per buah\nGunting kuku = Rp"<<gunting_kuku<< " per buah\n";
    }
    else
        cout<<"\n";
    
    cout<<"-------------------------------------------------------------------------------------------\n";
        
    bool butuh;
    cout<<"1 = Butuh\n0 = Tidak Butuh\nApakah Anda butuh info mengenai obat, vaksin, dan vitamin?\n";
    cin>>butuh;
    if (butuh == 1) {
        cout<<"Vaksin F4 = Rp"<<vaksin_F4<<"\nVaksin F3 = Rp"<<vaksin_F3<<"\nSuntik Parasit = Rp"<<suntik_parasit<<"\n";
        cout<<"Biaya Kontrol = Rp"<<biaya_kontrol<<"\nObat Jamur = Rp"<<obat_jamur<<"\nObat Mata = Rp"<<obat_mata<<"\n";
        cout<<"Biaya Cacing = Rp"<<obat_cacing<<"\nObat Kutu = Rp"<<obat_kutu<<"\nVitamin = Rp"<<vitamin<<"\n\n";
    }
    else
        cout<<"Baiklah, semoga dipertimbangkan kembali <3\n\n";
    
    cout<<"Terima kasih telah menggunakan layanan informasi 'Rawat Kucing'\n";
    cout<<"Semoga hari-hari Anda menyenangkan, Selamat Gini Hari!\n";
    return 0;
}