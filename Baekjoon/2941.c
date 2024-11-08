#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s) ;
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'c' && s[i + 1] == '=') { i++; count++; }
        else if (s[i] == 'c' && s[i + 1] == '-') { i++; count++; }
        else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') { i++; i++; count++; }
        else if (s[i] == 'd' && s[i + 1] == '-') { i++; count++; }
        else if (s[i] == 'l' && s[i + 1] == 'j') { i++; count++; }
        else if (s[i] == 'n' && s[i + 1] == 'j') { i++; count++; }
        else if (s[i] == 's' && s[i + 1] == '=') { i++; count++; }
        else if (s[i] == 'z' && s[i + 1] == '=') { i++; count++; }
        else { count++; }
    }

    printf("%d", count);

    return 0;
}
