#include "tc_rt.h"

void fn_80119c70(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x80119f24u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1 + 0xe8u;
        (void)tc_call(0x8007ae84u, &a);
        a.r[0] = param_1 + 0x250u;
        f1 = tc_callf(0x8007ae84u, &a);
        r4 = tc_lastr4();
        if (rd32(param_1 + 0x3f4u) != 0u) {
            a.r[0] = param_1 + 0x18u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1 + 0xe4u) + 0xcu), &a);
            a.r[0] = param_1 + 0xe8u;
            (void)tc_call(0x80161594u, &a);
            a.r[0] = param_1 + 0x250u;
            f1 = tc_callf(0x80161594u, &a);
            wr32(0x817fdfd8u, rd32(0x817fdfe0u));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80571250u;
            a.r[1] = rd32(param_1);
            a.r[2] = 0x80339548u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x801032a4u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80571250u;
            a.r[1] = rd32(param_1);
            a.r[2] = 0x80339552u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801032a4u, &a);
            r30 = r3;
            a.r[0] = (u32)rd16(param_1 + 0xd4u);
            a.r[1] = 0x817fdfe0u;
            a.r[2] = 8u;
            (void)tc_call(0x800f8734u, &a);
            a.r[0] = rd32(r30);
            a.r[1] = 0x817fdfe0u;
            (void)tc_call(0x802e4518u, &a);
            a.r[0] = param_1 + 0x3bcu;
            (void)tc_call(0x80163f60u, &a);
            a.r[0] = param_1 + 0x18u;
            (void)tc_call(0x80161b8cu, &a);
        }
    }
    return;
}
