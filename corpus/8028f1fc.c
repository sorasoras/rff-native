#include "tc_rt.h"

u32 fn_8028f1fc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x817fdee8u;
    a.r[1] = param_1;
    (void)tc_call(0x8028d2a4u, &a);
    a.r[0] = 0x817fdeeeu;
    a.r[1] = param_3;
    a.r[2] = 0x1fu;
    (void)tc_call(0x80004338u, &a);
    wr8(0x817fdf0du, 0u);
    a.r[0] = 0x817fdfe7u;
    a.r[1] = param_4;
    a.r[2] = 0x10u;
    f1 = tc_callf(0x80004338u, &a);
    wr8(0x817fdfe6u, 1u);
    r12 = rd32(0x8053d644u);
    wr8(0x817fdff7u, 1u);
    if (r12 != 0u) {
        a.r[0] = 3u;
        a.r[1] = 0x817fdee8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return 1u;
}
