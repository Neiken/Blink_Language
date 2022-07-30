#include "../include/stack.h"

//String Stack
sstack *sstack_create()
{
	sstack *stack = (sstack *) malloc(sizeof(sstack));
	stack->array = (char **) malloc(0);

	return stack;
}

void sstack_push(sstack *stack, char *string)
{
	char **old_array = stack->array;
	stack->array = (char **) malloc((stack->length + 1) * sizeof(char *));

	for(int x = 0; x < stack->length; x++) { stack->array[x] = old_array[x]; }

	stack->array[stack->length++] = string;

	free(old_array);
}

char *sstack_get(sstack *stack, int index) { return (index >= stack->length ? (char *) NULL : stack->array[index]); }

//Integer Stack
istack *istack_create()
{
	istack *stack = (istack *) malloc(sizeof(istack));
	stack->array = (int *) malloc(0);

	return stack;
}

void sstack_remove(sstack *stack, int index)
{
	if(index < 0 || index > stack->length) { return; }

	char **old_array = stack->array;
	stack->array = (char **) malloc((--(stack->length)) * sizeof(char *));

	for(int x = 0; x < stack->length; x++) { stack->array[x] = old_array[x]; }
}

void sstack_pop(sstack *stack) { sstack_remove(stack, stack->length-1); }

void istack_push(istack *stack, int value)
{
	int *old_array = stack->array;
	stack->array = (int *) malloc((stack->length + 1) * sizeof(int));

	for(int x = 0; x < stack->length; x++) { stack->array[x] = old_array[x]; }

	stack->array[stack->length] = value;

	free(old_array);
}

int istack_get(istack *stack, int index) { return stack->array[index]; }

void istack_remove(istack *stack, int index)
{
	if(index < 0 || index >= stack->length) { return; }

	int *old_array = stack->array;
	stack->array = (int *) malloc((--(stack->length)) * sizeof(int));

	for(int x = 0; x < stack->length; x++) { stack->array[x] = old_array[x]; }
}

void istack_pop(istack *stack) { istack_remove(stack, stack->length-1); }

//Pointer Stack
pstack *pstack_create()
{
	pstack *stack = (pstack *) malloc(sizeof(pstack));
	stack->names = sstack_create();
	stack->array = (void *) malloc(0);
	stack->types = istack_create();

	return stack;
}

void pstack_push(pstack *stack, char *name, int type, void *value)
{
	sstack_push(stack->names, name);
	istack_push(stack->types, type);

	void **old_array = stack->array;
	stack->array = (void **) malloc((stack->length + 1) * sizeof(void *));

	for(int x = 0; x < stack->length; x++) { stack->array[x] = old_array[x]; }

	stack->array[stack->length++] = value;

	free(old_array);
}

type_pointer *pstack_get(pstack *stack, int index) 
{
	type_pointer *pointer = (type_pointer *) malloc(sizeof(type_pointer));

	pointer->name = sstack_get(stack->names, index);
	pointer->pointer = stack->array[index];
	pointer->type = istack_get(stack->types, index);

	return pointer;
}

type_pointer *pstack_get_by_name(pstack *stack, char *name)
{
	for(int x = 0; x < stack->length; x++)
	{
		if(str_equal(sstack_get(stack->names, x), name)) { return pstack_get(stack, x); }
	}

	return (type_pointer *) NULL;
}

void pstack_remove(pstack *stack, int index)
{
	if(index < 0 || index >= stack->length) { return; }

	sstack_remove(stack->names, index);
	istack_remove(stack->types, index);

	void **old_array = stack->array;
	stack->array = (void **) malloc((--(stack->length)) * sizeof(void *));

	for(int x = 0; x < stack->length; x++) { stack->array[x] = old_array[x]; }
}

void pstack_pop(pstack *stack) { pstack_remove(stack, stack->length-1); }
