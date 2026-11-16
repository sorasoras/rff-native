#include "tc_rt.h"

void fn_80064c6c(f64 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    f31 = param_1;
    if (rd32(param_2 + 0xf8u) != 0u && ((u32)param_5 != 0u || rd32(param_2 + 0x100u) != (u32)param_3)) {
        a.r[0] = param_2;
        a.r[1] = (u32)param_3;
        a.r[2] = (u32)param_4;
        a.r[3] = (u32)param_5;
        a.f[0] = (f64)rdf32(0x80572554u);
        (void)tc_call(rd32(rd32(param_2) + 0x50u), &a);
        r0 = rd32(param_2 + 0x100u);
        c0lt = param_1 < (f64)rdf32(0x80572550u);
        wr32(param_2 + 0x114u, (u32)param_4);
        wr32(param_2 + 0x104u, r0);
        wr32(param_2 + 0x100u, (u32)param_3);
        if (c0lt) {
            f31 = (f64)rdf32(param_2 + 0x108u);
        }
        a.r[0] = 0x8046a200u;
        a.r[1] = rd32(param_2 + 0xfcu);
        a.r[2] = (u32)param_3;
        r3 = tc_call(0x800590b4u, &a);
        a.f[0] = f31;
        a.r[0] = rd32(param_2 + 0x70u);
        a.r[1] = r3;
        a.r[2] = 0u;
        (void)tc_call(0x80035740u, &a);
        a.r[0] = 0x8046a200u;
        a.r[1] = rd32(param_2 + 0xfcu);
        a.r[2] = (u32)param_3;
        r3 = tc_call(0x800590b4u, &a);
        r3 = rd32(r3 + 0x14u);
        wr32(param_2 + 0x110u, 0u);
        wr32(param_2 + 0x118u, (r3 >> 1u) & 1u);
        wrf32d(param_2 + 0xd4u, (f64)rdf32(0x804890c8u));
        wrf32d(param_2 + 0xd8u, (f64)rdf32(0x804890ccu));
        wrf32d(param_2 + 0xdcu, (f64)rdf32(0x804890d0u));
    }
    return;
}
