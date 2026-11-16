#include "tc_rt.h"

s32 fn_8016dde0(s32 param_1)
{
    u32 r29 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x8016df14u;
    a.r[2] = 0x8016df74u;
    a.r[3] = 0x174u;
    a.r[4] = 8u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0xba0u;
    a.r[1] = 0x8016dfe8u;
    a.r[2] = 0x8016e028u;
    a.r[3] = 0x90u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    r29 = (u32)param_1 + 0xcc0u;
    a.r[0] = r29;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    wrf32d(r29 + 0x80u, f0);
    wrf32d(r29 + 0x7cu, f0);
    wrf32d(r29 + 0x78u, f0);
    a.r[0] = (u32)param_1 + 0xd54u;
    a.r[1] = 0x8016dfe8u;
    a.r[2] = 0x8016e028u;
    a.r[3] = 0x90u;
    a.r[4] = 5u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x1024u;
    a.r[1] = 0x8016e080u;
    a.r[2] = 0x8016e108u;
    a.r[3] = 0x1b0u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    r29 = (u32)param_1 + 0x1704u;
    a.r[0] = r29;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    wrf32d(r29 + 0x80u, f0);
    wrf32d(r29 + 0x7cu, f0);
    wrf32d(r29 + 0x78u, f0);
    a.r[0] = (u32)param_1 + 0x1818u;
    a.r[1] = 0x8016e18cu;
    a.r[2] = 0x8016e214u;
    a.r[3] = 0x1b0u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    wr8((u32)param_1 + 0x16e4u, 8u);
    wr8((u32)param_1 + 0x16f0u, 8u);
    wr32((u32)param_1 + 0x16f8u, 3u);
    wr32((u32)param_1 + 0x16f4u, 0u);
    wrf32d((u32)param_1 + 0x16e8u, f0);
    return param_1;
}
