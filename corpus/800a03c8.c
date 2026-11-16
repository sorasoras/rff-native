#include "tc_rt.h"

void fn_800a03c8(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_3;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = (u32)param_4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32((u32)param_2 + 8u), &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = (u32)param_3 + 4u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32((u32)param_2 + 8u), &a);
    if (r3 != 0u) {
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0x14u) + r3);
        while (r31 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = 0x817fdfd8u;
            a.r[3] = (u32)(s8)param_4;
            (void)tc_call(0x800a0458u, &a);
            r31 = r31 - 1u;
        }
    }
    return;
}
