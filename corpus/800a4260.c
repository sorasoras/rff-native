#include "tc_rt.h"

static u32 px_rec(u32 sp_, s32 param_1, u32 param_2)
{
    u32 r1 = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    f0 = (f64)rdf32(0x80572ad8u);
    wr32(r1 + 0x24u, 0x817ff000u);
    wr32(r1 + 0x1cu, 0u);
    wrf32d(r1 + 8u, f0);
    wrf32d(r1 + 0xcu, f0);
    wrf32d(r1 + 0x10u, f0);
    if (param_2 != 0u) {
        wrf32d(r1 + 8u, (f64)rdf32(param_2));
        wrf32d(r1 + 0xcu, (f64)rdf32(param_2 + 4u));
        wrf32d(r1 + 0x10u, (f64)rdf32(param_2 + 8u));
    }
    if ((u32)param_1 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800731a8u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r1 + 8u;
            a.r[2] = 0x804890c8u;
            (void)tc_call(0x80072d2cu, &a);
            if ((u32)param_1 == 0xbu) {
                r3 = px_rec(r1, 0x18u, 0u);
            }
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80073184u, &a);
            if (r3 != 0u) {
                r3 = 0u;
            } else {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800731c8u, &a);
                if (r3 != 0u) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x800a4500u, &a);
                } else {
                    r3 = 0u;
                }
            }
        }
    }
    return r3;
}

u32 fn_800a4260(s32 param_1, u32 param_2)
{
    return px_rec(0x817fe000u, param_1, param_2);
}
