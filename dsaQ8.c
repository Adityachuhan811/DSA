/*c code for implemnting stack using array in data strucures and stack is empty or do not , that code will tell you!*/


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

int main()
{
    struct stack *s;
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
   if (isEmpty(s))
   {
    printf("the stack is empty\n");
   }
   else{
    printf("the stack is not empty\n");
   }
   printf("after \n");
   s->arr[0]=5;
   s->top++;
    if (isEmpty(s))
   {
    printf("the stack is empty\n");
   }
   else{
    printf("the stack is not empty\n");
   }
    return 0;
}