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
   int Y=0;
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
   while (!(in.eof())) {
        long long P =in.get();
        char heh[62]= { P };
    for (int j=0;j<=31;j++) {
       if (heh[j]==0) {
          Y+=j*31;
          P=heh[j+1]+heh[j+2]+heh[j+3]+heh[j+4];
          j+=5;
          Y+=P;
          int G=round(Y/100-0.5)+1;
          int H=round(Y/10-0.5)+G*10;
          int I=Y-G-H+2;
          Y=Y+H*32+(G)+I*2+1;
          out << (char)Y;
          Y=0;
       } else if (heh[j]==1) {
          Y+=31;
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
    int D=0;
   std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
   std::ofstream  out(argv[i+2], std::ios::in | std::ios::dec);
	unsigned int p=0;
        int X=1;
     while (!(in.eof())) {
         if (X==1)
            Y=in.get();
         else
            X=1;
         int D=0;
         for (int i=0;i<=10;i++)
             if (i*D<(int)Y)
               D+=31;
             else if
               break;
         if (0xffffffff > (int)incr+(int)Y/31+5) {
                      if (D+1==Y)
                         incr[D]=0000;
                      else if (D+2==Y)
                         incr[D]=1000;
                      else if (D+3==Y)
                         incr[D]=0100;
                      else if (D+4==Y)
                         incr[D]=1100;
                      else if (D+5==Y)
                         incr[D]=0010;
                      else if (D+6==Y)
                         incr[D]=1010;
                      else if (D+7==Y)
                         incr[D]=0110;
                      else if (D+8==Y)
                         incr[D]=1110;
                      else if (D+9==Y)
                         incr[D]=0001;
                      else if (D+10==Y)
                         incr[D]=1001;
                      else if (D+11==Y)
                         incr[D]=0101;
                      else if (D+12==Y)
                         incr[D]=1101;
                      else if (D+13==Y)
                         incr[D]=0011;
                      else if (D+14==Y)
                         incr[D]=1011;
                      else if (D+15==Y)
                         incr[D]=0111;
                      else if (D==Y)
                         incr[D]=0;
                      else if (Y-D>31)
                         incr[D]=1;
                    break;
                }

         if (incr < 0xffffffff - (int)Y) {
                 if ((int)Y<32)
                    z=1;
                 else if ((int)Y>=32)
                    z=2;
                 else if ((int)Y>=64)
                    z=3;
                 else if ((int)Y>=96)
                    z=4;
                 else if ((int)Y>=128)
                    z=5;
                 else if ((int)Y>=160)
                    z=6;
                 else if ((int)Y>=192)
                    z=7;
                 else if ((int)Y>=224)
                    z=8;
                 else if ((int)Y==256)
                    z=9;
                    incr[D]=(int)(Y-((z-1)*32))*10+z-1;
                 p+=3;
         } else {
             out << std::hex << incr << endl;
             char incr[63]={};
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
 
