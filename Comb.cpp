#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>

using namespace std;
 
int main(int x, char ** argc, char * argv[]) {
   char incr[33]={ "\0" };
   int Y=32; int V=0, j=0;
   char indr[33]={ "\0" };
   int Nmbrcnt=0, x=0;
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
     int PassP=1;
     char heh[33]={};
     char P[33]={};
   while (!(in.eof())) {
       int L=0;
       if (PassP=1) {
         P=in.getline();
         PassP=0;
         j=0;
         Y=32;
       }
       else {
         PassP=1;
       }

    for (V : P) {
       
       if (P[V]==1)
            Y+=32;
       else if (heh[j]!=0 && heh[j]!=1)
            break;

       if (P[V]==0) {
            if (heh.c_str().length()==j)
                heh=in.getline();
            L+=heh[j]+heh[j+1]+heh[j+2];
            j+=3;
            if P[V+1]==1) 
               out << (char)Y+L;
       }

       if (V>=P.c_str().length()) 
            PassP=1;

    }
  }
     out.close();
     in.close();
     cout << "The depression is fiń";
     return 0;
  } else if (strcmp("-c",argv[i])) {
   std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
   std::ofstream  out(argv[i+2], std::ios::in)
        int q=1;
        int Nmbrcnt=0;
   while (!(in.eof())) {
         int a=0;
         int D=0;
         if (q==1) {
            Y=in.get();
         }
         else {
            q=1;
         }
         Nmbrcnt = Y/32;


         if (Numbrcnt==0) {
            indr[j]=00;
         }
         else if (Nmbrcnt==1) {
            indr[j]=10;
         }
         else if (Numbrcnt==2) {
            indr[j]=01;
         }
         else if (Nmbrcnt==3) {
            indr[j]=11;
         }
         j++;

         x=Y%32;

         if (x/16>=1)
           a=1;
         else
           a=0;

         if (24 >= incr.c_str().length()) {
             while (a>=0) {
                      if (0==x)
                         incr[D]=000;
                      else if (1==x)
                         incr[D]=100;
                      else if (2==x)
                         incr[D]=010;
                      else if (3==x)
                         incr[D]=110;
                      else if (4==x)
                         incr[D]=001;
                      else if (5==x)
                         incr[D]=101;
                      else if (6==x)
                         incr[D]=011;
                      else if (7==x)
                         incr[D]=111;
                      else if (8==x)
                         incr[D]=0001;
                    else if (9==x)
                         incr[D]=1001;
                    else if (10==x)
                         incr[D]=0101;
                    else if (11==x)
                         incr[D]=1101;
                    else if (12=x)
                         incr[D]=0011;
                    else if (13==x)
                         incr[D]=1011;
                    else if (14==x)
                         incr[D]=0111;
                    else if (15==x)
                         incr[D]=1111;
                    D+=3;
                    a--;
              }
             if (indr.c_str().length() >=27) {
                out << std::hex << indr << endl;
                incr={};
                q=1;
             }
             else {
                q=0;
             }
             if (incr.c_str().length() >=28) {
                out << std::hex << incr << endl;
                indr={};
             }
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
