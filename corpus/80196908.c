#include "tc_rt.h"

void fn_80196908(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = 0x817fdfa4u;
    wr32(0x817fdffcu, 0u);
    r4 = 0x8033ad54u;
    wr32(0x817fdff8u, 0u);
    ctr = 9u;
    do {
        r3 = rd32(r4 + 4u);
        r4 = r4 + 8u;
        r0 = rd32(r4);
        wr32(r6 + 4u, r3);
        wr32(r6 + 8u, r0);
        r6 = r6 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801965dcu, &a);
    r0 = (u32)(s8)r3;
    wr32(0x817fdff4u, param_2);
    f2 = rdf64(0x805754a8u);
    wr32(0x817fdff0u, 0x43300000u);
    f4 = (f64)(f32)((f64)rdf32(0x80575508u) * (f64)(f32)(rdf64(0x817fdff0u) - f2));
    wrf32d((u32)param_1 + 0x64cu, f4);
    if (r0 == 0xfu) {
        f3 = (f64)rdf32(0x80575418u);
        f1 = ppc_fnmsubs(f4, f3, ppc_fmadds((f64)rdf32((u32)param_1 + 0x3fcu), f3, (f64)rdf32((u32)param_1 + 0x3f0u)));
        wrf32d((u32)param_1 + 0x644u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x3f4u) + (f64)rdf32((u32)param_1 + 0x400u)));
        wrf32d((u32)param_1 + 0x640u, f1);
    } else {
        r0 = (r0 << 3u) & 0xfffffff8u;
        wrf32d((u32)param_1 + 0x640u, ppc_fnmsubs(f4, (f64)rdf32(0x80575418u), (f64)rdf32(r0 - 0x7e802058u)));
        wrf32d((u32)param_1 + 0x644u, (f64)rdf32(r0 - 0x7e802054u));
    }
    f4 = (f64)rdf32((u32)param_1 + 0x64cu);
    f3 = (f64)rdf32((u32)param_1 + 0x640u);
    f1 = (f64)rdf32((u32)param_1 + 0x644u);
    f0 = (f64)(f32)(f3 + f4);
    f2 = (f64)(f32)(f3 - (f64)rdf32((u32)param_1 + 0x6e0u));
    f5 = (f64)rdf32((u32)param_1 + 0x650u);
    wrf32d((u32)param_1 + 0x5dcu, f4);
    wrf32d((u32)param_1 + 0x5d8u, f5);
    wrf32d((u32)param_1 + 0x6d4u, f2);
    wrf32d((u32)param_1 + 0x6d8u, f1);
    wrf32d((u32)param_1 + 0x768u, f0);
    wrf32d((u32)param_1 + 0x76cu, f1);
    wrf32d((u32)param_1 + 0x5ccu, f3);
    wrf32d((u32)param_1 + 0x5d0u, f1);
    wrf32d((u32)param_1 + 0x660u, f2);
    wrf32d((u32)param_1 + 0x664u, f1);
    wrf32d((u32)param_1 + 0x6f4u, f0);
    wrf32d((u32)param_1 + 0x6f8u, f1);
    return;
}
