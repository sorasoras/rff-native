#include "tc_rt.h"

void fn_8029dd04(u32 param_1)
{
    u32 r4 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r31 = (u32)rd8(param_1);
    r4 = (u32)rd8(param_1 + 1u) + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u);
    wr8(0x817fdfddu, rd8(param_1 + 3u));
    r30 = r4 & 0xfffu;
    wr8(0x817fdfdcu, rd8(param_1 + 4u));
    wr8(0x817fdfdbu, rd8(param_1 + 5u));
    wr8(0x817fdfdau, rd8(param_1 + 6u));
    wr8(0x817fdfd9u, rd8(param_1 + 7u));
    wr8(0x817fdfd8u, rd8(param_1 + 8u));
    r6 = (u32)rd8(param_1 + 0xau);
    if ((u32)rd8(param_1 + 9u) == 1u) {
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r30;
        a.r[2] = r31;
        a.r[3] = r6;
        (void)tc_call(0x8029c23cu, &a);
        a.r[0] = r31;
        a.r[1] = r30;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x802a7770u, &a);
    } else {
        a.r[0] = 0x817fdfe0u;
        a.r[1] = 0u;
        a.r[2] = 0xeu;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 6u;
        f1 = tc_callf(0x80004338u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = r30;
        a.r[3] = 0x817fdfe0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80299d50u, &a);
    }
    return;
}
