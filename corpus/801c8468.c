#include "tc_rt.h"

s32 fn_801c8468(s32 param_1, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = (u32)param_1;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    r3 = tc_call(0x801e7148u, &a);
    r31 = r3;
    if (r3 != 0u) {
        f3 = (f64)rdf32(0x80575de4u);
        f2 = (f64)rdf32(0x80575de8u);
        f1 = (f64)rdf32(0x80575decu);
        f0 = (f64)rdf32(0x80575de0u);
        wr32(0x817fdfe0u, 0u);
        wr8(0x817fdfe4u, 0u);
        wr8(0x817fdfe5u, 0u);
        wrf32d(0x817fdfc4u, f3);
        wrf32d(0x817fdfc8u, f2);
        wrf32d(0x817fdfccu, f1);
        wrf32d(0x817fdfd0u, f3);
        wrf32d(0x817fdfd4u, f2);
        wrf32d(0x817fdfd8u, f1);
        wrf32d(0x817fdfdcu, f0);
        r3 = tc_call(0x800545e4u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1e00u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r28 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x1e00u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x1e00u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r28 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            f1 = tc_callf(0x801c878cu, &a);
        }
        if (r28 != 0u) {
            a.r[0] = r28;
            a.r[1] = rd32((u32)param_1 + 0x150u);
            a.r[2] = 0x9au;
            a.r[3] = 0u;
            a.r[4] = 0x817fdfd0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r28) + 0xc4u), &a);
            if (r3 != 0u) {
                a.r[0] = 0x8046ad74u;
                a.r[1] = r28;
                (void)tc_call(0x8007b03cu, &a);
                wr32(r28 + 0x15cu, rd32(0x8046ad78u));
                wr32(r28 + 0x148u, rd32(r28 + 0x148u) | 0x400000u);
                wr32(r28 + 0x9cu, rd32(r28 + 0x9cu) | 0x4000000u);
                wr32(r28 + 0x1b0u, 1u);
                r4 = rd32(r28 + 0x150u);
                wr8(r4 - 0x7fb79ba4u, (u8)((u32)rd8(r4 - 0x7fb79ba4u) | 4u));
                wr32(r28 + 0x148u, rd32(r28 + 0x148u) | 0x80000000u);
            }
        }
        c0eq = (u32)((s32)rd32((u32)param_1 + 0x148u) >> 31) == 0u;
        r3 = rd32((u32)param_1 + 0x9cu);
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x16cu) + (f64)rdf32(0x80575df0u));
        wr32((u32)param_1 + 0x1b0u, 1u);
        wr32((u32)param_1 + 0x9cu, r3 | 0x24000000u);
        wrf32d((u32)param_1 + 0x16cu, f0);
        if (c0eq) {
            f0 = (f64)rdf32(0x80575df4u);
            wr32((u32)param_1 + 0xccu, 1u);
            wrf32d((u32)param_1 + 0x250u, f0);
            wrf32d((u32)param_1 + 0xd0u, f0);
        } else {
            wr32((u32)param_1 + 0x258u, 0u);
        }
        f2 = (f64)rdf32(0x80575df8u);
        f1 = (f64)rdf32(0x80575de0u);
        f0 = (f64)rdf32(0x80575dfcu);
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x2000000u);
        wrf32d(0x817fdfb8u, f2);
        wrf32d(0x817fdfbcu, f1);
        wrf32d(0x817fdfc0u, f0);
        wrf32d((u32)param_1 + 0x84u, f2);
        wrf32d((u32)param_1 + 0x88u, f1);
        wrf32d((u32)param_1 + 0x8cu, f0);
        wrf32d((u32)param_1 + 4u, f2);
        wrf32d((u32)param_1 + 8u, f1);
        wrf32d((u32)param_1 + 0xcu, f0);
    }
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010a6e0u, &a);
    return (s32)r31;
}
