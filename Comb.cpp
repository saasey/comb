#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
#include <climits.h>

using namespace std;
 
int main(int x, char ** argc, char * argv[]) {
   char incr[33]={ "\0" };
   int Y=32; int V=0;
   char indr[33]={ "\0" };
   int Nmbrcnt=0, x=0;
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
     int PassP=0;
     char P[33]={};
   while (!(in.eof())) {
       if (PassP=0) {
         P=in.getline();
         PassP=1;
       }
       char heh[33]={};
    for (V : P) {
    for (j : heh) {
       if (P[V]==0) {
            Y+=heh[j]+heh[j+1]+heh[j+2];
            j+=3;
            V+=2;
            Cbrnch+=1;
            int Zzz=1;
       }

       if (P[V]==1)
            Y+=32;
       else if (heh[j]!=0 && heh[j]!=1)
            break;
    }
    if (V==P.c_str().length()) 
       PassP=0;

       out << (char)Y-Cbrnch;
       Y=32;
    }
  }
     out.close();
     in.close();
     cout << "The depression is fiñ";
     return 0;
  } else if (strcmp("-c",argv[i])) {
   std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
   std::ofstream  out(argv[i+2], std::ios::in | std::ios::dec);
	unsigned int p=0;
        int q=1;
        int j=0;
        int Nmbrcnt=0;
   while (!(in.eof())) {
         int a=0;
         int D=0;
         if (q==1)
            Y=in.get();
         else
            q=1;

               Nmbrcnt = Y/32;
               x=Y%32+1
         if (j=0;j<=Nmbrcnt-1;j++)
            indr[j]=1;

         if (x<=8)
            a=0;
         else if (x>=9)
            a=1;
         else if (x>=18)
            a=2;
         else if (x>=27)
            a=3;
         

         Nmbrcnt=round(Nmbrcnt-0.5);

         indr[Nmbrcnt]=0;

         if (24 >= incr.c_str().length()) {
             while (a>=0) {
                      if (1==x)
                         incr[D]=000;
                      else if (2==x)
                         incr[D]=100;
                      else if (3==x)
                         incr[D]=010;
                      else if (4==x)
                         incr[D]=110;
                      else if (5==x)
                         incr[D]=001;
                      else if (6==x)
                         incr[D]=101;
                      else if (7==x)
                         incr[D]=011;
                      else if (8==x)
                         incr[D]=111;
           
                    break;
                    a--;
              }
           } else {
             out << std::hex << incr << endl;
             if (indr.c_str().length() >=28) {
                out << std::hex << indr << endl;
                indr={};
             }
             incr={};
             j=0;
             q=0;
           }
         x-=16;
       }
     }
     out.close();
     in.close();
     cout << "The pressing is finished";
     return 0;
   } else if (i==x) {
       cout << "decompress:\t press -d origin.prs out.file" << endl;
       cout << "compress: \t press -c origin.file out.prs" << endl;
       return 0;
   }
 
 }
 
     return 0;
}
 
