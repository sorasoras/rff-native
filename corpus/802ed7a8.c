#include "tc_rt.h"

void fn_802ed7a8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f3 = 0.0;
    TcArgs a = {0};
    r10 = rd32(param_1 + 0x18u);
    r7 = (r10 >> 0x1cu) & 0xfu;
    if ((r7 - 8u) <= 2u) {
        a.r[0] = param_2;
        (void)tc_call(0x802525b4u, &a);
        r0 = rd32(param_1 + 0x18u);
        a.r[0] = param_2;
        a.r[1] = rd32(param_1);
        a.r[2] = (u32)rd16(param_1 + 8u);
        a.r[3] = (u32)rd16(param_1 + 0xau);
        a.r[4] = (r0 >> 0x1cu) & 0xfu;
        a.r[5] = (r0 >> 0x19u) & 3u;
        a.r[6] = (r0 >> 0x17u) & 3u;
        a.r[7] = (r0 >> 0x1bu) & 1u;
        (void)tc_call(0x80252348u, &a);
    } else {
        r8 = (r10 >> 0x19u) & 3u;
        r9 = (r10 >> 0x17u) & 3u;
        r10 = (r10 >> 0x1bu) & 1u;
        a.r[0] = param_2;
        a.r[1] = rd32(param_1);
        a.r[2] = (u32)rd16(param_1 + 8u);
        a.r[3] = (u32)rd16(param_1 + 0xau);
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x8025213cu, &a);
    }
    r0 = rd32(param_1 + 0x18u);
    wr32(0x817fdff4u, (u32)rd16(param_1 + 0x14u));
    f3 = rdf64(0x805774e0u);
    wr32(0x817fdff0u, 0x43300000u);
    f3 = (f64)(f32)(rdf64(0x817fdff0u) - f3);
    f3 = (f64)(f32)(f3 * (f64)rdf32(0x805774d8u));
    a.f[0] = (f64)rdf32(param_1 + 0xcu);
    a.f[1] = (f64)rdf32(param_1 + 0x10u);
    a.f[2] = f3;
    a.r[0] = param_2;
    a.r[1] = (r0 >> 0x14u) & 7u;
    a.r[2] = (r0 >> 0x13u) & 1u;
    a.r[3] = (r0 >> 0x12u) & 1u;
    a.r[4] = (r0 >> 0x11u) & 1u;
    a.r[5] = (r0 >> 0xfu) & 3u;
    (void)tc_call(0x80252390u, &a);
    return;
}
