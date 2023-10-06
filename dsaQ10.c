#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
        return -1;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        return 1;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0)
    {
        printf("not s valid postion for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created successfully\n");
    printf("before pushing , full : %d\n", isFull(sp));
    printf("before pushing , Empty : %d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    printf("before pushing , full : %d\n", isFull(sp));
    printf("before pushing , Empty : %d\n", isEmpty(sp));
    for (int j = 0; j < sp->top + 1; j++)
    {
        printf("the value of the elements is the %d: %d\n", j, peek(sp, j));
    }

    return 0;
}