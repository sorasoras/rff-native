#include "tc_rt.h"

u32 fn_8009fcd4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 1u;
    a.r[0] = (u32)param_3;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32((u32)param_2 + 8u), &a);
    f1 = tc_lastf();
    r30 = r3;
    a.r[0] = (u32)param_3 + 4u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32((u32)param_2 + 8u), &a);
    if (r3 != 0u) {
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0x14u) + r3);
        for (;;) {
            if (r30 == 0u) {
                return r31;
            }
            r27 = (u32)(s8)((ppc_cntlzw(((u32)rd8(rd32(0x817fdfd8u)) & 0x80u) - 0x80u) >> 5u) & 0x7ffffffu);
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = 0x817fdfd8u;
            r3 = tc_call(0x8009fdf0u, &a);
            if ((u32)(s8)r3 == 0u) {
                if (r27 == 0u) break;
                r30 = r30 - 1u;
            } else if (r27 == 0u) {
                r30 = r30 - 1u;
            } else {
                while (r30 != 0u) {
                    r27 = (u32)(s8)((ppc_cntlzw(((u32)rd8(rd32(0x817fdfd8u)) & 0x80u) - 0x80u) >> 5u) & 0x7ffffffu);
                    a.r[0] = (u32)param_1;
                    a.r[1] = (u32)param_2;
                    a.r[2] = 0x817fdfd8u;
                    (void)tc_call(0x8009fdf0u, &a);
                    r30 = r30 - 1u;
                    if (r27 == 0u) break;
                }
            }
        }
        r31 = 0u;
    }
    return r31;
}
