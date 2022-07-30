#pragma once

#include <stdio.h>

#include "str_editor.h"
#include "blo_tokens.h"
#include "stack.h"

#ifndef BLINK_OBJECT_INTERPRETER
#define BLINK_OBJECT_INTERPRETER

void interpretBlinkObjectFile(char *path);

int command_exec(int type, sstack *command_stack);

#endif
