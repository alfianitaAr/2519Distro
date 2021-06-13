#ifndef TOKO_H_INCLUDED
#define TOKO_H_INCLUDED

#include <iostream>
using namespace std;

#include "produk.h"

#define info(P) P->info
#define next(P) P->next
#define first(L) L.first
#define adrP(P) P->adrP
#define adrT(P) P->adrT
#define down(P) P->down

typedef struct Toko infotypeToko;
struct Toko{
    string idToko;
    string namaToko;
    string alamat;
    string telpon;
};

typedef struct elmList_Toko *addressToko;
struct elmList_Toko{
    infotypeToko info;
    addressToko next;
    addressProduk down;
};

struct listToko{
    addressToko first;
};

void createListToko(listToko &L);
addressToko alokasiToko(infotypeToko S);
void insertLastToko(listToko &L, addressToko P);
addressToko findToko(listToko &L, infotypeToko x);
void printinfoToko(listToko &L);
infotypeToko InsertInfoToko();
void SambungProduk(addressToko P, addressProduk Q);
#endif // TOKO_H_INCLUDED
