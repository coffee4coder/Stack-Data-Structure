//*/*/*/*/*/*/*/*/*/*/- (Stack Implementation With Array in C |Updated|) -/*/*/*/*/*/*/*/*/*/*/
                      //(loop,if-else, etc. are used to execute functions).


#include<stdio.h>
#define Capacity 20

int stack[Capacity];
int top = -1;

void push(int x){
    if(top < Capacity - 1){
        top++;
        stack[top] = x;
        printf("Element added:%d\n", x);
    }else{
        printf("Exception!!, Stack Overflow\n");
    }
}


int pop(){
    if(top >= 0){
        int holder = stack[top];
        top--;
        return holder;
    }
    printf("Stack Underflow\n");
    return -1;
}


int peek(){
    if(top >= 0){
        return stack[top];
    }
    printf("Stack Underflow\n");
    return -1;
}


int main(){
    int i;
    for(i = 2; i <= 22; i += 2){
        push(i);
        if(i == 20){ //here, you can set value according to your desire
            printf("top of stack: %d\n", peek());
            printf("pop item: %d\n", pop());
        }
        
    }
    return 0;
}