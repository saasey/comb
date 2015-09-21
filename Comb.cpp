#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
 
using namespace std;
 
int main(int x, char ** argc, char * argv[]) {
   char incr[33];
   int Y=1;
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
   while (!(in.eof())) {
        char P=in.get();
        char heh[33]= { P };
        if (0xff == P) {
           Y+=256;
           heh[33]=in.get();
        }
    for (int j=0;j<=31;j++) {
       if (heh[j]==0) {
          
          if (Y%4!=0 && Y%2==0)
             Y-=2;
          else if (Y%4!=0 && Y%3==0)
             Y-=1;
             out << (char)X;
             Y=1;
       } else if (heh[j]==1) {
               Y+=4;
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
   std::ifstream  in(argv[i+1]);
   std::ofstream  out(argv[i+2]);
	unsigned int p=0;
        int X=1;
	while (!(in.eof())) {
         if (X==1)
            Y=in.get();
         else
            X=1;

         if (0xffffffff > sizeof(incr)+(int)Y+2) {
            for (int j=0;j<=Y;j++) {
                 if ((j) != (int)Y && j) {
                    int F=1;
                    incr[p++]=F;
                 }
                 if ((j)==(int)Y) {
                    for (int D : incr)
                      if (D%4==0 && D!=j)
                         incr[D-1]=1;
                      else if (D==j)
                         incr[D]=0;
                      else if (D+1==j)
                         incr[D]=00;
                      else if (D+2==j)
                         incr[D]=010;

                    break;
                 }
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
 
