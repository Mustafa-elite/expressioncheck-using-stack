#pragma once
#define MAX_SIZE 10
enum { false, true };
typedef struct stack { char element[MAX_SIZE]; int top; }STACK_T;
void createemptystack(STACK_T* ptr_stack);
int push(STACK_T* ptr_stack, char data);
int pop(STACK_T* ptr_stack, char* data);
int printstack(STACK_T* ptr_stack);
int getstacktop(STACK_T* ptr_stack);
char getlastelement(STACK_T* ptr_stack);
int isfull(STACK_T* ptr_stack);
int isempty(STACK_T* ptr_stack);
int expression_check(char* expression);