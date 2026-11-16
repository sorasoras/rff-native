#include "tc_rt.h"

void fn_8005aa0c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8005b08cu, &a);
    (void)tc_call(0x80053ff4u, &a);
    r7 = 0x805710f4u;
    if (rd32(0x805710f8u) != 0u) {
        r7 = 0x805706dcu;
    }
    r5 = (u32)rd8(0x805723d1u);
    r4 = (u32)rd8(0x805723d2u);
    r0 = (u32)rd8(0x805723d3u);
    wr8(0x817fdfe8u, rd8(0x805723d0u));
    f1 = (f64)rdf32(0x805723d4u);
    wr8(0x817fdfe9u, (u8)r5);
    wr8(0x817fdfeau, (u8)r4);
    wr8(0x817fdfebu, (u8)r0);
    wr8(0x817fdfe8u, rd8(r7));
    wr8(0x817fdfe9u, rd8(r7 + 1u));
    wr8(0x817fdfeau, rd8(r7 + 2u));
    a.f[0] = f1;
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x80051e9cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = 1u;
    (void)tc_call(0x8005ab74u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = 2u;
    (void)tc_call(0x8005ab74u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = 4u;
    (void)tc_call(0x8005ab74u, &a);
    if ((param_2 & 0x10u) != 0u) {
        a.r[0] = 0x10u;
        r3 = tc_call(0x80082730u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x80471a58u;
            (void)tc_call(0x8018a4e8u, &a);
        }
    }
    if ((param_2 & 0x40u) != 0u) {
        a.r[0] = 0x40u;
        r3 = tc_call(0x80082730u, &a);
        if (r3 != 0u) {
            (void)tc_call(0x8017c288u, &a);
            (void)tc_call(0x800d875cu, &a);
            (void)tc_call(0x80044f70u, &a);
        }
    }
    a.r[0] = 0u;
    (void)tc_call(0x8004a4fcu, &a);
    if (rd32((u32)param_1 + 0xbcu) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8004eac0u, &a);
    }
    if ((param_2 & 0x80u) != 0u) {
        a.r[0] = 0x80u;
        r3 = tc_call(0x80082730u, &a);
        if (r3 != 0u) {
            (void)tc_call(0x8005ad9cu, &a);
        }
    }
    if ((param_2 & 0x4000u) != 0u) {
        a.r[0] = 0x803d29f8u;
        (void)tc_call(0x80097010u, &a);
    }
    return;
}
