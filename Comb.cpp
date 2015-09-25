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
   int Y=32;
   char indr[33]={ "\0" };
   int Nmbrcnt=0, x=0;
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
   while (!(in.eof())) {
        int V=0;
        char P[33] =in.getline();
        char heh[33] = in.getline();
    for (int j=0;j<=31;j++) {
       if (P[V]==0) {
          if (P[V+1]==0) {
            Y+=heh[j+1]+heh[j+2]+heh[j+3]+heh[j+4];
            j+=5;
            V+=2;
          }
       } else if (P[V+1]!=0) {
            Y+=heh[j+1]+heh[j+2]+heh[j+3]+heh[j+4];
            Y+=heh[j+5]+heh[j+6]+heh[j+7]+heh[j+8];
            j+=9;
            V+=2;
       }
          out << (char)Y;
          Y=0;
       } else if (heh[j]==1) {
          Y+=32;
          continue;
       } else {
          break;
       }
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
        int X=1;
        int j=0;
        int Nmbrcnt=0;
   while (!(in.eof())) {
         int a=0;
         int D=0;
         if (q==1) {
            Y=in.get();
            if ((int)Y%32<1)
               Nmbrcnt = Y/32;
            else
               x=Y%32;
         }
         else {
            q=1;
         }
         if (j=0;j<=Nmbrcnt-1;j++)
            indr[j]=1;

         if (x<16)
            a=1;

          if (28 >= incr.c_str().length()) {
             while (a>=2) {
                      if (1==Y)
                         incr[D]=0000;
                      else if (2==Y)
                         incr[D]=1000;
                      else if (3==Y)
                         incr[D]=0100;
                      else if (4==Y)
                         incr[D]=1100;
                      else if (5==Y)
                         incr[D]=0010;
                      else if (6==Y)
                         incr[D]=1010;
                      else if (7==Y)
                         incr[D]=0110;
                      else if (8==Y)
                         incr[D]=1110;
                      else if (9==Y)
                         incr[D]=0001;
                      else if (10==Y)
                         incr[D]=1001;
                      else if (11==Y)
                         incr[D]=0101;
                      else if (12==Y)
                         incr[D]=1101;
                      else if (13==Y)
                         incr[D]=0011;
                      else if (14==Y)
                         incr[D]=1011;
                      else if (15==Y)
                         incr[D]=0111;
                      else if (16==Y)
                         incr[D]=1111;
                    break;
                    a++;
              }
           } else {
             out << std::hex << incr << endl;
             out << std::hex << indr << endl;
             char indr={};
             char incr={};
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
 
