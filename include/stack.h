#pragma once

#include <stdlib.h>
#include <stdio.h>

#include "str_editor.h"

#ifndef STACK
#define STACK

struct sstack
{
	char **array;
	int length;
};
typedef struct sstack sstack;

struct istack
{
	int *array;
	int length;
};
typedef struct istack istack;

struct pstack
{
	sstack *names;
	void **array;
	istack *types;

	int length;
};
typedef struct pstack pstack;

struct type_pointer
{
	char *name;
	void *pointer;
	int type;
};
typedef struct type_pointer type_pointer;

//String Stack
sstack *sstack_create();
void sstack_push(sstack *stack, char *value);
char *sstack_get(sstack *stack, int index);
void sstack_remove(sstack *stack, int index);
void sstack_pop(sstack *stack);

istack *istack_create();
void istack_push(istack *stack, int value);
int istack_get(istack *stack, int index);
void istack_remove(istack *stack, int index);
void istack_pop(istack *stack);

pstack *pstack_create();
void pstack_push(pstack *stack, char *name, int type, void *value);
type_pointer *pstack_get(pstack *stack, int index);
type_pointer *pstack_get_by_name(pstack *stack, char *name);
void pstack_remove(pstack *stack, int index);
void pstack_pop(pstack *stack);

#endif
