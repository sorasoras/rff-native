#include "tc_rt.h"

u32 fn_8013d1d0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = rd32(0x8046adc4u);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r31 = rd32(r4 + 8u);
        r0 = rd32(r31 + 0x88u);
        if ((r0 == 0u && r0 != 1u) && (u32)param_1 == rd32(r31 + 0x80u)) {
            if (rd32(r31 + 0x98u) == 0u) {
                r3 = tc_call(0x800a7854u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = 0u;
                if (r3 != 0u) {
                    a.r[0] = r3;
                    f1 = tc_callf(0x800c4a78u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                }
            }
            a.r[0] = r31;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31) + 0x18u), &a);
            if (r31 != 0u) {
                a.r[0] = r31;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r31) + 8u), &a);
            }
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
