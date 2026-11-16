#include "tc_rt.h"

f64 fn_80035074(f64 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, t3 = 0, t7 = 0;
    f64 f1 = 0.0, t1 = 0.0, t2 = 0.0, t4 = 0.0, t5 = 0.0;
    TcArgs a = {0};
    r0 = (u32)(s8)rd8((u32)param_3 + 1u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        a.f[0] = param_1;
        a.r[0] = (u32)param_2;
        a.r[1] = rd32((u32)param_3 + 8u);
        f1 = tc_callf(0x80034ddcu, &a);
        return f1;
    }
    if (!c0lt) {
        if (r0 != 8u) {
            return param_1;
        }
        a.f[0] = param_1;
        a.r[0] = (u32)param_2;
        a.r[1] = rd32((u32)param_3 + 8u);
        f1 = tc_callf(0x80034f94u, &a);
        return f1;
    }
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r4 = rd32((u32)param_3 + 8u);
        t1 = (f64)rdf32(r4);
        t2 = (f64)rdf32(r4 + 4u);
        t3 = r4 + 8u;
        t4 = (f64)rdf32(t3);
        t5 = (f64)rdf32(t3 + 4u);
        wrf32d((u32)param_2, t1);
        wrf32d((u32)param_2 + 4u, t2);
        t7 = (u32)param_2 + 8u;
        wrf32d(t7, t4);
        wrf32d(t7 + 4u, t5);
        return t1;
    }
    if (!c0lt) {
        r4 = rd32((u32)param_3 + 8u);
        a.r[0] = (u32)param_2;
        a.r[1] = r4;
        a.f[0] = param_1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(r4 + 0x14u), &a);
        return f1;
    }
    return param_1;
}
