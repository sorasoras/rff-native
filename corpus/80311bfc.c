#include "tc_rt.h"

void fn_80311bfc(void)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x80571df8u, 0x8039d7a8u);
    wr32(0x80571dfcu, 0x8039db8cu);
    wr32(0x80571e00u, 0x8039daf4u);
    a.r[0] = 0x80563e28u;
    (void)tc_call(0x80233740u, &a);
    a.r[0] = 0x80563e58u;
    (void)tc_call(0x80233740u, &a);
    f1 = (f64)rdf32(0x80577870u);
    f0 = (f64)rdf32(0x80577874u);
    wr8(0x80563e88u, 0u);
    wr32(0x80563e8cu, 0u);
    wr32(0x80563e90u, 0u);
    wr8(0x80563e94u, 1u);
    wr32(0x80563e98u, 0u);
    wrf32d(0x80563e9cu, f1);
    wrf32d(0x80563ea0u, f0);
    wrf32d(0x80563ea4u, f1);
    wrf32d(0x80563ea8u, f0);
    wrf32d(0x80563eb0u, f1);
    wrf32d(0x80563eb4u, f1);
    wrf32d(0x80563eb8u, f1);
    wrf32d(0x80563ebcu, f1);
    wr8(0x80563ec2u, 0xffu);
    wr8(0x80563ec1u, 0xffu);
    wr8(0x80563ec0u, 0xffu);
    wr8(0x80563ec3u, 0xffu);
    wr8(0x80563ec6u, 0u);
    wr8(0x80563ec5u, 0u);
    wr8(0x80563ec4u, 0u);
    wr8(0x80563ec7u, 0xffu);
    a.r[0] = 0x80563ee8u;
    f1 = tc_callf(0x803215ecu, &a);
    if (rd32(0x80571e04u) == 0u) {
        wr32(0x80571e04u, 1u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(0x80570f50u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80226610u, &a);
    }
    wr32(0x80563ed8u, 0u);
    wr32(0x8056feecu, 0u);
    wr8(0x8056ff3cu, 0u);
    a.r[0] = 0x80563ed8u;
    a.r[1] = 0x803114ccu;
    a.r[2] = 0x80563ec8u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
