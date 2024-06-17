#include <stdio.h>
#include <string.h>
#include "stack.h"

void initStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    return s->top == -1;
}

void push(Stack *s, char elem){
    if(s->top == MAX - 1){
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = elem;
}

char pop(Stack *s){
    if (isEmpty(s)){
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[(s->top)--];
}

char peek(Stack *s){
    if(isEmpty(s)){
        return -1;
    }
    return s->items[s->top];
}

int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
            break;
        case '*':
        case '/':
            return 2;
            break;
        case '^':
            return 3;
            break;
        case '(':
        case ')':
            return 4;
            break;
        default:
            return 0;
    }
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '(' || ch == ')';
}
