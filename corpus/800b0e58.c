#include "tc_rt.h"

void fn_800b0e58(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = rd32((u32)param_1 + 0x364u);
    r10 = rd32(0x80337c1cu);
    r9 = rd32(0x80337c20u);
    r8 = rd32(0x80337c24u);
    r7 = rd32(0x80337c28u);
    r6 = rd32(0x80337c2cu);
    r5 = rd32(0x80337c30u);
    r0 = rd32(0x80337c34u);
    r12 = rd32(rd32(r3) + 0x48u);
    wr32(0x817fdfd0u, r10);
    wr32(0x817fdfd4u, r9);
    wr32(0x817fdfd8u, r8);
    wr32(0x817fdfdcu, r7);
    wr32(0x817fdfe0u, r6);
    wr32(0x817fdfe4u, r5);
    wr32(0x817fdfe8u, r0);
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    if (r3 == 0u) {
        r4 = rd32((u32)param_1 + 0x1628u);
        r5 = ((u32)param_2 << 2u) & 0xfffffffcu;
        wr32((u32)param_1 + 0x1628u, r4 | (r4 ^ ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu)))));
        r29 = (u32)param_1 + r5;
        wr32(r29 + 0x1630u, 0u);
        if (rd32(r29 + 0x164cu) == 0u) {
            r4 = rd32(r5 - 0x7e802030u);
            if (r4 != 0xffffffffu) {
                a.f[0] = (f64)rdf32(0x80572c00u);
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.r[2] = 0xffffffffu;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800aeaf0u, &a);
                wr32(r29 + 0x164cu, r3);
                if (r3 != 0u) {
                    a.r[0] = 0x817fdfb8u;
                    a.r[1] = (u32)param_1;
                    (void)tc_call(0x800b0d04u, &a);
                    r3 = rd32(0x817fdfbcu);
                    r0 = rd32(0x817fdfc0u);
                    wr32(0x817fdfc4u, rd32(0x817fdfb8u));
                    wr32(0x817fdfc8u, r3);
                    wr32(0x817fdfccu, r0);
                    a.r[0] = rd32(r29 + 0x164cu);
                    a.r[1] = 0x817fdfc4u;
                    (void)tc_call(0x8015811cu, &a);
                }
            }
        }
        if ((u32)param_2 == 3u) {
            wr32((u32)param_1 + 0xed4u, 0u);
            a.r[0] = (u32)param_1;
            a.r[1] = 5u;
            (void)tc_call(0x800b31a0u, &a);
        }
    }
    return;
}
