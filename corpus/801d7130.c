#include "tc_rt.h"

u32 fn_801d7130(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x70u);
    if ((s32)r0 >= 18 && (s32)r0 <= 30) {
        a.f[0] = (f64)rdf32(0x80374784u);
        a.r[0] = (u32)param_1;
        a.r[1] = 4u;
        a.r[2] = 1u;
        (void)tc_call(0x801d5c7cu, &a);
    } else {
        a.f[0] = (f64)rdf32(0x80374784u);
        a.r[0] = (u32)param_1;
        a.r[1] = 4u;
        a.r[2] = 0u;
        (void)tc_call(0x801d5c7cu, &a);
    }
    if ((s32)rd32((u32)param_1 + 0x70u) < 10) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xdcu;
        a.r[2] = 0xffffffffu;
        a.r[3] = 0x804890c8u;
        a.r[4] = 0u;
        a.r[5] = 1u;
        (void)tc_call(0x801d5628u, &a);
    }
    wr32((u32)param_1 + 0x70u, rd32((u32)param_1 + 0x70u) + 1u);
    return 1u;
}
