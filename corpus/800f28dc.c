#include "tc_rt.h"

u32 fn_800f28dc(void)
{
    TcArgs a = {0};
    (void)tc_call(0x800410acu, &a);
    return 1u;
}
