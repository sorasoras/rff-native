#include "tc_rt.h"

void fn_8020a20c(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fddf0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 1u;
    (void)tc_call(0x80059e34u, &a);
    r3 = tc_call(0x8003c20cu, &a);
    wr32(0x80571124u, r3);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    a.r[0] = r3;
    (void)tc_call(0x80035b6cu, &a);
    if ((param_1 & 4u) != 0u) {
        a.r[0] = 0x12u;
        a.r[1] = 0x14u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fddf8u;
        a.r[1] = 0x100u;
        a.r[2] = r3;
        a.r[3] = 2u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8025e640u, &a);
        a.r[0] = rd32(0x805713f0u);
        a.r[1] = 0x817fddf8u;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x801f8638u, &a);
        wr32(0x805709f4u, 4u);
        a.r[0] = 8u;
        a.r[1] = 0xbu;
        a.r[2] = 0xdu;
        (void)tc_call(0x80209b40u, &a);
    } else {
        if ((param_1 & 8u) != 0u) {
            a.r[0] = 0x12u;
            a.r[1] = 0x17u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = rd32(0x805713f0u);
            a.r[1] = r3;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801f8638u, &a);
            wr32(0x805709f4u, 4u);
            a.r[0] = 8u;
            a.r[1] = 0xbu;
            a.r[2] = 0xdu;
            (void)tc_call(0x80209b40u, &a);
        } else {
            a.r[0] = 0x12u;
            a.r[1] = 0x26u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = rd32(0x805713f0u);
            a.r[1] = r3;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801f8638u, &a);
            a.r[0] = rd32(0x805713f0u);
            a.r[1] = 0u;
            (void)tc_call(0x801f89b0u, &a);
            wr32(0x805709f4u, 3u);
            a.r[0] = 9u;
            a.r[1] = 0xdu;
            a.r[2] = 0xdu;
            (void)tc_call(0x80209b40u, &a);
        }
    }
    return;
}
