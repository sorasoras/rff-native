#include "tc_rt.h"

void fn_8028cab4(u32 param_1, u32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    wr16(param_1, (u16)param_2);
    r4 = rd32(0x80571b68u);
    if (r4 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = 0.0;
        (void)tc_call(rd32(r4 + 0xcu), &a);
        return;
    }
    a.r[0] = param_1;
    (void)tc_call(0x8028a35cu, &a);
    return;
}
