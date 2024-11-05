//***************** (Note: We Implemented This Stack Through an Array, we can also implement it through a linked list) **********


#include<stdio.h>
#define CAPACITY 3 //assigning constant value to a variable

int stack[CAPACITY];
int top = -1;

void push(int x){ //adding item into stack
    if(top < CAPACITY - 1){
        top = top + 1;
        stack[top] = x;
        printf("Successfully Added Item: %d\n", x);
    }else{
        printf("Exception!!, not enough space\n");
    }
}

int pop(){ //removing an item from stack
    if(top >= 0){
        int value = stack[top];
        top = top - 1;
        return value;
    }
    printf("Exception!!, Stack is empty\n");
    return -1;
}

int peek(){ //returning item from stack without removing
    if(top >= 0){
        return stack[top];
    }
    printf("Stack is Empty!!\n");
    return -1;
}

int main(){
    printf("Implementing My Stack\n");
    push(10);
    push(15);
    push(20);
    printf("pop item: %d\n", pop());
    push(50);
    printf("Top of stack: %d\n", peek());
    return 0;
}