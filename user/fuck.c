#include "types.h"
#include "stat.h"
#include "user.h"

void printfuck(){
    printf(1,"Fuck");
    exit();
}

int
main()
{
    uint* stack = malloc(sizeof(uint) * 1000);
    printf(1,"Test:\n");
    clone(printfuck, (void*)0, (void*)20, stack);
    join((void*)stack);

    exit();
}
