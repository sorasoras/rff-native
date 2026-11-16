#include "tc_rt.h"

void fn_800309e0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32((u32)param_2 + 0x2cu);
    a.f[1] = (f64)rdf32((u32)param_2 + 0x30u);
    a.f[2] = (f64)rdf32((u32)param_2 + 0x34u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80233c84u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2 + 0x3cu;
    (void)tc_call(0x80042250u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2 + 0x4cu;
    (void)tc_call(0x80042190u, &a);
    wr32((u32)param_1 + 0x50u, (u32)param_1);
    wr32((u32)param_1 + 0x64u, 0u);
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x48u, 0u);
    wr32((u32)param_1 + 0x4cu, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    wr32((u32)param_1 + 0x44u, 0u);
    r0 = (u32)rd16((u32)param_2 + 0x5cu);
    wr16((u32)param_1 + 0x34u, (u16)r0);
    r0 = r0 | 0x2000u;
    wr8((u32)param_1 + 0x36u, 0u);
    wr8((u32)param_1 + 0x37u, rd8((u32)param_2 + 0x60u));
    wr32((u32)param_1 + 0x3cu, (u32)param_2);
    wr32((u32)param_1 + 0x54u, (u32)param_2 + 0x14u);
    wr16((u32)param_1 + 0x34u, (u16)r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8007b13cu, &a);
    wr32((u32)param_1 + 0x60u, 0u);
    if ((u32)param_3 != 0u) {
        a.r[0] = (u32)param_3;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x80038e04u, &a);
        wr32((u32)param_1 + 0x38u, r3);
    }
    r3 = rd32((u32)param_1 + 0x38u);
    if (r3 != 0u) {
        r4 = rd32(r3 + 0x1cu);
        if (r4 != 0u) {
            r0 = (u32)rd16((u32)param_1 + 0x34u);
            wr32((u32)param_1 + 0x54u, r4);
            r3 = r0 | 0x1000u;
            wr16((u32)param_1 + 0x34u, (u16)r3);
            if (rd32(r4 + 0x20u) != 0u) {
                wr16((u32)param_1 + 0x34u, (u16)(r3 | 0x100u));
            }
        }
    }
    return;
}
