#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int a, b ,hun,ten,one,count=0;
    int n[1001] = { 0 };

    for (int i = 1; i < 1001; i++) {
        if (i == 1000)n[1000] = 0;
        else if (i > 99) {
            hun = i / 100;
            ten = (i % 100) / 10;
            one = i % 10;
            if ((hun-ten)==(ten-one)) n[i] = 1;
        }
        else n[i] = 1;
    }   
  
   scanf("%d", &a);

   for (int i = 1; i < a+1; i++) {
       if (n[i] == 1)count++;
   }
   printf("%d", count);

    return 0;
}