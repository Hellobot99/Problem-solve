#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 50

typedef int element;
element stack[MAX];
int top = -1;


void push()
{
    ++top;
}

void pop()
{
    --top;
}

int main()
{
    int n;
    char arr[51];
    scanf("%d", &n);
    
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr);
        int len = strlen(arr);
        top = -1;


        for (int k = 0; k < len; k++)
        {
            if (arr[k]== '(') push();
            else pop();
            
            if (top < -1) { printf("NO\n"); break; }
        }
        if (top == -1) printf("YES\n");
        else if (top > -1)printf("NO\n");
        
        
    }
    
    return 0;
}