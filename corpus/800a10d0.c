#include "tc_rt.h"

void fn_800a10d0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    r3 = tc_call(0x800a0720u, &a);
    f1 = tc_lastf();
    if ((u32)(s8)r3 != 0u && rd32(0x817fdff4u) != 0u) {
        r6 = rd32(0x817fdff0u);
        if (r6 != 0u) {
            a.r[0] = 0x817fdfe0u;
            a.r[1] = (u32)(s8)rd8(0x817fdfe9u);
            a.r[2] = rd32(0x817fdfecu);
            a.r[3] = r6;
            a.r[4] = rd32(param_1 + 0x10u);
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(param_1 + 8u), &a);
            f1 = tc_lastf();
            if ((u32)(s8)r3 == 0u) {
                return;
            }
            r8 = rd32(0x817fdfe0u);
            r7 = rd32(0x817fdff4u);
            r3 = rd32(0x817fdfecu);
            r5 = (u32)(s8)rd8(0x817fdfe9u);
            r4 = rd32(0x817fdff0u);
            r6 = r8 - (ppc_divwu(r8, r7) * r7);
            wr32(0x817fdff4u, r6);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = rd32(param_1 + 0x10u);
            a.r[5] = r8;
            a.f[0] = f1;
            (void)tc_call(rd32(param_1 + 0xcu), &a);
        } else {
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x817fdfdcu;
            a.r[2] = rd32(0x817fdfecu);
            a.r[3] = 0u;
            a.r[4] = rd32(param_1 + 0x10u);
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(param_1), &a);
            f1 = tc_lastf();
            if ((u32)(s8)r3 != 0u) {
                r7 = rd32(0x817fdfdcu);
                r6 = rd32(0x817fdff4u);
                r3 = rd32(0x817fdfecu);
                r6 = r7 - (ppc_divwu(r7, r6) * r6);
                wr32(0x817fdfdcu, r6);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = r6;
                a.r[4] = rd32(param_1 + 0x10u);
                a.r[5] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(param_1 + 4u), &a);
            }
        }
    }
    return;
}
