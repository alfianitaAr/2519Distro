#ifndef NOTA_H_INCLUDED
#define NOTA_H_INCLUDED

#include "toko.h"
#include "produk.h"

#include <iostream>
using namespace std;

#define next(P) P->next
#define first(L) L.first
#define adrP(P) P->adrP
#define adrT(P) P->adrT


struct Nota{
    string id;
    string tanggal;
    int total;
    string ket;
};
typedef struct Nota infotypeNota;

typedef struct elmList_Nota *addressNota;
struct elmList_Nota{
    infotypeNota info;
    addressNota next;
    addressProduk adrP;
    addressToko adrT;
};


struct listNota{
    addressNota first;
};

void createListNota(listNota &L);
addressNota alokasiNota(elmList_Nota N,addressProduk Pr,addressToko T);
void insertLastNota(listNota &L, addressNota N);
addressNota findNota(listNota &L, addressToko T, addressProduk Pr);
void printinfoNota(listNota &L);

#endif // NOTA_H_INCLUDED
