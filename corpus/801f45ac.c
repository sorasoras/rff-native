#include "tc_rt.h"

s32 fn_801f45ac(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xfd0u) == rd32((u32)param_1 + 0xfd4u)) {
        r3 = (u32)param_1 + 0xfbcu;
    } else {
        r31 = rd32((u32)param_1 + 0xfd0u);
        if (r31 == 0u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x80376b00u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80376adcu;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x802e41c0u, &a);
        }
        r3 = r31 + 8u;
    }
    return (s32)r3;
}
