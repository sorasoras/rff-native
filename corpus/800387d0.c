#include "tc_rt.h"

u32 fn_800387d0(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = tc_argr(1u), r26 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r26 = 1u;
    while (r26 != 0u) {
        r0 = rd32(param_1);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) {
            a.r[0] = param_1;
            r3 = tc_call(0x80038630u, &a);
            f1 = tc_lastf();
        } else if (!c0lt) {
            c0lt = (s32)r0 < 5;
            if (r0 == 5u) {
                r26 = 0u;
            } else if (c0lt) {
                a.r[0] = param_1;
                r3 = tc_call(0x8003874cu, &a);
                f1 = tc_lastf();
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                a.r[0] = param_1;
                r3 = tc_call(0x800380d4u, &a);
                f1 = tc_lastf();
            } else if (!c0lt) {
                a.r[0] = param_1;
                r3 = tc_call(0x800384fcu, &a);
                f1 = tc_lastf();
            } else if ((s32)r0 >= 0) {
                r4 = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
                r0 = ppc_mulhwu(r4, 0xau);
                r4 = r4 * 0xau;
                a.r[0] = r0;
                a.r[1] = r4;
                r3 = tc_call(0x802301e8u, &a);
                f1 = tc_lastf();
            }
        }
    }
    return 0u;
}
