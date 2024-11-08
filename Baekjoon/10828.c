#include <stdio.h>
#include <string.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10000

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
        return -1;

    }
    else return stack[top--];
}

element peek()
{
    if (is_empty())
    {
        return -1;
    }
    else return stack[top];
}

int main()
{
    int n,a;
    char arr[17];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);

        if (strcmp(arr, "push")==0)
        {
            scanf("%d", &a);
            push(a);
        }
        else if (strcmp(arr, "pop")==0)
        {
            printf("%d\n",pop());
        }
        else if (strcmp(arr, "size")==0)
        {
            printf("%d\n", top+1);
        }
        else if (strcmp(arr, "top")==0)
        {
            printf("%d\n", peek());
        }
        else
        {
            if (top == -1)printf("1\n");
            else printf("0\n");
        }
    }
    

    return 0;
}
