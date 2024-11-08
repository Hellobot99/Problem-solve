#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    char quiz[80];
    int c,a,con=1,sum=0;
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%s", quiz);

        a = strlen(quiz);

        con = 1;

        if (quiz[0] == 'O') { sum = 1; }
        else { sum = 0; }

        for (int i = 1; i < a; i++)
        {
            if (quiz[i] == 'O' && quiz[i - 1] == 'O') { con++; }
            else if (quiz[i] == 'O' && quiz[i - 1] == 'X') { con = 1; }
            else if (quiz[i] == 'X') { con = 0; }
            sum += con;
            
        }

        printf("%d\n", sum);
    }

    

    

    return 0;
}
