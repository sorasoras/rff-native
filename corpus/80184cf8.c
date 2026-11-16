#include "tc_rt.h"

s32 fn_80184cf8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 1u;
    r31 = 4u;
    do {
        r3 = rd32(rd32((u32)param_1 + 0x2cu) + r31);
        a.r[0] = r3;
        a.r[1] = (u32)rd16((u32)param_2 + 0xbcu);
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3 + 0xccu) + 0x10u), &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r30 = rd32(rd32((u32)param_1 + 0x2cu) + ((r29 << 2u) & 0xfffffffcu));
            break;
        }
        r29 = r29 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 6);
    if (r30 == 0u) {
        r3 = rd32(rd32((u32)param_1 + 0x2cu));
        a.r[0] = r3;
        a.r[1] = (u32)rd16((u32)param_2 + 0xbcu);
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3 + 0xccu) + 0x10u), &a);
        if (r3 != 0u) {
            r30 = rd32(rd32((u32)param_1 + 0x2cu));
        }
    }
    return (s32)r30;
}
