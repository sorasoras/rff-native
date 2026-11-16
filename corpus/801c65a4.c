#include "tc_rt.h"

u32 fn_801c65a4(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r5 = rd32((u32)param_1 + 0xcu);
    r0 = r5 - 1u;
    wr32((u32)param_1 + 0xcu, r0);
    if ((s32)r0 <= 0) {
        a.r[0] = rd32((u32)param_1 + 8u);
        (void)tc_call(0x80157f30u, &a);
        r3 = 0u;
    } else {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r8 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        r6 = rd32(r8 + 0x138u);
        r0 = rd32(r8 + 0x13cu);
        wr32(0x817fdfe0u, rd32(r8 + 0x134u));
        wr32(0x817fdfe4u, r6);
        wr32(0x817fdfe8u, r0);
        a.r[0] = 0x817fdfe0u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfe0u;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x80575cfcu);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfe0u) && f1 == (f64)rdf32(0x817fdfe4u)) && f1 == (f64)rdf32(0x817fdfe8u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfe0u;
            a.r[1] = 0x817fdfe0u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)rdf32(0x80575d90u);
        a.r[0] = 0x817fdfe0u;
        a.r[1] = 0x817fdfe0u;
        f1 = tc_callf(0x802343c8u, &a);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfc8u, rd32(r3));
        wr32(0x817fdfccu, r0);
        wr32(0x817fdfd0u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfc8u;
        a.r[1] = 0x817fdfe0u;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x80234380u, &a);
        r3 = rd32(0x817fdfccu);
        r0 = rd32(0x817fdfd0u);
        wr32(0x817fdfd4u, rd32(0x817fdfc8u));
        wr32(0x817fdfd8u, r3);
        wr32(0x817fdfdcu, r0);
        a.r[0] = rd32((u32)param_1 + 8u);
        a.r[1] = 0x817fdfd4u;
        (void)tc_call(0x8015811cu, &a);
        r3 = 1u;
    }
    return r3;
}
