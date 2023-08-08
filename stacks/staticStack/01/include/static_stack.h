#ifndef STATIC_STACK_H
#define STATIC_STACK_H
#include <stdbool.h>
#include <stddef.h> 

typedef struct _static_stack StaticStack;

StaticStack *StaticStack_create(long capacity);
void StaticStack_destroy(StaticStack **S_ref);

bool StaticStack_is_empty(const StaticStack *S);
bool StaticStack_is_full(const StaticStack *S);

void StaticStack_push(StaticStack *S,int val);
long StaticStack_peek(const StaticStack *S);
long StaticStack_pop(StaticStack *S);

void StaticStack_print(const StaticStack *S);

#endif