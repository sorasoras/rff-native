#include "tc_rt.h"

u32 fn_801cc684(s32 param_1, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    r3 = tc_call(0x801e7148u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
        wr32((u32)param_1 + 0x324u, r3);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0x28u;
        (void)tc_call(0x8000443cu, &a);
        wr32((u32)param_1 + 0x328u, 0xau);
        r6 = rd32((u32)param_1 + 0x150u);
        f0 = (f64)rdf32(0x80575ea0u);
        wr8(r6 - 0x7fb79ba4u, (u8)((u32)rd8(r6 - 0x7fb79ba4u) | 4u));
        r6 = rd32((u32)param_1 + 0x148u) | 0x80000000u;
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x16cu) + f0);
        r0 = rd32((u32)param_1 + 0x9cu) | 0x28000000u;
        wr32((u32)param_1 + 0x148u, r6);
        wr32((u32)param_1 + 0x9cu, r0);
        wr32((u32)param_1 + 0x298u, 0x80373c58u);
        wr32((u32)param_1 + 0x29cu, 2u);
        wrf32d((u32)param_1 + 0x16cu, f0);
        if ((u32)((s32)r6 >> 31) == 0u) {
            f0 = (f64)rdf32(0x80575ea4u);
            wr32((u32)param_1 + 0xccu, 1u);
            wrf32d((u32)param_1 + 0x250u, f0);
            wrf32d((u32)param_1 + 0xd0u, f0);
        } else {
            wr32((u32)param_1 + 0x258u, 0u);
        }
        f0 = (f64)rdf32(0x80575ea8u);
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x2000000u);
        r5 = rd32(0x8033caa4u);
        wr32((u32)param_1 + 0xd08u, rd32(0x8033caa0u));
        wr32((u32)param_1 + 0xd0cu, r5);
        wr32((u32)param_1 + 0xd10u, rd32(0x8033caa8u));
        wrf32d((u32)param_1 + 0xd14u, f0);
        wr32((u32)param_1 + 0xd18u, 0u);
        wr32((u32)param_1 + 0xcfcu, 0xbu);
        wr32((u32)param_1 + 0xd00u, 0xbu);
        wr32((u32)param_1 + 0xd04u, 0u);
        wr32((u32)param_1 + 0x1a4u, rd32(0x804863d8u));
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801cdcb8u, &a);
        wr32((u32)param_1 + 0xd2cu, 0x83u);
        wr32((u32)param_1 + 0xd44u, 0u);
        wr32((u32)param_1 + 0xd30u, 0u);
        wr32((u32)param_1 + 0xd34u, 0x9fu);
        wr32((u32)param_1 + 0xe30u, 0u);
        wr32((u32)param_1 + 0xd48u, 0u);
        wr32((u32)param_1 + 0xed4u, 0x46u);
        wr32((u32)param_1 + 0xed0u, 0x46u);
        wr32((u32)param_1 + 0xedcu, 0x64u);
        wr32((u32)param_1 + 0xed8u, 0x64u);
        wr32((u32)param_1 + 0xd38u, 0x82u);
        wr32((u32)param_1 + 0xd40u, 0x81u);
        wr32((u32)param_1 + 0xe38u, 0u);
        wr32((u32)param_1 + 0xe3cu, 0u);
        wr32((u32)param_1 + 0xe40u, 0u);
        wr32((u32)param_1 + 0xe44u, 0u);
        wr32((u32)param_1 + 0xe48u, 0u);
        wr32((u32)param_1 + 0xe4cu, 0u);
        wr32((u32)param_1 + 0xe50u, 0u);
        wr32((u32)param_1 + 0xe54u, 0u);
        wr32((u32)param_1 + 0xe58u, 0u);
        wr32((u32)param_1 + 0xe5cu, 0u);
        wr32((u32)param_1 + 0xe60u, 0u);
        wr32((u32)param_1 + 0xe64u, 0u);
        wr32((u32)param_1 + 0xe68u, 0u);
        wr32((u32)param_1 + 0xe6cu, 0u);
        wr32((u32)param_1 + 0xe70u, 0u);
        wr32((u32)param_1 + 0xe74u, 0u);
        wr32((u32)param_1 + 0xe78u, 0u);
        wr32((u32)param_1 + 0xe7cu, 0u);
        wr32((u32)param_1 + 0xe80u, 0u);
        wr32((u32)param_1 + 0xe84u, 0u);
        wr32((u32)param_1 + 0xeccu, 0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801cfb00u, &a);
        r3 = 1u;
        wr32((u32)param_1 + 0x1b8u, 1u);
    }
    return r3;
}
