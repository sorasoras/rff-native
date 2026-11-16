#include "tc_rt.h"

u32 fn_801fdf30(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8012aafcu, &a);
    return r3;
}
