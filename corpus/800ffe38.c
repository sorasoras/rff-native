#include "tc_rt.h"

s32 fn_800ffe38(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r23 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x800ffef4u, &a);
    f1 = tc_lastf();
    r4 = rd32(r3 + 0x14u);
    r23 = r3;
    r31 = rd32(r4 + 4u);
    r30 = r4 + 4u;
    while (r31 != r30) {
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80360754u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80360730u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
        }
        r29 = rd32(r31 + 0xcu);
        r28 = r31 + 0xcu;
        while (r29 != r28) {
            if (r29 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80360724u;
                a.r[1] = 0x23du;
                a.r[2] = 0x80360700u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802e41c0u, &a);
                r3 = tc_lastr();
            }
            r3 = rd32(r29 + 8u);
            wr8(r3 + 0xbbu, (u8)((u32)rd8(r3 + 0xbbu) & 0xfeu));
            r29 = rd32(r29);
        }
        r31 = rd32(r31);
    }
    return (s32)r23;
}
