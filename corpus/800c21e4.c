#include "tc_rt.h"

u32 fn_800c21e4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x16u;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8019be38u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800c725cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006d388u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a0530u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800c0560u, &a);
    if (r3 != 0u || rd32((u32)param_1 + 0xa14u) != 0u) {
        r4 = rd32((u32)param_1 + 0xa10u);
        if (r4 != 0x21u) {
            r31 = 0x16u;
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            (void)tc_call(0x800c00f8u, &a);
            return r31;
        }
        wr32((u32)param_1 + 0xa08u, 0x21u);
        f1 = (f64)rdf32(0x80572ea8u);
        r31 = 0u;
        wr32((u32)param_1 + 0xa0cu, 0x21u);
        wr32((u32)param_1 + 0xa10u, 0x21u);
        wr32((u32)param_1 + 0xa14u, 0u);
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x800bf1d4u, &a);
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800c0298u, &a);
        if (r3 != 0u) {
            r4 = rd32((u32)param_1 + 0xa10u);
            if (r4 != 0x21u) {
                r31 = 0x16u;
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                (void)tc_call(0x800c00f8u, &a);
            }
        }
    }
    return r31;
}
