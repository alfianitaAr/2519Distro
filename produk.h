#ifndef PRODUK_H_INCLUDED
#define PRODUK_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) P->info
#define next(P) (P)->next
#define first(L) L.first
#define adrP(P) P->adrP
#define adrT(P) P->adrT

typedef struct Produk infotypeProduk;
struct Produk{
    string idProduk;
    string namaProduk;
    int harga;
    float diskon;
};

typedef struct elmList_Produk *addressProduk;

struct elmList_Produk{
    infotypeProduk info;
    addressProduk next;
};

struct listProduk{
    addressProduk first;
};

void createListProduk(listProduk &L);
addressProduk alokasiProduk(infotypeProduk Q);
void insertLastProduk(listProduk &L, addressProduk P);
addressProduk findProduk(listProduk &L, infotypeProduk x);
void printinfoProduk(listProduk &L);
infotypeProduk InsertInfoProduk();
#endif // PRODUK_H_INCLUDED
