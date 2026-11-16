#include "tc_rt.h"

u32 fn_80218830(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x68u);
    r3 = tc_call(0x80074e90u, &a);
    if (r3 == 0u || (u32)rd8((u32)param_1 + 0x8cu) != 0u) {
        r3 = tc_call(0x80218620u, &a);
        r29 = r3;
        if (r3 == rd32((u32)param_1 + 0x34u)) {
            r0 = rd32((u32)param_1 + 0x3cu);
            wr32(0x817fdfd8u, rd32((u32)param_1 + 0x38u));
            wr32(0x817fdfdcu, r0);
            wr32(0x817fdfe0u, rd32((u32)param_1 + 0x40u));
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80218660u, &a);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0x20u);
            a.r[2] = r29;
            r3 = tc_call(0x8021b37cu, &a);
            r28 = r3;
            if (r3 != 0xffffffffu) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x80218684u, &a);
                a.r[0] = r3;
                a.r[1] = r29;
                a.r[2] = r28;
                r3 = tc_call(0x80215bc4u, &a);
                r30 = r3;
                if (r3 != 0xffffffffu) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x80218684u, &a);
                    r3 = rd32(r3 + ((r29 << 2u) & 0xfffffffcu));
                    r3 = r3 + (r30 * 0xcu);
                    wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 4u));
                    wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 8u));
                    wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 0xcu));
                } else {
                    if (r29 == r28) {
                        r4 = rd32(0x817fdfdcu);
                        r0 = rd32(0x817fdfe0u);
                        wr32(0x817fdfccu, rd32(0x817fdfd8u));
                        wr32(0x817fdfd0u, r4);
                        wr32(0x817fdfd4u, r0);
                        a.r[0] = (u32)param_1;
                        r3 = tc_call(0x80218684u, &a);
                        a.r[0] = r3;
                        a.r[1] = r29;
                        a.r[2] = 0x817fdfccu;
                        r3 = tc_call(0x80215b24u, &a);
                        r30 = r3;
                        if (r3 != 0xffffffffu) {
                            a.r[0] = (u32)param_1;
                            r3 = tc_call(0x80218684u, &a);
                            r3 = rd32(r3 + ((r29 << 2u) & 0xfffffffcu));
                            r3 = r3 + (r30 * 0xcu);
                            wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 4u));
                            wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 8u));
                            wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 0xcu));
                        }
                    }
                }
            }
            r3 = rd32((u32)param_1 + 0x68u);
            wrf32d((u32)param_1 + 0x24u, (f64)rdf32(0x817fdfd8u));
            wrf32d((u32)param_1 + 0x28u, (f64)rdf32(0x817fdfdcu));
            wrf32d((u32)param_1 + 0x2cu, (f64)rdf32(0x817fdfe0u));
            a.r[0] = r3;
            r3 = tc_call(0x80074e90u, &a);
            if (r3 != 0u && (u32)rd8((u32)param_1 + 0x8cu) != 0u) {
                wr8((u32)param_1 + 0x8cu, 0u);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfd8u);
                a.f[1] = (f64)rdf32(0x817fdfe0u);
                a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                f1 = tc_callf(0x80089fc8u, &a);
                f0 = (f64)rdf32(0x805769d4u);
                wrf32d(0x817fdfdcu, f1);
                if (f1 < f0) {
                    wr8(0x817fdfc8u, 0u);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0x817fdfc8u;
                    r3 = tc_call(0x80218760u, &a);
                    if ((u32)rd8(0x817fdfc8u) == 1u) {
                        r3 = 0u;
                        wr32((u32)param_1 + 0x208u, 0x3cu);
                        return r3;
                    }
                    if (r3 != 0u) {
                        r3 = 1u;
                        return r3;
                    }
                    r3 = 0u;
                    wr8((u32)param_1 + 0x8cu, 1u);
                    return r3;
                }
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x8021854cu, &a);
                r3 = 0u;
                return r3;
            }
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
    } else {
        if ((u32)rd8((u32)param_1 + 0x20cu) == 0u) {
            wr8((u32)param_1 + 0x20cu, 1u);
            r3 = tc_call(0x80040b64u, &a);
            wr32((u32)param_1 + 0x208u, r3 - (((ppc_mulhwu(0x36406c81u, r3) >> 5u) & 0x7ffffffu) * 0x97u));
        }
        r3 = 1u;
    }
    return r3;
}
