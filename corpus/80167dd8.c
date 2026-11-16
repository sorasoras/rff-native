#include "tc_rt.h"

void fn_80167dd8(u32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x7du;
    r3 = tc_call(0x8007dad4u, &a);
    r29 = rd32(r3 + 8u);
    a.r[0] = r29;
    r3 = tc_call(0x8007d13cu, &a);
    r28 = (u32)rd16(r3);
    a.r[0] = r29;
    r3 = tc_call(0x8007d13cu, &a);
    r31 = (u32)rd16(r3 + 2u);
    r3 = tc_call(0x800545e4u, &a);
    r29 = r3;
    a.r[0] = 0x80469958u;
    a.r[1] = r31;
    a.r[2] = 1u;
    r3 = tc_call(0x80058314u, &a);
    r31 = r3;
    a.r[0] = 0x80469958u;
    a.r[1] = r28;
    a.r[2] = 1u;
    r3 = tc_call(0x80057fd8u, &a);
    a.r[0] = 0x80469958u;
    a.r[1] = r3;
    a.r[2] = r31;
    a.r[3] = r29;
    r3 = tc_call(0x8005854cu, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x16dcu, r3);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x1bcu), &a);
    a.r[0] = param_1 + 0x16d0u;
    a.r[1] = r3;
    (void)tc_call(0x8016746cu, &a);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x1690u;
    (void)tc_call(0x800b2b40u, &a);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x16a8u;
    (void)tc_call(0x800b2b40u, &a);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x16c0u;
    (void)tc_call(0x800b2b40u, &a);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x16c8u;
    (void)tc_call(0x800b2b40u, &a);
    wr32(param_1 + 0xed0u, 0x29u);
    return;
}
