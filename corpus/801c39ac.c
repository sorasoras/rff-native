#include "tc_rt.h"

u32 fn_801c39ac(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 8u) - 1u;
    wr32((u32)param_1 + 8u, r0);
    if ((s32)r0 <= 0) {
        r3 = tc_call(0x80040b64u, &a);
        if ((r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 2u) & 0x3fffffffu) * 5u)) == 0u) {
            if ((u32)(s8)rd8(0x80571370u) == 0u) {
                wr32(0x804dc480u, 0x803721d0u);
                a.r[0] = 0x804dc480u;
                r3 = tc_call(0x801c38acu, &a);
                f0 = (f64)rdf32(0x80575cfcu);
                wr32(0x804dc484u, r3);
                wr32(0x804dc480u, 0x80372f10u);
                wrf32d(0x804dc49cu, f0);
                wrf32d(0x804dc498u, f0);
                wrf32d(0x804dc494u, f0);
                wrf32d(0x804dc4a8u, f0);
                wrf32d(0x804dc4a4u, f0);
                wrf32d(0x804dc4a0u, f0);
                wr8(0x80571370u, 1u);
            }
            a.r[0] = (u32)param_2 + 0xcfcu;
            a.r[1] = rd32(0x804dc484u);
            (void)tc_call(0x801c3608u, &a);
        } else {
            if ((u32)(s8)rd8(0x80571350u) == 0u) {
                wr32(0x804db668u, 0x80371e70u);
                a.r[0] = 0x804db668u;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x804db66cu, r3);
                wr32(0x804db668u, 0x80373130u);
                wr8(0x80571350u, 1u);
            }
            a.r[0] = (u32)param_2 + 0xcfcu;
            a.r[1] = rd32(0x804db66cu);
            (void)tc_call(0x801c3608u, &a);
        }
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}
