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
        if (0xffffffff == P) {
           Y+=32;
           heh[33]=in.get();
        }
    for (int j=0;j<=31;j++) {
       if (heh[j]==0) {
          Y+=j*4;
          if (heh[j+1]=0) {
             j++;
             Y++;
          }
          if (heh[j+1]==1 && heh[j+2]==0) {
             j+=2;
             Y+=2;
          }
          if (heh[j+1]==1 && heh[j+2]==1 && heh[j+3]==0) {
             j+=3;
             Y+=3;
          }
          out << (char)Y;
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

         if (0xffffffff > sizeof(incr)+(int)Y/4+6) {

                    for (int D : incr)
                      if (D%4==0 && D!=Y)
                         incr[D]=1;
                      else if (D+1==Y)
                         incr[D]=00;
                      else if (D+2==Y)
                         incr[D]=010;
                      else if (D==Y)
                         incr[D]=0;
                      else if (D+3==Y)
                         incr[D]=0110;
                    break;

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
 
