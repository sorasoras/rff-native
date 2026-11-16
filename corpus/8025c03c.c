#include "tc_rt.h"

u32 fn_8025c03c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r26 = 0, r27 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    r7 = param_5;
    r8 = param_6;
    r9 = param_7;
    r26 = 0u;
    r27 = 1u;
    wr32(param_7, 0u);
    wr32(param_6, 0u);
    if (((s32)param_1 < 0 || param_1 == 1u) || ((s32)param_1 > 36 || (s32)param_2 < 1)) {
        r27 = 0x40u;
    } else {
        r26 = 1u;
        a.r[0] = param_4;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = param_6;
        a.r[6] = param_7;
        a.f[0] = 0.0;
        r3 = tc_call(param_3, &a);
        f1 = tc_lastf();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r4 = r3;
    }
    while (((s32)r26 <= (s32)param_2 && r4 != 0xffffffffu) && (r27 & 0x60u) == 0u) {
        if (r27 <= 0x10u) {
            r3 = rd32(((r27 << 2u) & 0xfffffffcu) - 0x7fc710a0u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.f[0] = f1;
            r3 = tc_call(r3, &a);
            return r3;
        }
    }
    if ((r27 & 0x34u) == 0u) {
        wr32(param_5, 0u);
    } else {
        wr32(param_5, r26 - 1u);
    }
    a.r[0] = param_4;
    a.r[1] = r4;
    a.r[2] = 1u;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.f[0] = f1;
    (void)tc_call(param_3, &a);
    return 0u;
}
