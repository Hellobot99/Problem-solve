#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int a, b=1,k;
    char s[1000000];
    
    scanf("%[^\n]s", &s);
    if (s[0] == ' '&&strlen(s)==1) b = 0;
          
    for (int i = 1; i < strlen(s)-1; i++) {
        
        if (s[i] == ' ') b++;       
                                 
    }
    
    printf("%d", b);
    
    return 0;
}