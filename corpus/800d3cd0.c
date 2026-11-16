#include "tc_rt.h"

void fn_800d3cd0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x518u);
    do {
        if ((s32)r0 < 5 && (s32)r0 >= 3) {
            r6 = (u32)rd8(0x80570781u);
            r5 = (u32)rd8(0x80570782u);
            r0 = (u32)rd8(0x80570783u);
            wr8(param_2, rd8(0x80570780u));
            wr8(param_2 + 1u, (u8)r6);
            wr8(param_2 + 2u, (u8)r5);
            wr8(param_2 + 3u, (u8)r0);
            break;
        }
        r6 = (u32)rd8(0x80570785u);
        r5 = (u32)rd8(0x80570786u);
        r0 = (u32)rd8(0x80570787u);
        wr8(param_2, rd8(0x80570784u));
        wr8(param_2 + 1u, (u8)r6);
        wr8(param_2 + 2u, (u8)r5);
        wr8(param_2 + 3u, (u8)r0);
    } while (0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x8033891cu;
    r3 = tc_call(0x800d3b18u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        if ((u32)rd8(r3 + 0xau) != 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x805707a8u;
            a.r[1] = 0x3f6u;
            a.r[2] = 0x80355c34u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802e41c0u, &a);
        }
        r3 = rd32(r30 + 4u);
        r4 = r30 + r3;
        r3 = rd32(r30 + r3);
        wr8(param_2, (u8)r3);
        wr8(param_2 + 1u, (u8)rd32(r4 + 4u));
        wr8(param_2 + 2u, (u8)rd32(r4 + 8u));
        wr8(param_2 + 3u, 0xffu);
    }
    return;
}
