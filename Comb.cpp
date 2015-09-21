#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
 
using namespace std;
 
int main(int x, char ** argc, char * argv[]) {
   char incr[4097];
   int Y=1;
  for (int i=0;i<=x;i++) {
   if (strcmp("-d",argv[i])) {
     std::ifstream  in(argv[i+1], std::ios::in);
     std::ofstream  out(argv[i+2], std::ios::out | std::ios::binary);
   while (!(in.eof())) {
        char P=in.get();
        char ha[33]= { P };
       for (int j=0;j<=31;j++) {
           if (ha[j]==0) {
               out << (char)Y-1 ;
               Y=1;
           }
           else if (ha[j]==1) {
               Y++;
               continue;
           }
           else
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
       if (0xffffffff > sizeof(incr)+(int)Y+1) {
            for (int j=0;j<=265;j++) {
                 if ((j) != (int)Y) {
                    int F=1;
                    incr[p++] = F;
                 } else if ((j)==(int)Y) {
                    int T=0;
                    incr[p++] = T;
                    break;
                }
           }
     } else {
             out << std::hex << incr;
             delete [] incr;
             char incr[4098];
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
 
