#include <stdio.h>
#include <string.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 111

typedef char element;
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
        printf("Stack is empty\n");
       
    }
    else return stack[top--];
}

element peek()
{
    if (is_empty())
    {
        ;
    }
    else return stack[top];
}

int main()
{
    int i = 0,result;
    char arr[110];
    fgets(arr, sizeof(arr), stdin);
    while (strcmp(arr, ".\n") != 0) {
        i = 0, result=1,top=-1;
        
        for (int i = 0; i < strlen(arr); i++) {

            switch (arr[i]) {
            case '(': case'[':
                push(arr[i]);
                break;
            case')':
                if (peek() == '(' && is_empty() != 1) pop();
                else result = 0;
                break;
            case']':
                if (peek() == '[' && is_empty() != 1) pop();
                else result = 0;
                break;
            default:
                break;
            }
            if (result == 0)break;
            
        }
        if (is_empty() && result == 1) printf("yes\n");
        else printf("no\n"); 

        fgets(arr, sizeof(arr), stdin);
     }

    return 0;
}