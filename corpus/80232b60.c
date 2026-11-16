#include "tc_rt.h"

u32 fn_80232b60(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf60u, 0u);
    r30 = rd32((u32)param_1 + 8u);
    r31 = rd32((u32)param_1 + 4u);
    a.r[0] = r31;
    a.r[1] = r30;
    a.r[2] = 0u;
    a.r[3] = 0x817fdf68u;
    r3 = tc_call(0x802de218u, &a);
    f1 = tc_lastf();
    if (r3 != 0u || rd32(0x817fdf68u) != 1u) {
        r3 = 0u;
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdf80u;
        a.r[1] = 0x80386c98u;
        a.r[2] = r31;
        a.r[3] = r30;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8025b994u, &a);
        a.r[0] = 0x817fdf80u;
        a.r[1] = 0x817fdf64u;
        a.r[2] = 0x817fdf60u;
        r3 = tc_call(0x80272e48u, &a);
        if (r3 != 0u || rd32(0x817fdf60u) <= 2u) {
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    }
    return r3;
}
