#include "tc_rt.h"

u32 fn_8022e578(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)param_1 != 0u) {
        if (param_2 == 0u) {
            r3 = (u32)rd8(0x804e0213u);
            if ((r3 & 3u) > 2u) {
                wr8(0x804e0213u, (u8)(r3 & 0xfcu));
            }
            r7 = 0x804e020cu;
            wr16(0x804e0202u, 0u);
            wr16(0x804e0200u, 0u);
            ctr = 1u;
            do {
                r5 = (u32)rd16(0x804e0202u);
                r0 = (u32)rd16(0x804e0200u) + (u32)rd16(r7);
                wr16(0x804e0200u, (u16)r0);
                r6 = r0 & 0xffffu;
                r0 = (u32)rd16(r7);
                r0 = ~(r0 | r0);
                r0 = r5 + r0;
                wr16(0x804e0202u, (u16)r0);
                r5 = r0 & 0xffffu;
                r0 = r6 + (u32)rd16(r7 + 2u);
                wr16(0x804e0200u, (u16)r0);
                r6 = r0 & 0xffffu;
                r0 = (u32)rd16(r7 + 2u);
                r0 = ~(r0 | r0);
                r0 = r5 + r0;
                wr16(0x804e0202u, (u16)r0);
                r5 = r0 & 0xffffu;
                r0 = r6 + (u32)rd16(r7 + 4u);
                wr16(0x804e0200u, (u16)r0);
                r6 = r0 & 0xffffu;
                r0 = (u32)rd16(r7 + 4u);
                r0 = ~(r0 | r0);
                r0 = r5 + r0;
                wr16(0x804e0202u, (u16)r0);
                r5 = r0 & 0xffffu;
                wr16(0x804e0200u, (u16)(r6 + (u32)rd16(r7 + 6u)));
                r0 = (u32)rd16(r7 + 6u);
                r7 = r7 + 8u;
                r0 = ~(r0 | r0);
                r0 = r5 + r0;
                wr16(0x804e0202u, (u16)r0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        if (param_2 < rd32(0x804e0240u)) {
            wr32(0x804e0240u, param_2);
        }
        if (rd32(0x804e0240u) <= 0x14u) {
            r3 = (u32)rd16(0x804e023cu);
            if ((r3 & 0x7c00u) == 0x5000u || (r3 & 0xc0u) == 0xc0u) {
                wr16(0x804e023cu, 0u);
            }
        }
        r31 = rd32(0x804e0240u);
        r29 = 0x40u - r31;
        r30 = r31 - 0x7fb1fe00u;
        a.r[0] = 0u;
        a.r[1] = 1u;
        a.r[2] = 0x8022e240u;
        r3 = tc_call(0x802641b0u, &a);
        if (r3 == 0u) {
            r0 = 0u;
        } else {
            a.r[0] = 0u;
            a.r[1] = 1u;
            a.r[2] = 3u;
            r3 = tc_call(0x80263a1cu, &a);
            if (r3 == 0u) {
                a.r[0] = 0u;
                (void)tc_call(0x802642acu, &a);
                r0 = 0u;
            } else {
                wr32(0x817fdfe8u, (((r31 << 6u) & 0xffffffc0u) + 0x100u) | 0xa0000000u);
                a.r[0] = 0u;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = 4u;
                a.r[3] = 1u;
                a.r[4] = 0u;
                r3 = tc_call(0x80262fb4u, &a);
                r31 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                a.r[0] = 0u;
                r3 = tc_call(0x802633ccu, &a);
                r5 = r29;
                r29 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
                a.r[0] = 0u;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = 1u;
                r3 = tc_call(0x80263230u, &a);
                r29 = r29 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
                a.r[0] = 0u;
                r3 = tc_call(0x80263b4cu, &a);
                r29 = r29 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
                a.r[0] = 0u;
                (void)tc_call(0x802642acu, &a);
                r0 = (ppc_cntlzw(r29) >> 5u) & 0x7ffffffu;
            }
        }
        wr32(0x804e024cu, r0);
        if (r0 != 0u) {
            wr32(0x804e0240u, 0x40u);
        }
    }
    wr32(0x804e0248u, 0u);
    a.r[0] = rd32(0x804e0244u);
    (void)tc_call(0x8022c2d8u, &a);
    return rd32(0x804e024cu);
}
