#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char n[100000];
    n[0] = 1;
    
    int a;
    
    while (n[0] != '0')
    {
        
        scanf("%s", n);
        

        a = strlen(n);
        

        for (int i = 0; i < a; i++)
        {
            if (a == 1 && n[0] == '0') break;
            else if (i == a - 1) { printf("yes\n"); }
            else if (n[i] != n[a - i - 1]) { printf("no\n"); break; }
            
        }
        
    }
    
   

    return 0;
}
