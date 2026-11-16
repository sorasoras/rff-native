#include "tc_rt.h"

s32 fn_8012fc00(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x28u, 0x803637b8u);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = (u32)param_1 + 0x3cu;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80164328u, &a);
        a.r[0] = 0xfu;
        (void)tc_call(0x80141274u, &a);
        a.r[0] = 0x10u;
        (void)tc_call(0x80141274u, &a);
        a.r[0] = 0x11u;
        (void)tc_call(0x80141274u, &a);
        if (((u32)param_1 + 0x864u) != 0u) {
            a.r[0] = (u32)param_1 + 0x868u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x801f0de8u, &a);
        }
        a.r[0] = (u32)param_1 + 0x7ecu;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801e6158u, &a);
        a.r[0] = (u32)param_1 + 0x688u;
        a.r[1] = 0x801e6158u;
        a.r[2] = 0x74u;
        a.r[3] = 3u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x5a8u;
        a.r[1] = 0x8020ef0cu;
        a.r[2] = 0x38u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x3cu;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x80163f08u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80189440u, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}
