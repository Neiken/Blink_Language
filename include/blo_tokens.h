#pragma once

#include <stdio.h>

#include "str_editor.h"

#ifndef BLINK_OBJECT_TOKENS
#define BLINK_OBJECT_TOKENS

#define BLO_TYPE_STRING ":STRING"

#define BLO_ID_STRING 1

#define BLO_MODE_NONE 0
#define BLO_MODE_STRING 1

#define BLO_COMMAND_CREATE 1
#define BLO_COMMAND_BIND   2
#define BLO_COMMAND_SET    3
#define BLO_COMMAND_PUSH   4
#define BLO_COMMAND_POP    5
#define BLO_COMMAND_ADD    6
#define BLO_COMMAND_PRINT  7

int blo_command_id(char *command);

#endif
