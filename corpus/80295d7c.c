#include "tc_rt.h"

void fn_80295d7c(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1) == 0u) {
        r0 = (u32)rd8(param_1 + 1u) + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u);
        wr16(0x8053d4acu, (u16)r0);
        r0 = (r0 & 0xffffu) + 4u;
        r3 = (u32)rd8(param_1 + 4u) + (((u32)rd8(param_1 + 5u) << 8u) & 0xffffff00u);
        wr16(0x8053d4aeu, (u16)r0);
        r3 = r3 & 0xffffu;
        a.r[0] = r3;
        (void)tc_call(0x802a834cu, &a);
        a.r[0] = 0x69bu;
        a.r[1] = 0x1eu;
        a.r[2] = 0x14u;
        a.r[3] = 0xau;
        (void)tc_call(0x802a18acu, &a);
    }
    wr8(0x8053dfa6u, 3u);
    wr8(0x8053dfa7u, 4u);
    a.r[0] = 0x8053deccu;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x8028d220u, &a);
    (void)tc_call(0x802a1a6cu, &a);
    (void)tc_call(0x802a1b50u, &a);
    (void)tc_call(0x80298e74u, &a);
    return;
}
