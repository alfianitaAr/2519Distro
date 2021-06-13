#include "nota.h"
#include "toko.h"
#include "produk.h"

void createListNota (listNota &L){
        first(L) = NULL;
}

addressNota alokasiNota(elmList_Nota N,addressProduk Pr,addressToko T){
    addressNota P = new elmList_Nota;
    adrP(P) = Pr;
    adrT(P) = T;
    next(P) = NULL;
    return P;
}

void insertLastNota(listNota &L, addressNota N){
    if(first(L) = NULL){
        first(L) = N;
        next(N) = first(L);
    }else{
        addressNota Q = first(L);
        while(next(Q) != NULL){
            Q = next(Q);
            next(Q) = N;
        }
    }
}

addressNota findNota(listNota &L, addressToko T, addressProduk Pr){
    addressNota N1 = first(L);
    addressNota N;
    bool found = false;
    if(first(L) != NULL){
        while(next(N1) != first(L) && found == false){
            if(adrT(N1) == T && adrP(N1) == Pr){
                found = true;
                N = N1;
            }
            N1 = next(N1);
        }
        if(next(N1) == first(L)){
            if(adrT(N1) == T && adrP(N1) == Pr){
                found = true;
                N = N1;
                return N;
            }
        }else if(found == true){
            return N;
        }else{
            return NULL;
        }
    }else{
        return NULL;
    }
}

void printinfoNota(listNota &L){
    addressNota P;
    P = first(L);
    if(first(L) = NULL){
        cout << "Kosong";
    }else{
        while(P != NULL){
            cout << "Id: " << info(P).id;
            cout << "Tanggal: " << info(P).tanggal;
            cout << "Total: " << info(P).total;
            cout << "Keterangan: " << info(P).ket;
            P = next(P);
        }
    }
}
