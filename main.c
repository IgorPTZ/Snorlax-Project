#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <winable.h>

typedef struct{
    char a[100];
    char b[100];
    char c[100];
    char d[100];
    char e[100];
    char f[100];
    char g[100];
    char h[100];
    char i[100];
    char j[100];
    char k[100];
    char l[100];
    char m[100];
    char n[100];
    char o[100];
    char p[100];
    char q[100];
    char r[100];
    char s[100];
    char t[100];
    char u[100];
    char v[100];
    char x[100];
    char z[100];

}Snorlax;

int main(void)
{
    Snorlax big1;
    Snorlax big2;

    FILE *ptrSnx1;
    FILE *ptrSnx2;
    FILE *ptrCB1;

    if((ptrSnx1 = fopen("Snorlax1.txt","r")) == NULL){
        exit(0);
    }

    if((ptrSnx2 = fopen("Snorlax2.txt","r")) == NULL){
        exit(0);
    }

    if((ptrCB1 = fopen("CodeBlocks19-10.txt","w")) == NULL){
        exit(0);
    }

    fscanf(ptrSnx1,"%s%s%s%s%s%s%s%s%s%s%s%s%s%"
                    "s%s%s%s%s%s%s%s%s%s%s",
                    big1.a,big1.b,big1.c,big1.d,big1.e,big1.f,big1.g,big1.h,big1.i,big1.j,big1.k,big1.l,big1.m,
                    big1.n,big1.o,big1.p,big1.q,big1.r,big1.s,big1.t,big1.u,big1.v,big1.x,big1.z);
    while(1){
        rewind(ptrSnx2);
        fscanf(ptrSnx2,"%s%s%s%s%s%s%s%s%s%s%s%s%s%"
                    "s%s%s%s%s%s%s%s%s%s%s",
                    big2.a,big2.b,big2.c,big2.d,big2.e,big2.f,big2.g,big2.h,big2.i,big2.j,big2.k,big2.l,big2.m,
                    big2.n,big2.o,big2.p,big2.q,big2.r,big2.s,big2.t,big2.u,big2.v,big2.x,big2.z);
        while(1){
             if(strcmp(big1.a,big2.b)!= 0 || strcmp(big1.a,big2.b) == 0){
                BlockInput(1);
                fprintf(ptrCB1,"%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%"
                    "-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s%-40s",
                    big1.a,big1.b,big1.c,big1.d,big1.e,big1.f,big1.g,big1.h,big1.i,big1.j,big1.k,big1.l,big1.m,
                    big1.n,big1.o,big1.p,big1.q,big1.r,big1.s,big1.t,big1.u,big1.v,big1.x,big1.z);
             }
             fscanf(ptrSnx2,"%s%s%s%s%s%s%s%s%s%s%s%s%s%"
                    "s%s%s%s%s%s%s%s%s%s%s",
                    big2.a,big2.b,big2.c,big2.d,big2.e,big2.f,big2.g,big2.h,big2.i,big2.j,big2.k,big2.l,big2.m,
                    big2.n,big2.o,big2.p,big2.q,big2.r,big2.s,big2.t,big2.u,big2.v,big2.x,big2.z);
        }
    }
    return 0;
}
