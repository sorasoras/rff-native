#include "tc_rt.h"

void fn_800dab98(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_4 != 0u) {
        a.r[0] = param_2;
        a.r[1] = 0u;
        r3 = tc_call(0x8007f0c4u, &a);
        r29 = r3;
        a.r[0] = param_2;
        a.r[1] = 0u;
        r3 = tc_call(0x8007f03cu, &a);
        f1 = tc_lastf();
        r28 = r3;
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfd8u, rd32(r3));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32(r3 + 8u));
        if (param_3 != 0u) {
            wrf32d(0x817fdfd8u, (f64)rdf32(param_3));
            wrf32d(0x817fdfdcu, (f64)rdf32(param_3 + 4u));
            wrf32d(0x817fdfe0u, (f64)rdf32(param_3 + 8u));
        }
        if (rd32(((r29 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
            a.f[0] = (f64)rdf32(0x805739ecu);
            a.r[0] = r29;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            r29 = r3;
        } else {
            a.f[0] = (f64)rdf32(0x805739ecu);
            a.r[0] = r29;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            r29 = r3;
        }
        if ((u32)param_5 == 0u) {
            r28 = 0xffffffffu;
        }
        if (r3 != 0u) {
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x8010b43cu, &a);
            wr32(r29 + 0x20u, r3);
            wr32(r29 + 0x24u, 0u);
            if (r28 != 0xffffffffu) {
                a.r[1] = r28;
                r3 = tc_call(0x8010b43cu, &a);
                wr32(r29 + 0x20u, r3);
                wr32(r29 + 0x24u, 0u);
            }
        }
    }
    return;
}
