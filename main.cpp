#include <iostream>
#include <stdlib.h>

#include "toko.h"
#include "produk.h"
#include "nota.h"

using namespace std;


void menu(int &x){
    system("cls");
    cout << " 1. Tambah toko " << endl;
    cout << " 2. Tambah Produk " << endl;
    cout << " 3. Lihat Toko" <<endl;
    cout << " 4. Lihat Produk" << endl;
    cout << " 5. Cari Toko" <<endl;
    cout << " 6. Cari Produk" <<endl;
    cin >> x;
}

int main()
{
    infotypeToko x;
    infotypeProduk y;
    listProduk LP;
    addressToko a;
    addressProduk b;
    addressNota c;
    listToko LT;
    string pilihan;
    string pilnamatoko;
    bool start = true;
    int pil;
    createListToko(LT);

    //data1
    x.idToko = "12";
    x.namaToko = "bambang";
    x.alamat = "bandung";
    x.telpon = "085647890";

    //data2
    y.idProduk = "14";
    y.namaProduk = "sweater";
    y.harga = 30000;
    y.diskon = 0.5;

    do{
        menu(pil);
        switch(pil){
            case 1 :
            system("cls");
            //buat kaliamat, cout masukan data
            cout << ""
            for
            cout << "Masukkan Nama Toko : ";
            cin >> x.namaToko;
            cout << "Masukan Id Toko : ";
            cin >> x.idToko;
            cout << "Masukan Alamat Toko : ";
            cin >> x.alamat;
            cout << "Masukan Nomor Telpon : ";
            cin >> x.telpon;
            //a = alokasiToko(x);
            insertLastToko(LT, a);
            cout << "Tambah toko lagi?";
            cout <<"ya/tidak : ";
            cin >>(pilihan);
            if(pilihan == "ya"){
                system("cls");
                cout << "Masukkan Nama Toko : ";
                cin >> x.namaToko;
                cout << "Masukan Id Toko : ";
                cin >> x.idToko;
                cout << "Masukan Alamat Toko : ";
                cin >> x.alamat;
                cout << "Masukan Nomor Telpon : ";
                cin >> x.telpon;
                insertLastToko(LT, a);
                //InsertInfoToko();
                menu(pil);
            }
            break;

            case 2 :
            //y = InsertInfoProduk();
            //b = alokasiProduk(y);
            //insertLastProduk(LP, b);
            system("cls");
            cout << "Masukkan Nama Toko: ";
            cin >> pilnamatoko;
            if(x.namaToko == pilnamatoko){
                system("pause");
                //InsertInfoProduk();
                cout << "Masukkan Nama Produk : "; cin >> y.namaProduk;
                cout << "Masukan Id Produk : "; cin >> y.idProduk;
                cout << "Masukan Harga Produk : ";cin >> y.harga;
                cout << "Masukan Diskon Produk : ";cin >> y.diskon;
                cout << "Tambah lagi?";
                cout << "ya/tidak : ";
                cin >>(pilihan);
                    if(pilihan == "ya"){
                        system("cls");
                        InsertInfoProduk();
                    }
            }else{
                cout <<"Tidak ada Toko  dengan nama itu";
                system("pause");
            }
            break;
            case 3 :
                system("cls");
                //printinfoToko(LT);
                addressToko P;
                //infotypeToko t;
                P = first(LT);
                if(first(LT) == NULL){
                    cout << "Kosong";
                }else{
                    do{
                    cout << "Id: " << info(P).idToko<< endl;
                    cout << "Nama: " << info(P).namaToko <<endl;
                    cout << "Alamat: " << info(P).alamat <<endl;
                    cout << "No. Telepon: " << info(P).telpon <<endl;
                    P = next(P);
                }while(P != NULL);
            }
            break;
            case 4 :
                system("cls");
                //printinfoProduk(LP);
                addressProduk b;
                b = first(LP);
                if(first(LP) == NULL){
                    cout << "Kosong";
                }else{
                    do{
                        cout << "Id Produk : " << y.idProduk <<endl;
                        cout << "Nama Produk : " << y.namaProduk <<endl;
                        cout << "Harga Produk : " << y.harga <<endl;
                        cout << "Diskon Produk : " << y.diskon <<endl;
                        P = next(P);
                    }while(next(P) != NULL);
                }
            break;
            case 5 :
                system("cls");
                findToko(LT,x);
            break;
            case 6:
                system("cls");
                findProduk(LP,y);
            break;

        }
    }while(pil != 5);
}
