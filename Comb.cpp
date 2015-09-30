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
         V=0;
         j=0;
         Y=32;
       }
       else {
         PassP=1;
       }

    for (V : P) {
       
       if (P[V]==0 && P[V+1]==0)
            Y=32;
       if (P[V]==1 && P[V+1]==0)
            Y=64;
       if (P[V]==0 && P[V+1]==1)
            Y=96;
       if (P[V]==1 && P[V+1]==1)
            Y=127;

       if (heh[j]!=0 && heh[j]!=1)
            break;

       if (P[V+2]==0 && P[V+3]==0) {
            L+=(int)(heh[j]+heh[j+1]);
            j+=3;
       }
       if (P[V+2]==1 && P[V+3]==0) {
            L+=(int)(heh[j]+heh[j+1]+heh[j+2]);
            j+=4;
       }
       if (P[V+2]==0 && P[V+3]==1) {
            L+=(int)(heh[j]+heh[j+1]+heh[j+2]+heh[j+3]);
            j+=5;
       }
       if (P[V+2]==1 && P[V+3]==1) {
            L+=(int)(heh[j]+heh[j+1]+heh[j+2]+heh[j+3]+heh[j+4]);
            j+=6;
       }

       out << (char)Y+L;
       V+=4;
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


         if (Numbrcnt==1) {
            indr[j]=00;
         }
         else if (Nmbrcnt==2) {
            indr[j]=10;
         }
         else if (Numbrcnt==3) {
            indr[j]=01;
         }
         else if (Nmbrcnt==4) {
            indr[j]=11;
         }
         j++;

         x=Y%32;

         if (x<=3)
           indr[j++]=00;
         else if (x>=4 && x<=7)
           indr[j++]=10;
         else if (x>=8 && x<=15)
           indr[j++]=01;
         else if (x>=16 && x<=31)
           indr[j++]=11;
         

         if (24 >= incr.c_str().length()) {
             while (a>=0) {
                      if (0==x)
                         incr[D]=00;
                      else if (1==x)
                         incr[D]=10;
                      else if (2==x)
                         incr[D]=01;
                      else if (3==x)
                         incr[D]=11;
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
                    else if (16==x)
                         incr[D]=00001;
                    else if (17==x)
                         incr[D]=10001;
                    else if (18==x)
                         incr[D]=01001;
                    else if (19==x)
                         incr[D]=11001;
                    else if (20==x)
                         incr[D]=00101;
                    else if (21==x)
                         incr[D]=10101;
                    else if (22==x)
                         incr[D]=01101;
                    else if (23==x)
                         incr[D]=11101;
                    else if (24==x)
                         incr[D]=00011;
                    else if (25==x)
                         incr[D]=10011;
                    else if (x==26)
                         incr[D]=01011;
                    else if (27==x)
                         incr[D]=11011;
                    else if (28==x)
                         incr[D]=00111;
                    else if (29==x)
                         incr[D]=10111;
                   else if (30==x)
                         incr[D]=01111;
                    else if (31==x)
                         incr[D]=11111;
                    if (x>=8)
                      D++;
                    if (x>=16)
                      D++;
                    D+=4;
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
 
     return 0;
}
