#include "tc_rt.h"

void fn_802643ac(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r23 = 0, r24 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = ((param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    if (param_1 == 0u && param_2 == 2u) {
        r0 = rd32(0x805719e8u);
        if (r0 != 0u) {
            wr32(param_3, r0);
            return;
        }
    }
    if ((s32)param_1 < 2 && param_2 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x802636ccu, &a);
        if (r3 == 0u) {
            return;
        }
        r31 = ((param_1 << 2u) & 0xfffffffcu) - 0x80000000u;
        if (rd32(r29 + 0x20u) == rd32(r31 + 0x30c0u)) {
            wr32(param_3, rd32(r29 + 0x1cu));
            return;
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = r3;
        if ((rd32(r29 + 0xcu) & 8u) != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            r0 = 0u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x802636ccu, &a);
            if (r3 != 0u) {
                r3 = (param_1 * 0x14u) - 0x33000000u;
                wr32(r3 + 0x6800u, (rd32(r3 + 0x6800u) & 0x7f5u) | 2u);
                wr32(r29 + 8u, 0u);
                r0 = ((param_1 << 2u) & 0xfffffffcu) - param_1;
                a.r[0] = ((r0 & 0x20u) != 0u) ? 0u : (0x100000u >> (r0 & 0x1fu));
                (void)tc_call(0x8022c6c0u, &a);
                wr32(r29 + 0xcu, rd32(r29 + 0xcu) | 8u);
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                r0 = 1u;
            } else {
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                r0 = 0u;
            }
        }
        if (r0 == 0u) {
            return;
        }
        r31 = rd32(r31 + 0x30c0u);
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = r3;
    r5 = 0u;
    if ((s32)param_1 < 2 && param_2 == 0u) {
        r5 = 1u;
    }
    r5 = (u32)((s32)((0u - r5) | r5) >> 31) & 0x80264384u;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r5;
    r3 = tc_call(0x802641b0u, &a);
    r30 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    if (r30 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        r3 = tc_call(0x80263a1cu, &a);
        r30 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
        if (r30 == 0u) {
            wr32(0x817fdfc8u, 0u);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 2u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            r3 = tc_call(0x802633ccu, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = 4u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            r3 = tc_call(0x802633ccu, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = param_1;
            r3 = tc_call(0x80263b4cu, &a);
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r23 = r3;
        if ((rd32(r29 + 0xcu) & 0x10u) != 0u) {
            wr32(r29 + 0xcu, rd32(r29 + 0xcu) & 0xffffffefu);
            a.r[0] = param_1;
            a.r[1] = r29;
            f1 = tc_callf(0x80262ec4u, &a);
            r3 = rd32(r29 + 0x24u);
            if ((s32)r3 > 0) {
                r24 = rd32(r29 + 0x2cu);
                r0 = r3 - 1u;
                wr32(r29 + 0x24u, r0);
                if ((s32)r0 > 0) {
                    a.r[0] = r29 + 0x28u;
                    a.r[1] = r29 + 0x30u;
                    a.r[2] = (rd32(r29 + 0x24u) << 3u) & 0xfffffff8u;
                    f1 = tc_callf(0x802591b4u, &a);
                }
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(r24, &a);
            }
            a.r[0] = r23;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
    }
    a.r[0] = r28;
    (void)tc_call(0x8022c2d8u, &a);
    if ((s32)param_1 < 2 && param_2 == 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r23 = r3;
        if ((rd32(r29 + 0xcu) & 8u) != 0u) {
            if ((rd32(r29 + 0xcu) & 0x10u) == 0u || rd32(r29 + 0x18u) != 0u) {
                wr32(r29 + 0xcu, rd32(r29 + 0xcu) & 0xfffffff7u);
                r0 = ((param_1 << 2u) & 0xfffffffcu) - param_1;
                a.r[0] = ((r0 & 0x20u) != 0u) ? 0u : (0x500000u >> (r0 & 0x1fu));
                (void)tc_call(0x8022c640u, &a);
                a.r[0] = r23;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r0 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fffcf40u);
        r4 = r0 - r31;
        r0 = r31 - r0;
        r0 = r4 | r0;
        r0 = (r0 >> 0x1fu) & 1u;
        r30 = r30 | r0;
        if (r30 == 0u) {
            wr32(r29 + 0x1cu, rd32(param_3));
            wr32(r29 + 0x20u, r31);
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
