#include "tc_rt.h"

u32 fn_80061544(void)
{
    TcArgs a = {0};
    wr32(0x804b9e08u, 1u);
    (void)tc_call(0x80209bb8u, &a);
    (void)tc_call(0x8003c20cu, &a);
    wr32(0x80571124u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x80035b6cu, &a);
    return 1u;
}
