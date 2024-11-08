#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n,count=1,result=0,len;
    char t[10000];
    
    scanf("%d", &n);
    if (n == 1)printf("666\n");
    else
    {
        for (int i = 1666; i < 100000000; i++)
        {

            sprintf(t, "%d", i);
            len = strlen(t);
            for (int k = 0; k < len - 2; k++)
            {
                if (t[k] == '6' && t[k + 1] == '6' && t[k + 2] == '6')
                {
                    result = i, count++; break;
                }
            }
            if (count >= n) { printf("%d", result); break; }
        }
    }
 
    return 0;
}