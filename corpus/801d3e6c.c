#include "tc_rt.h"

u32 fn_801d3e6c(s32 param_1, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xcf8u, 0u);
    a.r[0] = (u32)param_1;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    r3 = tc_call(0x801e7148u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffdffffu);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80575fe0u;
        (void)tc_call(0x800a9924u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x803746e4u;
        (void)tc_call(0x800a992cu, &a);
        wr32((u32)param_1 + 0x2a8u, 5u);
        wr32((u32)param_1 + 0x2a4u, 0x80374680u);
        a.r[0] = (u32)param_1 + 0x27cu;
        a.r[1] = (u32)param_1;
        a.r[2] = 0x80374680u;
        a.r[3] = 5u;
        (void)tc_call(0x800a22ccu, &a);
        r3 = (rd32((u32)param_1 + 0x9cu) & 0xefffffffu) | 0x8000000u;
        c0eq = (u32)((s32)rd32((u32)param_1 + 0x148u) >> 31) == 0u;
        wrf32d((u32)param_1 + 0x16cu, (f64)(f32)((f64)rdf32((u32)param_1 + 0x16cu) + (f64)rdf32(0x80575fe8u)));
        wr32((u32)param_1 + 0x9cu, r3);
        if (c0eq) {
            f0 = (f64)rdf32(0x80575fecu);
            wr32((u32)param_1 + 0xccu, 1u);
            wrf32d((u32)param_1 + 0x250u, f0);
            wrf32d((u32)param_1 + 0xd0u, f0);
        } else {
            wr32((u32)param_1 + 0x258u, 0u);
        }
        r0 = rd32((u32)param_1 + 0x288u);
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x2000000u);
        c0lt = (s32)r0 > 0;
        r0 = rd32(0x8033be6cu);
        r7 = rd32(0x8033be70u);
        r6 = rd32(0x8033be74u);
        r5 = rd32(0x8033be78u);
        r4 = rd32(0x8033be7cu);
        if (c0lt) {
            r3 = rd32((u32)param_1 + 0x280u);
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, r0);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 1) {
            r3 = rd32((u32)param_1 + 0x280u) + 0xe4u;
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, r7);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 2) {
            r3 = rd32((u32)param_1 + 0x280u) + 0x1c8u;
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, r6);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 3) {
            r3 = rd32((u32)param_1 + 0x280u) + 0x2acu;
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, r5);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 4) {
            r3 = rd32((u32)param_1 + 0x280u) + 0x390u;
        } else {
            r3 = rd32((u32)param_1 + 0x280u);
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, r4);
        }
        a.r[0] = (u32)param_1 + 0x1fcu;
        a.r[1] = 1u;
        a.r[2] = 3u;
        (void)tc_call(0x80094a24u, &a);
        wr32((u32)param_1 + 0xd74u, 0xffffffffu);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d4884u, &a);
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        f1 = tc_callf(0x80056b64u, &a);
        wrf32d((rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e560u, (f64)rdf32(0x80575ff0u));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0xd94u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0xe14u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0xe8cu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0xf04u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0xf7cu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0x1214u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0x128cu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = (u32)param_1 + 0x1304u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x801d5160u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1 + 0xd80u;
        a.r[1] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x801d51d8u, &a);
        r3 = 1u;
        wr32((u32)param_1 + 0xcfcu, 0u);
        wr32((u32)param_1 + 0xd7cu, 0u);
    }
    return r3;
}
