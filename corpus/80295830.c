#include "tc_rt.h"

u32 fn_80295830(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80540118u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0002u;
        a.r[1] = 0x80393a50u;
        a.r[2] = param_1;
        a.r[3] = (u32)rd8(0x80540115u);
        a.r[4] = param_2;
        a.r[5] = (u32)rd8(0x80540116u);
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028ccb4u, &a);
    }
    r4 = (u32)rd8(0x8053df9du);
    if (((r4 & 8u) == 0u && ((u32)rd8(0x8053df9cu) & 0x10u) == 0u) && (r4 & 0x10u) == 0u) {
        r3 = 4u;
        return r3;
    }
    if ((u32)rd8(0x80540115u) != param_1 || (u32)rd8(0x80540116u) != param_2) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x802a1ca4u, &a);
        if ((r3 & 0xffu) != 0u) {
            wr8(0x80540115u, (u8)param_1);
            wr8(0x80540116u, (u8)param_2);
        } else {
            r3 = 3u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
