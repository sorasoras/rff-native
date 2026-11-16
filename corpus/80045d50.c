#include "tc_rt.h"

u32 fn_80045d50(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80227914u, &a);
    return 1u;
}
