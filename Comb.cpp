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
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in | std::ios::binary);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
   while (!(in.eof())) {
        int V=0;
        char P[33] =in.getline();
        char heh[33] = in.getline();
    for (int j=0;j<=31;j++) {
       if (heh[j]==0) {
          if (heh[j+1]==0)
            Y+=heh[j+1]+heh[j+2]+heh[j+3]+heh[j+4]+heh[j+5]+heh[j+6]+heh[j+7]+heh[j+8];
          else
            Y+=heh[j+1]+heh[j+2]+heh[j+3]+heh[j+4];
          j
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
   std::ofstream  out(argv[i+2], std::ios::in | std::ios::dec);
	unsigned int p=0;
        int X=1;
	while (!(in.eof())) {
         if (X==1)
            Y=in.get();
            if ((int)Y>=
         else
            X=1;
         while (a) {
         if (32 >= incr.c_str(),length()) {
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
                      else if (D+16==Y)
                         incr[D]=1111;
                      else if (D==Y)
                         incr[D]=0;
                      else if (D!=Y)
                         incr[D]=1;
                    break;
                }
         } else {
             out << std::hex << incr << endl;
             char incr={};
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
 
