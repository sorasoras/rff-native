#include "tc_rt.h"

void fn_802361ec(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571644u) == 3u) {
        r4 = rd32(0x80571650u);
        wr32(0x805715f0u, 0u);
        r4 = rd32(r4 + 0x24u);
        a.r[0] = 0x804e5c00u;
        a.r[1] = r4;
        r3 = tc_call(0x8023a600u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = r3;
            if (rd32(0x805715c0u) >= 5u) {
                wr32(0x805715c0u, 0u);
            }
            r0 = rd32(0x805715c0u);
            r3 = rd32(0x805715c0u) * 0x14u;
            wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x10u);
            r3 = r3 - 0x7fb1a180u;
            r0 = r0 * 0x14u;
            wr32(r3 + 0x20u, 0u);
            wr32(r0 - 0x7fb1a15cu, 0u);
            r3 = tc_call(0x802302b4u, &a);
            r5 = rd32(0x805715c0u) * 0x14u;
            wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
            wr32(r5 - 0x7fb1a154u, r3);
            a.r[0] = r29;
            f1 = tc_callf(0x8022c2d8u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = 0x80236e28u;
            (void)tc_call(0x8023bcf8u, &a);
        } else {
            a.r[0] = rd32(0x8057164cu);
            a.r[1] = 0x804e5c00u;
            a.r[2] = 0x20u;
            (void)tc_call(0x80004338u, &a);
            wr32(rd32(0x80571650u) + 0xcu, 1u);
            a.r[0] = 0x804e5b40u;
            a.r[1] = 0x20u;
            f1 = tc_callf(0x8022770cu, &a);
            wr32(0x805715d8u, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8023cdc0u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = r3;
            if (rd32(0x805715c0u) >= 5u) {
                wr32(0x805715c0u, 0u);
            }
            r0 = rd32(0x805715c0u);
            r3 = rd32(0x805715c0u) * 0x14u;
            wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x21u);
            r3 = r3 - 0x7fb1a180u;
            r0 = r0 * 0x14u;
            wr32(r3 + 0x20u, 0x10000u);
            wr32(r0 - 0x7fb1a15cu, 0x20u);
            r3 = tc_call(0x802302b4u, &a);
            r5 = rd32(0x805715c0u) * 0x14u;
            wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
            wr32(r5 - 0x7fb1a154u, r3);
            a.r[0] = r29;
            f1 = tc_callf(0x8022c2d8u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x804e5c20u;
            a.r[1] = 0x20u;
            a.r[2] = 0x10000u;
            a.r[3] = 0x80236524u;
            (void)tc_call(0x8023bb64u, &a);
        }
    } else {
        a.r[0] = 0x804e5c00u;
        a.r[1] = rd32(0x8057164cu);
        a.r[2] = 0x20u;
        r3 = tc_call(0x802592d8u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            wr32(0x805715d8u, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8023cdc0u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = r3;
            if (rd32(0x805715c0u) >= 5u) {
                wr32(0x805715c0u, 0u);
            }
            r0 = rd32(0x805715c0u);
            r3 = rd32(0x805715c0u) * 0x14u;
            wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x21u);
            r3 = r3 - 0x7fb1a180u;
            r0 = r0 * 0x14u;
            wr32(r3 + 0x20u, 0x10000u);
            wr32(r0 - 0x7fb1a15cu, 0x20u);
            r3 = tc_call(0x802302b4u, &a);
            r5 = rd32(0x805715c0u) * 0x14u;
            wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
            wr32(r5 - 0x7fb1a154u, r3);
            a.r[0] = r29;
            f1 = tc_callf(0x8022c2d8u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x804e5c20u;
            a.r[1] = 0x20u;
            a.r[2] = 0x10000u;
            a.r[3] = 0x80236524u;
            (void)tc_call(0x8023bb64u, &a);
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = r3;
            if (rd32(0x805715c0u) >= 5u) {
                wr32(0x805715c0u, 0u);
            }
            r0 = rd32(0x805715c0u);
            r3 = rd32(0x805715c0u) * 0x14u;
            wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x10u);
            r3 = r3 - 0x7fb1a180u;
            r0 = r0 * 0x14u;
            wr32(r3 + 0x20u, 0u);
            wr32(r0 - 0x7fb1a15cu, 0u);
            r3 = tc_call(0x802302b4u, &a);
            r5 = rd32(0x805715c0u) * 0x14u;
            wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
            wr32(r5 - 0x7fb1a154u, r3);
            a.r[0] = r29;
            f1 = tc_callf(0x8022c2d8u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = 0x80236e28u;
            (void)tc_call(0x8023bcf8u, &a);
        }
    }
    return;
}
