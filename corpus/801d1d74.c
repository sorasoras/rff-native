#include "tc_rt.h"

u32 fn_801d1d74(u32 param_1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x8007e210u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(param_1 + 0x2a8u, 4u);
        wr32(param_1 + 0x2a4u, 0x80373ce8u);
        a.r[0] = param_1 + 0x27cu;
        a.r[1] = param_1;
        a.r[2] = 0x80373ce8u;
        a.r[3] = 4u;
        (void)tc_call(0x800a22ccu, &a);
        r31 = 0u;
        do {
            a.f[0] = (f64)rdf32(0x80575ea8u);
            a.r[0] = param_1 + 0x27cu;
            a.r[1] = r31;
            (void)tc_call(0x800a2560u, &a);
            r31 = r31 + 1u;
        } while (r31 < 4u);
        wr32(param_1 + 0x298u, 0x80373c98u);
        f1 = (f64)rdf32(0x80575e98u);
        wr32(param_1 + 0x29cu, 4u);
        f0 = (f64)rdf32(0x80575ea8u);
        wr32(param_1 + 0x34cu, 0u);
        wr32(param_1 + 0x350u, 0u);
        r5 = rd32(0x8033caa0u);
        r0 = rd32(0x8033caa4u);
        wr32(param_1 + 0x354u, r5);
        wr32(param_1 + 0x358u, r0);
        wr32(param_1 + 0x35cu, rd32(0x8033caa8u));
        wrf32d(param_1 + 0x364u, f1);
        wrf32d(param_1 + 0x360u, f0);
        wr32(param_1 + 0x374u, 0u);
        wr32(param_1 + 0x380u, 0u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r5;
        a.r[3] = 0x8033caa0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
        r3 = 1u;
        wr32(param_1 + 0x384u, 3u);
    }
    return r3;
}
