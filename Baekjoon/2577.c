#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int a, b, c, d;
    int result[10] = { 0,0,0,0,0,0,0,0,0,0 };
    char time[20];
    scanf("%d %d %d", &a, &b, &c);
    
    sprintf(time ,"%d", a*b*c);
    
    d = strlen(time);

    for (int i = 0; i < d; i++)
    {
            if (time[i] == '0') { result[0]++; }
            if (time[i] == '1') { result[1]++; }
            if (time[i] == '2') { result[2]++; }
            if (time[i] == '3') { result[3]++; }
            if (time[i] == '4') { result[4]++; }
            if (time[i] == '5') { result[5]++; }
            if (time[i] == '6') { result[6]++; }
            if (time[i] == '7') { result[7]++; }
            if (time[i] == '8') { result[8]++; }
            if (time[i] == '9') { result[9]++; }
    }

    for (int k = 0; k < 10; k++)
    {
        printf("%d\n", result[k]);
    }
   
    return 0;
}