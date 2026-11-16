#include "tc_rt.h"

void fn_8029dde0(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr8(0x817fdff1u, rd8(param_1));
    wr8(0x817fdff0u, rd8(param_1 + 1u));
    wr8(0x817fdfefu, rd8(param_1 + 2u));
    wr8(0x817fdfeeu, rd8(param_1 + 3u));
    wr8(0x817fdfedu, rd8(param_1 + 4u));
    wr8(0x817fdfecu, rd8(param_1 + 5u));
    wr8(0x817fdfeau, rd8(param_1 + 6u));
    wr8(0x817fdfe9u, rd8(param_1 + 7u));
    wr8(0x817fdfe8u, rd8(param_1 + 8u));
    r5 = (u32)rd8(param_1 + 9u);
    if (r5 == 1u) {
        a.r[0] = 0x817fdfecu;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x8029b75cu, &a);
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x817fdfecu;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = r5;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80299b70u, &a);
    }
    return;
}
