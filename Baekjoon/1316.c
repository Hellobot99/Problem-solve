#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int n = 0;
    int count=0,m = 1;
    char s[101];
    int len;
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
    {
        m = 1;
        scanf("%s", s);
        
        len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < i-1; j++)
            {
                if (s[i] == s[j] && s[i] != s[i - 1])
                {
                    m = 0; break;
                }
            }
            
        }
        count = count + m;
    }

    printf("%d", count);

    return 0;
}

