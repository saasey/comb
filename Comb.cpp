#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
 
using namespace std;
 
int main(int x, char ** argc, char * argv[]) {
   char incr[33]={ "\0" };
   int Y=0;
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
   while (!(in.eof())) {
        char P[12]=in.get();
        char heh[33]= { P };
    for (int j=0;j<=31;j++) {
       if (0xffffffff == P) {
           heh[33]=in.get();
           break;
        }
       if (heh[j]==0) {
          Y+=j*32;
          P[0]=heh[j+1]+heh[j+2]+heh[j+3]+heh[j+4]+heh[j+5];
          j+=6
          Y+=(int)P;
          out << (char)Y-1;
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
   std::ofstream  out(argv[i+2]);
	unsigned int p=0;
        int X=1;
	while (!(in.eof())) {
         if (X==1)
            Y=in.get();
         else
            X=1;

         if (0xffffffff > sizeof(incr)+(int)Y/32+6) {

                 for (int D=0;D<=32;D++) {
                     if (D!=Y && Y-D<32)
                         incr[D]=1;
                      else if (D+1==Y)
                         incr[D]=00000;
                      else if (D+2==Y)
                         incr[D]=10000;
                      else if (D+3==Y)
                         incr[D]=01000;
                      else if (D+4==Y)
                         incr[D]=11000;
                      else if (D+5==Y)
                         incr[D]=00100;
                      else if (D+6==Y)
                         incr[D]=10100;
                      else if (D+7==Y)
                         incr[D]=01100;
                      else if (D+8==Y)
                         incr[D]=11100;
                      else if (D+9==Y)
                         incr[D]=00010;
                      else if (D+10==Y)
                         incr[D]=10010;
                      else if (D+11==Y)
                         incr[D]=01010;
                      else if (D+12==Y)
                         incr[D]=11010;
                      else if (D+13==Y)
                         incr[D]=00110;
                      else if (D+14==Y)
                         incr[D]=10110;
                      else if (D+15==Y)
                         incr[D]=01110;
                      else if (D+16==Y)
                         incr[D]=11110;
                      else if (D+17==Y)
                         incr[D]=00001;
                      else if (D+18==Y)
                         incr[D]=10001;
                      else if (D+19==Y)
                         incr[D]=01001;
                      else if (D+20==Y)
                         incr[D]=11001;
                      else if (D+21==Y)
                         incr[D]=00101;
                      else if (D+22==Y)
                         incr[D]=10100;
                      else if (D+23==Y)
                         incr[D]=01100;
                      else if (D+24==Y)
                         incr[D]=11100;
                      else if (D+25==Y)
                         incr[D]=00010;
                      else if (D+26==Y)
                         incr[D]=10010;
                      else if (D+27==Y)
                         incr[D]=01010;
                      else if (D+28==Y)
                         incr[D]=11010;
                      else if (D+29==Y)
                         incr[D]=00111;
                      else if (D+30==Y)
                         incr[D]=10111;
                      else if (D+31==Y)
                         incr[D]=01111;
                      else if (D==Y)
                         incr[D]=0;
                    break;
                }
         } else {
             out << std::hex << incr;
             delete [] incr;
             char incr[33];
             X=0;
           }
     }
     out.close();
     in.close();
     delete [] incr;
     cout << "The pressing is finished";
     return 0;
 } else if (i==x) {
       cout << "decompress:\t press -d origin.prs out.file" << endl;
       cout << "compress: \t press -c origin.file out.prs" << endl;
       return 0;
 }
 
}
     delete [] incr;
 
     return 0;
}
 
