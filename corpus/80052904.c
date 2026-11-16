#include "tc_rt.h"

void fn_80052904(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_5;
    r3 = tc_call(0x802550d4u, &a);
    f1 = tc_lastf();
    if (r3 <= 0x40u) {
        r0 = rd32(0x805710ccu);
        if ((s32)r0 < 30) {
            r0 = r0 * 0x9cu;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r0 - 0x7fc36e24u;
            a.r[1] = param_5;
            a.r[2] = 0x41u;
            (void)tc_call(0x80079e00u, &a);
            r3 = rd32(0x805710ccu);
            r4 = r3 * 0x9cu;
            r0 = r3 + 1u;
            r3 = r4 - 0x7fc36e30u;
            wr32(r3 + 0x90u, param_6);
            wrf32d(r4 - 0x7fc36e30u, (f64)(f32)param_1);
            wrf32d(r3 + 4u, (f64)(f32)param_2);
            wrf32d(r3 + 8u, (f64)(f32)param_3);
            wrf32d(r3 + 0x98u, param_4);
            wr32(0x805710ccu, r0);
        }
    }
    return;
}
