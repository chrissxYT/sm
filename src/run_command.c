#include "run_builtin.h"
#include <stdio.h>
#include <stdlib.h>
#include "system.h"

void run_command(int modifier, char *cmd)
{
        switch(modifier)
        {
                case '%': run_builtin(cmd); break;
                case '!': SYSTEM(cmd); break;
                default : printf("Omitting command \"%s\" with unknown modifier %c.\n", cmd, modifier); break;
        }
}
