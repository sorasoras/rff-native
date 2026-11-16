#include "tc_rt.h"

void fn_802967c8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(0x8053df74u);
    wr8(0x8053dfa8u, 0u);
    wr32(0x8053df74u, 0u);
    if (r31 != 0u) {
        wr16(0x817fdee8u, (u16)param_2);
        wr16(0x817fdeeau, (u16)param_3);
        a.r[0] = 0x817fdeecu;
        a.r[1] = param_1;
        a.r[2] = param_3;
        f1 = tc_callf(0x80004338u, &a);
        a.r[0] = 0x817fdee8u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r31, &a);
    }
    return;
}
