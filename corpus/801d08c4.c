#include "tc_rt.h"

void fn_801d08c4(u32 param_r3, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8)
{
    u32 r3 = 0, r12 = 0, r27 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x8007e210u, &a);
    if (r3 == 0u) {
        return;
    }
    wr32(param_r3 + 0x2a8u, 4u);
    wr32(param_r3 + 0x2a4u, 0x80373d78u);
    a.r[0] = param_r3 + 0x27cu;
    a.r[1] = param_r3;
    a.r[2] = 0x80373d78u;
    a.r[3] = 4u;
    (void)tc_call(0x800a22ccu, &a);
    r27 = 0u;
    do {
        a.f[0] = (f64)rdf32(0x80575f3cu);
        a.r[0] = param_r3 + 0x27cu;
        a.r[1] = r27;
        (void)tc_call(0x800a2560u, &a);
        r27 = r27 + 1u;
    } while (r27 < 4u);
    wr32(param_r3 + 0x298u, 0x80373d38u);
    f1 = (f64)rdf32(0x80575e98u);
    wr32(param_r3 + 0x29cu, 3u);
    f0 = (f64)rdf32(0x80575ea8u);
    wr32(param_r3 + 0x34cu, 0u);
    wr32(param_r3 + 0x350u, 0u);
    r12 = rd32(0x8033caa4u);
    wr32(param_r3 + 0x354u, rd32(0x8033caa0u));
    wr32(param_r3 + 0x358u, r12);
    wr32(param_r3 + 0x35cu, rd32(0x8033caa8u));
    wr32(param_r3 + 0x374u, 7u);
    wr32(param_r3 + 0x378u, 4u);
    wr32(param_r3 + 0x37cu, 3u);
    wr32(param_r3 + 0x390u, 6u);
    wr32(param_r3 + 0x380u, 0u);
    wr32(param_r3 + 0x384u, 1u);
    wr32(param_r3 + 0x388u, 2u);
    wr32(param_r3 + 0x38cu, 5u);
    wr32(param_r3 + 0x394u, 5u);
    wrf32d(param_r3 + 0x364u, f1);
    wrf32d(param_r3 + 0x360u, f0);
    wr32(param_r3 + 0x39cu, 0u);
    wr32(param_r3 + 0x398u, 0x81u);
    wr32(param_r3 + 0x3a0u, 0x37u);
    wr32(param_r3 + 0x3a8u, 0u);
    wr32(param_r3 + 0x3a4u, 0u);
    a.r[0] = param_r3;
    a.r[1] = 0u;
    a.r[2] = 0x81u;
    a.r[3] = 5u;
    a.r[4] = 2u;
    a.r[5] = 1u;
    a.r[6] = 6u;
    a.r[7] = 4u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_r3) + 0x1a8u), &a);
    return;
}
