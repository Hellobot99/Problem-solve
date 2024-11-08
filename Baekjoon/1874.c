#include <stdio.h>
#include <string.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000

typedef int element;
element stack[MAX];
int top = -1;

int is_empty()
{
    return(top == -1);
}

int is_full()
{
    return(top == MAX - 1);
}

void push(element item)
{
    if (is_full())
    {
        printf("Stack Overflow\n");
        return;
    }
    else stack[++top] = item;
}

element pop()
{
    if (is_empty())
    {
        return 1;
        
    }
    else return stack[top--];
}

element peek()
{
    if (is_empty())
    {
        printf("스택이 비었습니다.\n");
    }
    else return stack[top];
}

int main()
{
    
    int n, a[100000],b[100000];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        
    }
    
    return 0;
}