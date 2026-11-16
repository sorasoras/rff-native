#include "tc_rt.h"

void fn_800c494c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    if (param_2 == 0x2e8u) {
        if (rd32(param_1 + 0xa48u) == 0u) {
            return;
        }
        r31 = 1u;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x800c3fccu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        return;
    }
    r3 = rd32(param_1 + 0xa48u);
    if ((r3 != 0u && param_2 == rd32(r3 + 0x74u)) && (param_3 == (u32)rd8(r3 + 0x78u) && param_4 == (u32)rd8(r3 + 0x79u))) {
        return;
    }
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
        r3 = rd32(param_1 + 0xa48u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 8u), &a);
        }
        wr32(param_1 + 0xa48u, 0u);
    }
    if (r31 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        (void)tc_call(0x8006ba28u, &a);
    }
    a.f[0] = (f64)rdf32(0x80572ea8u);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x800bf1d4u, &a);
    wr32(param_1 + 0x290u, 0u);
    return;
}
