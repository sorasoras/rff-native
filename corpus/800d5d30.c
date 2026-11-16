#include "tc_rt.h"

u32 fn_800d5d30(s32 param_1, u32 param_2, u32 param_3, u32 param_r6, u32 param_r7, u32 param_r8)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x800d6cc0u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 0xb4u);
        wr32((u32)param_1 + 0x9cu, 0u);
        r3 = r3 | 0x20000000u;
        wr32((u32)param_1 + 0x98u, 3u);
        r3 = (r3 & 0xbfffffffu) | (((u32)((s32)((r3 << 2u) & 0xc0000000u) >> 31) << 0x1eu) & 0x40000000u);
        wr32((u32)param_1 + 0xa0u, 0u);
        wr32((u32)param_1 + 0x88u, 0u);
        r3 = (r3 & 0x7fffffffu) | (((u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) << 0x1fu) & 0x80000000u);
        wr32((u32)param_1 + 0xb4u, r3);
        wr32((u32)param_1 + 0x84u, 0u);
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x40u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            r31 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x40u;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x40u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
            r31 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x800d639cu, &a);
        }
        wr32((u32)param_1 + 0xa4u, r31);
        a.f[0] = (f64)rdf32(0x80573190u);
        a.r[0] = r31;
        a.r[1] = (u32)param_1;
        a.r[2] = param_3;
        r3 = tc_call(0x800d64d0u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = (u32)param_1 + 0x1cu;
            a.f[0] = (f64)rdf32(0x80573194u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343c8u, &a);
            r3 = 1u;
            wr32((u32)param_1 + 0xa8u, 0u);
        }
    }
    return r3;
}
