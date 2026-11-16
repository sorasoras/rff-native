#include "tc_rt.h"

s32 fn_800d7ac8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (param_1 <= 5) {
        r4 = rd32(0x804890c8u);
        r3 = rd32(0x804890ccu);
        r29 = rd32(0x804863d8u) + 0x54cu;
        r0 = rd32(0x804890d0u);
        wr32(0x817fdfa8u, r4);
        wr32(0x817fdfacu, r3);
        wr32(0x817fdfb0u, r0);
        wr32(0x817fdfd8u, r4);
        wr32(0x817fdfdcu, r3);
        wr32(0x817fdfe0u, r0);
        wr32(0x817fdfccu, r4);
        wr32(0x817fdfd0u, r3);
        wr32(0x817fdfd4u, r0);
        if (r29 == 0u) {
            r3 = 0u;
            return (s32)r3;
        }
        a.r[0] = r29;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0xc8u;
        a.r[3] = 0x804890c8u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r29) + 0x34u), &a);
        f1 = tc_lastf();
        r31 = r3;
        a.r[0] = r29;
        a.r[1] = 0x817fdfccu;
        a.r[2] = 0xc9u;
        a.r[3] = 0x804890c8u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r29) + 0x34u), &a);
        if (r31 == 0u || r3 == 0u) {
            r3 = 0u;
            return (s32)r3;
        }
        r5 = rd32(0x817fdfd0u);
        r0 = rd32(0x817fdfd4u);
        wr32(0x817fdfc0u, rd32(0x817fdfccu));
        wr32(0x817fdfc4u, r5);
        wr32(0x817fdfc8u, r0);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfc0u;
        r3 = tc_call(0x800d7c30u, &a);
        return (s32)r3;
    }
    r5 = rd32(param_2 + 4u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdfb4u, rd32(param_2));
    wr32(0x817fdfb8u, r5);
    wr32(0x817fdfbcu, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfb4u;
    r3 = tc_call(0x800d7c30u, &a);
    f0 = (f64)rdf32(param_2 + 4u);
    wrf32d(r3 + 0x3cu, (f64)rdf32(param_2));
    f1 = (f64)rdf32(param_2 + 8u);
    wrf32d(r3 + 0x40u, f0);
    f0 = (f64)rdf32(param_3);
    wrf32d(r3 + 0x44u, f1);
    f1 = (f64)rdf32(param_3 + 4u);
    wrf32d(r3 + 0x48u, f0);
    f0 = (f64)rdf32(param_3 + 8u);
    wrf32d(r3 + 0x4cu, f1);
    wrf32d(r3 + 0x50u, f0);
    return (s32)r3;
}
