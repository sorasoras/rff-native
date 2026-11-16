#include "tc_rt.h"

u32 fn_801f0374(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfc8u, 0u);
    a.r[0] = param_2;
    a.r[1] = 0u;
    a.r[2] = param_1;
    a.r[3] = 0x804890c8u;
    a.r[4] = 0x817fdfc8u;
    r3 = tc_call(0x8006edf0u, &a);
    f1 = tc_lastf();
    r29 = r3;
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r5 = 0u;
    r6 = rd32(0x817fdfc8u);
    wr32(0x817fdfdcu, rd32(r3 + 4u));
    c0lt = (s32)r6 < 0;
    r0 = rd32(r3 + 8u);
    f0 = (f64)(f32)((f64)rdf32(0x817fdfdcu) + (f64)rdf32(0x8057658cu));
    wr32(0x817fdfd8u, rd32(r3));
    wr32(0x817fdfe0u, r0);
    wrf32d(0x817fdfdcu, f0);
    if ((s32)r6 > 0) {
        r5 = 2u;
    } else {
        if (c0lt) {
            r5 = 1u;
        }
    }
    r7 = rd32(0x817fdfd8u);
    r6 = rd32(0x817fdfe0u);
    wr32(0x817fdfd0u, rd32(0x817fdfdcu));
    wr32(0x817fdfccu, r7);
    wr32(0x817fdfd4u, r6);
    r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r29 & 0xffffu)) >> 5);
    a.r[0] = r0 + ((r0 >> 0x1fu) & 1u);
    a.r[1] = 0x817fdfccu;
    a.r[2] = r5;
    (void)tc_call(0x800d7d2cu, &a);
    r0 = rd32(param_1 + 0x128u) - (r29 & 0xffffu);
    if ((s32)r0 <= 0) {
        r31 = 1u;
        wr32(param_1 + 0x128u, 0u);
    } else {
        wr32(param_1 + 0x128u, r0);
    }
    return r31;
}
