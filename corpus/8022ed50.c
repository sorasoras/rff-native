#include "tc_rt.h"

void fn_8022ed50(void)
{
    u32 c0eq = 0, c1gt = 0, ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr16(0x804e0520u, 2u);
    wr16(0x804e0522u, 1u);
    wr32(0x804e052cu, 0x10u);
    wr32(0x804e0528u, 0x10u);
    wr32(0x804e0524u, 0u);
    wr32(0x804e0530u, 0xffffffffu);
    wr32(0x804e0548u, 0u);
    wr32(0x804e0544u, 0u);
    wr32(0x804e0540u, 0u);
    wr32(0x804e0550u, 0u);
    wr32(0x804e054cu, 0u);
    wr32(0x800000d8u, 0x804e0258u);
    a.r[0] = 0x804e0258u;
    (void)tc_call(0x80228148u, &a);
    a.r[0] = 0x804e0258u;
    f1 = tc_callf(0x80227f20u, &a);
    wr32(0x804e055cu, 0x80587d40u);
    wr32(0x804e0560u, 0x80577d40u);
    wr32(0x80577d40u, 0xdeadbabeu);
    a.r[0] = rd32(0x800000e4u);
    a.r[1] = 0x804e0258u;
    a.r[2] = 0x80577d40u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x80570a88u), &a);
    wr32(0x800000e4u, 0x804e0258u);
    r3 = tc_call(0x802280e0u, &a);
    r8 = rd32(rd32(0x800000e4u) + 0x308u) + 4u;
    c1gt = r8 > r3;
    if (r8 < r3) {
        r5 = r3 - r8;
        r6 = r3 - 0x20u;
        r4 = r5 + 3u;
        if ((s32)((u64)(u32)((s32)r4 >> 2) + (u64)(((s32)r4 < 0) && ((r4 & 3u) != 0u))) > 8) {
            r7 = 0u;
            if (!c1gt) {
                c0eq = (r5 & 0x80000000u) == 0u;
                r5 = 1u;
                if (c0eq && (r4 & 0x80000000u) != 0u) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r7 = 1u;
                }
            }
            if (r7 != 0u) {
                ctr = ((r6 + 0x1fu - r8) >> 5u) & 0x7ffffffu;
                if (r8 < r6) {
                    do {
                        wr32(r8, 0u);
                        wr32(r8 + 4u, 0u);
                        wr32(r8 + 8u, 0u);
                        wr32(r8 + 0xcu, 0u);
                        wr32(r8 + 0x10u, 0u);
                        wr32(r8 + 0x14u, 0u);
                        wr32(r8 + 0x18u, 0u);
                        wr32(r8 + 0x1cu, 0u);
                        r8 = r8 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        ctr = ((r3 + 3u - r8) >> 2u) & 0x3fffffffu;
        if (r8 < r3) {
            do {
                wr32(r8, 0u);
                r8 = r8 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(0x80571510u, 0u);
    r4 = 0x804e0570u;
    wr32(0x8057150cu, 0u);
    ctr = 2u;
    do {
        wr32(r4 + 4u, 0u);
        wr32(r4, 0u);
        wr32(r4 + 0xcu, 0u);
        wr32(r4 + 8u, 0u);
        wr32(r4 + 0x14u, 0u);
        wr32(r4 + 0x10u, 0u);
        wr32(r4 + 0x1cu, 0u);
        wr32(r4 + 0x18u, 0u);
        wr32(r4 + 0x24u, 0u);
        wr32(r4 + 0x20u, 0u);
        wr32(r4 + 0x2cu, 0u);
        wr32(r4 + 0x28u, 0u);
        wr32(r4 + 0x34u, 0u);
        wr32(r4 + 0x30u, 0u);
        wr32(r4 + 0x3cu, 0u);
        wr32(r4 + 0x38u, 0u);
        wr32(r4 + 0x44u, 0u);
        wr32(r4 + 0x40u, 0u);
        wr32(r4 + 0x4cu, 0u);
        wr32(r4 + 0x48u, 0u);
        wr32(r4 + 0x54u, 0u);
        wr32(r4 + 0x50u, 0u);
        wr32(r4 + 0x5cu, 0u);
        wr32(r4 + 0x58u, 0u);
        wr32(r4 + 0x64u, 0u);
        wr32(r4 + 0x60u, 0u);
        wr32(r4 + 0x6cu, 0u);
        wr32(r4 + 0x68u, 0u);
        wr32(r4 + 0x74u, 0u);
        wr32(r4 + 0x70u, 0u);
        wr32(r4 + 0x7cu, 0u);
        wr32(r4 + 0x78u, 0u);
        r4 = r4 + 0x80u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(0x800000e0u, 0u);
    wr32(0x800000dcu, 0u);
    wr32(0x800000dcu, 0x804e0258u);
    wr32(0x804e0558u, 0u);
    wr32(0x804e0554u, 0u);
    wr32(0x800000e0u, 0x804e0258u);
    a.r[0] = 0x804e0670u;
    (void)tc_call(0x80228148u, &a);
    wr32(0x80571508u, 0u);
    return;
}
