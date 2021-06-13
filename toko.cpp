#include "toko.h"

void createListToko (listToko &L){
    first(L) = NULL;
}

addressToko alokasiToko(infotypeToko S){
    addressToko P = new elmList_Toko;
    info(P).idToko = S.idToko;
    info(P).alamat = S.alamat;
    info(P).namaToko = S.namaToko;
    info(P).telpon = S.telpon;
    next(P) = NULL;
    down(P) = NULL;

    return P;
}

/*infotypeToko InsertInfoToko(){
    infotypeToko x;
    cout << "Masukkan Nama Toko : ";
    cin >> x.namaToko;
    cout << "Masukan Id Toko : ";
    cin >> x.idToko;
    cout << "Masukan Alamat Toko : ";
    cin >> x.alamat;
    cout << "Masukan Nomor Telpon : ";
    cin >> x.telpon;
    return x;
}
*/

void insertLastToko(listToko &L, addressToko P){
    if(first(L) == NULL){
        first(L) = P;
    }else{
        addressToko Q = first(L);
        while(next(Q) != NULL){
            Q = next(Q);
            next(Q) = P;
        }
    }
}

addressToko findToko(listToko &L, infotypeToko x){
    addressToko P = first(L);
    addressToko Q;
    bool found = false;
    if(first(L) != NULL){
        if(info(P).namaToko == x.namaToko){
            found = true;
            Q = P;
        }
        while(P != NULL && found == false){
            if(info(P).namaToko == x.namaToko){
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

void printinfoToko(listToko &L){
    addressToko P;
    infotypeToko t;
    P = first(L);
    if(first(L) == NULL){
        cout << "Kosong";
    }else{
        do{
            cout << "Id: " << t.idToko<< endl;
            cout << "Nama: " << t.namaToko <<endl;
            cout << "Alamat: " << t.alamat <<endl;
            cout << "No. Telepon: " << t.telpon <<endl;
            P = next(P);
        }while(P != NULL);
    }
}

void SambungProduk(addressToko P, addressProduk Q){
    down(P) = Q;
}
