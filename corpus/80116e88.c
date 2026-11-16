#include "tc_rt.h"

u32 fn_80116e88(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80361e20u);
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = 0x80116ef4u;
    a.r[2] = 0x80099e38u;
    a.r[3] = 0x58u;
    a.r[4] = 0xau;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = 0u;
    a.r[2] = 0x370u;
    (void)tc_call(0x8000443cu, &a);
    return param_1;
}
