#include "tc_rt.h"

void fn_801b6860(u32 param_1)
{
    u32 r3 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = rd32(param_1 + 0x34u);
    r3 = tc_call(0x800f93bcu, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x2cu, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fed0cu, &a);
    a.r[0] = param_1 + 0x48u;
    a.r[1] = rd32(param_1 + 0x2cu);
    a.r[2] = (u32)ppc_divw((s32)rd32(param_1 + 0xcu), (s32)rd32(param_1 + 4u)) - rd32(param_1 + 8u) + 1u;
    (void)tc_call(0x801906f8u, &a);
    wr32(rd32(0x80571398u) + 0x194u, 0u);
    wr32(rd32(0x80571398u) + 0x198u, 0u);
    a.r[0] = param_1 + 0x3cu;
    a.r[1] = rd32(param_1 + 0x2cu);
    a.r[2] = 0x80571250u;
    f1 = tc_callf(0x80163f48u, &a);
    r29 = 0u;
    if ((s32)rd32(param_1) > 0) {
        while ((s32)r29 < (s32)rd32(param_1)) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x8033b750u;
            a.r[2] = 0x8033b746u;
            a.r[3] = r29;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8025b994u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80571250u;
            a.r[1] = rd32(param_1 + 0x2cu);
            a.r[2] = 0x817fdfd8u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801032a0u, &a);
            a.r[0] = param_1;
            a.r[1] = r29;
            a.r[2] = r3;
            f1 = tc_callf(0x801894c8u, &a);
            r29 = r29 + 1u;
        }
    }
    wr32(param_1 + 0x38u, 1u);
    return;
}
