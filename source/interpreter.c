#include "../include/interpreter.h"

static void error(char *message);

pstack *variables;

type_pointer *binded_pointer;

void interpretBlinkObjectFile(char *path)
{
	//Initialize values
	variables = pstack_create();
	binded_pointer = (type_pointer *) NULL;

	//Read source file
	FILE *src_file = fopen(path, "r");

  fseek(src_file, 0, SEEK_END);

  unsigned size = ftell(src_file);

  fseek(src_file, 0, SEEK_SET);

  char src[size];
  fread(src, sizeof(char), size, src_file);

  src[size-1] = '\0';

  fclose(src_file);

  //Interpreter
}

//Execute commands
int command_exec(int type, sstack *command)
{
	//Command Executation Status
	int status = 0;

	return status;
}

//Shows a error
static void error(char *message) { printf("\033[31m%s\033[0m\n\n", message); }
