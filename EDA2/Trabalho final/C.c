#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Data;
typedef struct StackNode {
	Data *data;
	struct StackNode *next;
} StackNode;
typedef struct Stack {
	StackNode *top;
} Stack;

// inicializa a pilha
int initializeStack(Stack *stack) {
	stack->top = NULL;
	return 1;
}

// adiciona um novo elemento no topo da pilha
int pushToStack(Stack *stack, Data *element) {
	StackNode *newNode = malloc(sizeof(StackNode));
	if (newNode == NULL) return 0;
	newNode->data = element;
	newNode->next = stack->top;
	stack->top = newNode;
	return 1;
}

// remove e retorna o elemento do topo da pilha
Data* popFromStack(Stack *stack) {
	if (stack->top == NULL) return NULL;
	StackNode *toRemove = stack->top;
	stack->top = stack->top->next;
	Data* poppedData = toRemove->data;
	free(toRemove);
	return poppedData;
}

int main() {
	Stack stack;
	initializeStack(&stack);
	char op[9];
	while (scanf("%s", op) != EOF) {
		if (strcmp(op, "desfazer") == 0) 
			printf("%s\n", stack.top == NULL ? "NULL" : popFromStack(&stack));
		else if (strcmp(op, "inserir") == 0) {
			Data *str = malloc(sizeof(Data) * 101);
			scanf(" %[^\n]", str);
			pushToStack(&stack, str);
		}
	}
	return 0;
}
