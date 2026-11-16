#include "tc_rt.h"

void fn_802199f8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r12 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r30 = rd32((u32)param_1 + 0x34u);
    r3 = tc_call(0x80218620u, &a);
    if (r3 == r30) {
        r6 = rd32((u32)param_1 + 0x3cu);
        r0 = rd32(0x80471a18u);
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0x38u));
        r0 = r0 * 0x4150u;
        wr32(0x817fdfdcu, r6);
        f1 = (f64)rdf32(0x817fdfd8u);
        wr32(0x817fdfe0u, rd32((u32)param_1 + 0x40u));
        a.f[0] = f1;
        a.f[1] = (f64)rdf32(0x817fdfe0u);
        a.r[0] = r0 - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        f0 = (f64)rdf32(0x805769d4u);
        wrf32d(0x817fdfdcu, f1);
        if (f1 < f0) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0u;
            (void)tc_call(0x802187c4u, &a);
            a.r[0] = rd32((u32)param_1 + 0x68u);
            r3 = tc_call(0x800a4500u, &a);
            r29 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x8000000u);
                r30 = rd32((u32)param_1 + 0x44u);
                if (r30 != 0xffffffffu) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x80218684u, &a);
                    r3 = rd32(r3 + 0x3e0u);
                    r0 = (r30 << 4u) & 0xfffffff0u;
                    r30 = 0xd7u;
                    r3 = r3 + r0;
                    r0 = rd32(r3 + 0xcu);
                    if (r0 != 0xffffffffu) {
                        r30 = r0;
                    }
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x8021866cu, &a);
                    r3 = rd32(r3 + 0xcu);
                    a.r[0] = r3;
                    a.r[1] = rd32((u32)param_1 + 0x68u);
                    a.r[2] = r30;
                    r3 = tc_call(0x800ed39cu, &a);
                    a.r[0] = r29;
                    a.r[1] = (u32)(s8)r3;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x805769d0u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(r29) + 0x54u), &a);
                }
                r4 = rd32((u32)param_1 + 0x48u);
                wr32(0x817fdfe8u, 0x43300000u);
                r12 = rd32(r29);
                wr32(0x817fdfecu, r4 ^ 0x80000000u);
                f2 = rdf64(0x80576a00u);
                r12 = rd32(r12 + 0x24u);
                a.r[0] = r29;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = (f64)(f32)((f64)rdf32(0x805769f8u) * (f64)(f32)(rdf64(0x817fdfe8u) - f2));
                a.f[1] = f2;
                f1 = tc_callf(r12, &a);
                a.r[0] = r29;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r29) + 0x28u), &a);
                wrf32d((u32)param_1 + 0x24u, (f64)rdf32(r3));
                wrf32d((u32)param_1 + 0x28u, (f64)rdf32(r3 + 4u));
                wrf32d((u32)param_1 + 0x2cu, (f64)rdf32(r3 + 8u));
            }
        }
    }
    wr32((u32)param_1 + 0x6cu, 0u);
    return;
}
