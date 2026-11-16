#include "tc_rt.h"

u32 fn_801a136c(s32 param_1, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 c0eq = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    r3 = tc_call(0x801e7148u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0x4fu;
        a.r[1] = 7u;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x800eb44cu, &a);
        a.r[0] = 0x51u;
        a.r[1] = 7u;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x800eb44cu, &a);
        a.r[0] = 0x804b9da0u;
        (void)tc_call(0x8010a6e0u, &a);
        wr32(0x80571338u, rd32(0x80571338u) + 1u);
        wr32((u32)param_1 + 0xcfcu, 0u);
        wr32((u32)param_1 + 0xd00u, 0u);
        wr32((u32)param_1 + 0xd04u, 0u);
        wr32((u32)param_1 + 0xd08u, 0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x8033aff0u;
        (void)tc_call(0x800a991cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x805708e8u;
        (void)tc_call(0x800a9924u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x803710d8u;
        (void)tc_call(0x800a992cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80371168u;
        (void)tc_call(0x800a9934u, &a);
        r3 = rd32((u32)param_1 + 0x9cu);
        wr32((u32)param_1 + 0x2a4u, 0x80370fe8u);
        r3 = r3 & 0xefffffffu;
        wr32((u32)param_1 + 0x9cu, r3);
        wr32((u32)param_1 + 0x2a8u, 4u);
        a.r[0] = (u32)param_1 + 0x27cu;
        a.r[1] = (u32)param_1;
        a.r[2] = 0x80370fe8u;
        a.r[3] = 4u;
        (void)tc_call(0x800a22ccu, &a);
        if ((s32)rd32((u32)param_1 + 0x288u) > 0) {
            r3 = rd32((u32)param_1 + 0x280u);
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, 0x208fu);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 1) {
            r3 = rd32((u32)param_1 + 0x280u) + 0xe4u;
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, 0x208fu);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 2) {
            r3 = rd32((u32)param_1 + 0x280u) + 0x1c8u;
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, 0x208fu);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 3) {
            r3 = rd32((u32)param_1 + 0x280u) + 0x2acu;
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, 0x208fu);
        }
        a.r[0] = (u32)param_1 + 0x1fcu;
        a.r[1] = 0x14u;
        a.r[2] = 0x32u;
        (void)tc_call(0x80094a24u, &a);
        wr32((u32)param_1 + 0x298u, 0x80371038u);
        wr32((u32)param_1 + 0x29cu, 8u);
        wr32((u32)param_1 + 0xdf8u, 0u);
        wr32((u32)param_1 + 0xdc0u, 0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801a254cu, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801a272cu, &a);
        if (r3 != 1u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801a272cu, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r3;
            (void)tc_call(0x801a2698u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801a2a44u, &a);
        f0 = (f64)rdf32(0x80575868u);
        r3 = rd32((u32)param_1 + 0x9cu) & 0xfdffffffu;
        r0 = rd32((u32)param_1 + 0x148u);
        wr32((u32)param_1 + 0x9cu, r3);
        r3 = r3 | 0x8000000u;
        r0 = (u32)((s32)r0 >> 31);
        c0eq = r0 == 0u;
        f1 = (f64)rdf32((u32)param_1 + 0x16cu);
        wrf32d((u32)param_1 + 0xde0u, f0);
        f0 = (f64)(f32)(f1 + (f64)rdf32(0x8057587cu));
        r0 = rd32(0x8033caa4u);
        wr32((u32)param_1 + 0xdc4u, rd32(0x8033caa0u));
        wr32((u32)param_1 + 0xdc8u, r0);
        wr32((u32)param_1 + 0xdccu, rd32(0x8033caa8u));
        wr32((u32)param_1 + 0xee0u, 0u);
        wr32((u32)param_1 + 0xf60u, 0u);
        wr32((u32)param_1 + 0x9cu, r3);
        wrf32d((u32)param_1 + 0x16cu, f0);
        if (c0eq) {
            f0 = (f64)rdf32(0x80575880u);
            wr32((u32)param_1 + 0xccu, 1u);
            wrf32d((u32)param_1 + 0x250u, f0);
            wrf32d((u32)param_1 + 0xd0u, f0);
        } else {
            wr32((u32)param_1 + 0x258u, 0u);
        }
        r3 = 1u;
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x2000000u);
    }
    return r3;
}
