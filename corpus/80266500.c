#include "tc_rt.h"

u32 fn_80266500(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80266ec4u, &a);
    return 0u;
}
