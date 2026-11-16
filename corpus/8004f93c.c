#include "tc_rt.h"

s32 fn_8004f93c(void)
{
    return (s32)(rd32(0x8057108cu) - rd32(0x803c6a88u));
}
