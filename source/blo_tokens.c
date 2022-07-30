#include "../include/blo_tokens.h"

int blo_command_id(char *command)
{
	char *commands[] = 
	{
		"CREATE",
		"BIND"  ,
		"SET"   ,
		"PUSH"  ,
		"POP"   ,
		"ADD"   ,
		"PRINT"
	};

	for(int x = 0; x < sizeof(commands) / sizeof(char *); x++)
	{
		if(str_equal(commands[x], command)) { return x+1; }
	}

	return -1;
}
