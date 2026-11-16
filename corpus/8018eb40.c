#include "tc_rt.h"

u32 fn_8018eb40(u32 param_1)
{
    u32 r0 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x3cu), &a);
    a.r[0] = 0x804b9e80u;
    a.r[1] = 0u;
    (void)tc_call(0x8011f6bcu, &a);
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010a6d8u, &a);
    r6 = rd32(0x8036ffc0u);
    r0 = rd32(0x8036ffc4u);
    wr32(0x817fdfe8u, rd32(0x8036ffbcu));
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0x68u;
    (void)tc_call(0x8018efdcu, &a);
    return 1u;
}
