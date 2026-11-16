#include "tc_rt.h"

u32 fn_801d76cc(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_r7)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    f9 = (f64)rdf32(0x80576090u);
    f10 = (f64)rdf32(0x80576094u);
    f8 = (f64)rdf32(0x80576098u);
    r8 = (u32)param_1 + 0x30u;
    f7 = (f64)rdf32(0x8057609cu);
    f6 = (f64)rdf32(0x805760a0u);
    f2 = (f64)rdf32(0x805760b0u);
    f5 = (f64)rdf32(0x805760a4u);
    f4 = (f64)rdf32(0x805760a8u);
    f3 = (f64)rdf32(0x805760acu);
    f1 = (f64)rdf32(0x805760b4u);
    wr8((u32)param_1 + 0xd10u, 4u);
    wrf32d((u32)param_1 + 0xd14u, f10);
    wrf32d((u32)param_1 + 0xd18u, f9);
    wrf32d((u32)param_1 + 0xd1cu, f8);
    wrf32d((u32)param_1 + 0xd20u, f7);
    wrf32d((u32)param_1 + 0xd24u, f9);
    wrf32d((u32)param_1 + 0xd28u, f8);
    wrf32d((u32)param_1 + 0xd2cu, f7);
    wrf32d((u32)param_1 + 0xd30u, f9);
    wrf32d((u32)param_1 + 0xd34u, f6);
    wrf32d((u32)param_1 + 0xd38u, f10);
    wrf32d((u32)param_1 + 0xd3cu, f9);
    wrf32d((u32)param_1 + 0xd40u, f6);
    wrf32d((u32)param_1 + 0xd44u, f5);
    wrf32d((u32)param_1 + 0xd48u, f9);
    wrf32d((u32)param_1 + 0xd4cu, f4);
    wrf32d((u32)param_1 + 0xd50u, f3);
    wrf32d((u32)param_1 + 0xd54u, f9);
    wrf32d((u32)param_1 + 0xd58u, f2);
    wrf32d((u32)param_1 + 0xd5cu, f1);
    wrf32d((u32)param_1 + 0xd60u, f9);
    wrf32d((u32)param_1 + 0xd64u, f2);
    wrf32d(param_4, (f64)rdf32(r8 + 0xd14u));
    wrf32d(param_4 + 4u, (f64)rdf32(r8 + 0xd18u));
    wrf32d(param_4 + 8u, (f64)rdf32(r8 + 0xd1cu));
    a.r[0] = (u32)param_1;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_r7;
    r3 = tc_call(0x801e7148u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(0x805713a8u, rd32(0x805713a8u) + 1u);
        wr32((u32)param_1 + 0xd00u, 0u);
        wr32((u32)param_1 + 0xd04u, 0u);
        wr32((u32)param_1 + 0xd08u, 0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x8033c004u;
        (void)tc_call(0x800a991cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80576088u;
        (void)tc_call(0x800a9924u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80374f38u;
        (void)tc_call(0x800a992cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x8033c028u;
        (void)tc_call(0x800a9934u, &a);
        r3 = rd32((u32)param_1 + 0x9cu);
        wr32((u32)param_1 + 0x2a4u, 0x80374b60u);
        r3 = r3 & 0xefffffffu;
        wr32((u32)param_1 + 0x9cu, r3);
        wr32((u32)param_1 + 0x2a8u, 0x23u);
        a.r[0] = (u32)param_1 + 0x27cu;
        a.r[1] = (u32)param_1;
        a.r[2] = 0x80374b60u;
        a.r[3] = 0x23u;
        (void)tc_call(0x800a22ccu, &a);
        r6 = 0u;
        r5 = 0u;
        ctr = 7u;
        do {
            if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
                r4 = rd32((u32)param_1 + 0x280u) + r5;
            } else {
                r4 = rd32((u32)param_1 + 0x280u);
            }
            if (r4 != 0u) {
                wr32(r4 + 0x30u, 0x208fu);
            }
            r6 = r6 + 1u;
            r5 = r5 + 0xe4u;
            if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
                r4 = rd32((u32)param_1 + 0x280u) + r5;
            } else {
                r4 = rd32((u32)param_1 + 0x280u);
            }
            if (r4 != 0u) {
                wr32(r4 + 0x30u, 0x208fu);
            }
            r6 = r6 + 1u;
            r5 = r5 + 0xe4u;
            if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
                r4 = rd32((u32)param_1 + 0x280u) + r5;
            } else {
                r4 = rd32((u32)param_1 + 0x280u);
            }
            if (r4 != 0u) {
                wr32(r4 + 0x30u, 0x208fu);
            }
            r6 = r6 + 1u;
            r5 = r5 + 0xe4u;
            if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
                r4 = rd32((u32)param_1 + 0x280u) + r5;
            } else {
                r4 = rd32((u32)param_1 + 0x280u);
            }
            if (r4 != 0u) {
                wr32(r4 + 0x30u, 0x208fu);
            }
            r6 = r6 + 1u;
            r5 = r5 + 0xe4u;
            if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
                r4 = rd32((u32)param_1 + 0x280u) + r5;
            } else {
                r4 = rd32((u32)param_1 + 0x280u);
            }
            if (r4 != 0u) {
                wr32(r4 + 0x30u, 0x208fu);
            }
            r5 = r5 + 0xe4u;
            r6 = r6 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        a.r[0] = (u32)param_1 + 0x1fcu;
        a.r[1] = 0x14u;
        a.r[2] = 0x32u;
        (void)tc_call(0x80094a24u, &a);
        r0 = rd32((u32)param_1 + 0x9cu) | 0x2400000u;
        wr32((u32)param_1 + 0x298u, 0x80374e20u);
        r5 = rd32((u32)param_1 + 0x150u);
        wr32((u32)param_1 + 0x29cu, 0xeu);
        wr32((u32)param_1 + 0x9cu, r0);
        wr8(r5 - 0x7fb79ba4u, (u8)((u32)rd8(r5 - 0x7fb79ba4u) | 4u));
        r0 = ((rd32((u32)param_1 + 0x9cu) | 0x1200000u) & 0xfbffffffu) | 0x8000000u;
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x80000000u);
        wr32((u32)param_1 + 0x9cu, r0);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d9704u, &a);
        wr32((u32)param_1 + 0xd68u, 0u);
        wr32((u32)param_1 + 0xd6cu, 0u);
        wr32((u32)param_1 + 0xd70u, 0u);
        wr32((u32)param_1 + 0xd78u, 0u);
        wr32((u32)param_1 + 0xd7cu, 0u);
        wr32((u32)param_1 + 0xd80u, 0u);
        wr32((u32)param_1 + 0xd84u, 0u);
        wr32((u32)param_1 + 0xd88u, 0u);
        wr32((u32)param_1 + 0xd8cu, 0u);
        wr32((u32)param_1 + 0xd90u, 0u);
        wr32((u32)param_1 + 0xd94u, 0u);
        wr32((u32)param_1 + 0xd98u, 0u);
        wr32((u32)param_1 + 0xd9cu, 0u);
        wr32((u32)param_1 + 0xda0u, 0u);
        wr32((u32)param_1 + 0xda8u, 0u);
        wr32((u32)param_1 + 0xd74u, 0u);
        wr32((u32)param_1 + 0xda4u, 0u);
        wr32((u32)param_1 + 0xdacu, 0xffffffffu);
        wr32((u32)param_1 + 0xdf4u, 0u);
        wr32((u32)param_1 + 0xd0cu, 0u);
        wr32((u32)param_1 + 0xcfcu, 0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801d9978u, &a);
        a.r[0] = 8u;
        a.r[1] = 7u;
        a.r[2] = 0u;
        (void)tc_call(0x800eb44cu, &a);
        a.r[0] = 0x804b9da0u;
        (void)tc_call(0x8010a6e0u, &a);
        r3 = 1u;
        wr32((u32)param_1 + 0x1b8u, 1u);
    }
    return r3;
}
