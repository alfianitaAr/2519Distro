#include "produk.h"

void createListProduk (listProduk &L){
    first(L) = NULL;
}

addressProduk alokasiProduk(infotypeProduk Q){
    addressProduk P = new elmList_Produk;
    info(P) = Q;
    next(P) = NULL;
    return P;
}

void insertLastProduk(listProduk & L, addressProduk P){
    if(first(L) == NULL){
        first(L) = P;
    }else{
        addressProduk Q = first(L);
        while(next(Q) != NULL){
            Q = next(Q);
            next(Q) = P;
        }
    }
}

addressProduk findProduk(listProduk &L, infotypeProduk x){
    addressProduk P = first(L);
    addressProduk Q;
    bool found = false;
    if(first(L) != NULL){
        if(info(P).namaProduk == x.namaProduk){
            found = true;
            Q = P;
        }
        while(P != NULL && found == false){
            if(info(P).namaProduk == x.namaProduk){
                found = true;
                Q = P;
            }
            P = next(P);
        }
        if(found == true){
            return Q;
        }else{
            return NULL;
        }
    }else{
        return NULL;
    }
}

void printinfoProduk(listProduk &L){
    addressProduk P = first(L);
    if(first(L) = NULL){
        cout << "Kosong";
    }else{
        while(P != NULL){
            cout << "Masukan Id Produk : " << info(P).idProduk;
            cout << "Masukan Nama Produk : " << info(P).namaProduk;
            cout << "Masukan Harga Produk : " << info(P).harga;
            cout << "Masukan Diskon Produk : " << info(P).diskon;
            P = next(P);
        }
    }
}
infotypeProduk InsertInfoProduk(){
    infotypeProduk y;

    cout << "Masukkan Nama Produk : "; cin >> y.namaProduk;
    cout << "Masukan Id Produk : "; cin >> y.idProduk;
    cout << "Masukan Harga Produk : ";cin >> y.harga;
    cout << "Masukan Diskon Produk : ";cin >> y.diskon;


    return y;
}
