#include "tc_rt.h"

void fn_802bf6ac(f64 param_1, f64 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, s32 param_7, u32 param_8)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    f2 = param_2;
    r6 = param_6;
    r7 = (u32)param_7;
    r8 = param_8;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff8u, 0.0);
    wrf64(0x817fdff0u, 0.0);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r29 = 0u;
    r28 = 0u;
    while (r28 < (u32)rd16(param_3 + 0x10u)) {
        a.r[0] = param_3 + 8u;
        a.r[1] = r28 & 0xffffu;
        r3 = tc_call(0x802d7bccu, &a);
        r31 = r3;
        r3 = rd32(r3 + 4u);
        a.r[0] = r3;
        a.r[1] = param_4;
        a.r[2] = (u32)param_5;
        a.r[3] = param_6;
        a.r[4] = (u32)param_7;
        a.r[5] = param_8;
        a.f[0] = param_1;
        a.f[1] = param_2;
        r3 = tc_call(rd32(rd32(r3) + 0x48u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        f2 = 0.0;
        if (r3 != 0u) {
            r3 = rd32(r31 + 4u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            f2 = 0.0;
            if (r3 != 0u) {
                r29 = rd32(r31 + 4u);
            }
        }
        r28 = r28 + 1u;
    }
    if (r29 != 0u) {
        if ((u32)param_5 != 0u) {
            a.r[0] = r29;
            a.r[1] = (u32)param_5;
            a.r[2] = 0x817fdfb4u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.f[0] = f1;
            a.f[1] = f2;
            f1 = tc_callf(rd32(rd32(r29) + 0x3cu), &a);
            a.r[0] = r29;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r29) + 0x20u), &a);
            f1 = tc_lastf();
            a.r[0] = param_3;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = param_8;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(param_3) + 0x34u), &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            f2 = 0.0;
        }
        if ((u32)param_7 != 0u) {
            a.r[0] = r29;
            a.r[1] = (u32)param_7;
            a.r[2] = 0x817fdfa8u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.f[0] = f1;
            a.f[1] = f2;
            f1 = tc_callf(rd32(rd32(r29) + 0x3cu), &a);
            a.r[0] = r29;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r29) + 0x20u), &a);
            f1 = tc_lastf();
            a.r[0] = param_3;
            a.r[1] = r3;
            a.r[2] = 5u;
            a.r[3] = param_8;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_3) + 0x34u), &a);
        }
    }
    return;
}
