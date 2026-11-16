#include "tc_rt.h"

void fn_800ac144(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x5cu) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x800abf44u, &a);
        a.r[0] = 1u;
        (void)tc_call(0x80179f00u, &a);
        wr32(0x80571188u, rd32(0x80571188u) & 0xffffff7fu);
        r3 = tc_call(0x800a7854u, &a);
        if (r3 != 0u) {
            r4 = rd32(0x80571140u);
            if (r4 != 0u && rd32(r3 + 0xe0u) == r4) {
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x4000000u);
            } else {
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xfbffffffu);
            }
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800ac658u, &a);
        r3 = tc_call(0x80097da4u, &a);
        f1 = tc_lastf();
        r3 = rd32(r3 + 0xcu);
        a.r[0] = r3;
        a.r[1] = 0x35u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 8u), &a);
        r0 = rd32(0x805710e0u);
        if (r0 != 0u) {
            wr32(0x805710e4u, r0);
        }
        wr32(0x805710e0u, 0u);
        a.r[0] = 0x804b9e14u;
        a.r[1] = 1u;
        (void)tc_call(0x8011ea94u, &a);
        wr32(0x8057118cu, rd32(0x8057118cu) | 0x210u);
        a.r[0] = 0u;
        (void)tc_call(0x80077b70u, &a);
        r0 = rd32(0x8057118cu);
        r3 = r0 & 0xfffff7ffu;
        if (rd32((u32)param_1 + 0x60u) != 0u) {
            r3 = r0 | 0x800u;
        }
        wr32(0x8057118cu, r3 | 0x80u);
        a.r[0] = 0u;
        (void)tc_call(0x80224f10u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800abeecu, &a);
        wr32((u32)param_1 + 0xcu, 3u);
        wr32((u32)param_1 + 0x5cu, 0u);
    }
    return;
}
