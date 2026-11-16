#include "tc_rt.h"

void fn_801c353c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        if (rd32((u32)param_1 + 0xe60u) != 0u) {
            return;
        }
        a.f[0] = (f64)rdf32(0x80575d38u);
        a.f[1] = (f64)rdf32(0x80575cd8u);
        a.r[0] = (u32)param_1 + 0xe18u;
        a.r[1] = 0u;
        a.r[2] = 0x804890c8u;
        a.r[3] = (u32)param_1;
        a.r[4] = 0u;
        a.r[5] = 0x2087u;
        (void)tc_call(0x8006f570u, &a);
        a.r[0] = (u32)param_1 + 0xe18u;
        a.r[1] = rd32((u32)param_1 + 0x70u);
        a.r[2] = rd32(0x80570940u);
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x80070170u, &a);
        a.r[0] = (u32)param_1 + 0xe18u;
        (void)tc_call(0x8006ff58u, &a);
    } else {
        if (rd32((u32)param_1 + 0xe60u) != 0u) {
            a.r[0] = (u32)param_1 + 0xe18u;
            (void)tc_call(0x80070068u, &a);
        }
    }
    return;
}
