#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 10

typedef char typeEntry;

typedef struct
{
    int top;
    typeEntry entry[MAX];
}stackType;

void creatStack(stackType *s);       // Create stack

int stackIsEmpty(stackType s);      // Check weather is empty or not

int push(typeEntry item, stackType *s);   // Push item into the stack array

int pop(typeEntry *item, stackType *s);  // Pop item into the stack array

int stack_size(stackType s);          // Returns stack size

typeEntry stack_first(stackType s);        // returns the first element in the stack

char last_element(stackType s);    // returns the last element

typeEntry stackDestroy(stackType *s);     // destroy stack

typeEntry stackCopy(stackType *s, stackType *s1);    // copy stack

#endif // STACK_H_INCLUDED
