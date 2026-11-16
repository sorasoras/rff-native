#include "tc_rt.h"

void fn_8018895c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdbe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1 + 0x110u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = 0x817fdbe8u;
    f1 = tc_callf(0x80119b14u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdbe8u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0xcu), &a);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x3dcu);
    (void)tc_call(0x801890a4u, &a);
    r3 = rd32((u32)param_1 + 0x34u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
        a.r[0] = (u32)param_1 + 0x2d4u;
        a.r[1] = 1u;
        (void)tc_call(0x801e6354u, &a);
        a.r[0] = (u32)param_1 + 0x348u;
        a.r[1] = 0u;
        (void)tc_call(0x801e6354u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x2d4u;
        a.r[1] = 9u;
        (void)tc_call(0x801e6354u, &a);
        a.r[0] = (u32)param_1 + 0x348u;
        a.r[1] = 8u;
        (void)tc_call(0x801e6354u, &a);
    }
    a.r[0] = (u32)param_1 + 0x2d4u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0x348u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = rd32((u32)param_1 + 0x3ccu);
    (void)tc_call(0x800fec80u, &a);
    a.r[0] = rd32((u32)param_1 + 0x3d0u);
    (void)tc_call(0x800fec80u, &a);
    a.r[0] = (u32)param_1 + 0x278u;
    r3 = tc_call(0x801f1144u, &a);
    f1 = tc_lastf();
    if (r3 != 0u && rd32((u32)param_1 + 0x3e4u) != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80188b34u, &a);
        wr32((u32)param_1 + 0x3e4u, 0u);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x817fdbe8u;
    a.r[1] = 0xffffffffu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119bacu, &a);
    return;
}
