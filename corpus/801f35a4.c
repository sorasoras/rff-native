#include "tc_rt.h"

u32 fn_801f35a4(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r7 = 0u;
    r5 = (u32)param_1 + (rd32((u32)param_1 + 0xfb4u) * 0x48u) + (rd32((u32)param_1 + 0xfb8u) * 0xcu) + 0x3c4u;
    r31 = rd32(r5 + 4u);
    r6 = r5 + 4u;
    while (r31 != r6 && (s32)r7 < param_2) {
        r31 = rd32(r31);
        r7 = r7 + 1u;
    }
    wr32((u32)param_1 + 0xfd8u, r5);
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
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802e41c0u, &a);
    }
    return r31 + 8u;
}
