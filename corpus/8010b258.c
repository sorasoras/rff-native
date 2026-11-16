#include "tc_rt.h"

u32 fn_8010b258(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x22a0u) == 0u) {
        return 1u;
    }
    a.r[0] = (u32)param_1 + 0x19b8u;
    (void)tc_call(0x80162838u, &a);
    a.r[0] = (u32)param_1 + 0x2290u;
    (void)tc_call(0x801cac90u, &a);
    a.r[0] = (u32)param_1 + 0x1a30u;
    f1 = tc_callf(0x801cb9d0u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x18u) + 8u), &a);
    a.r[0] = (u32)param_1 + 0x74u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x7cu) + 8u), &a);
    a.r[0] = (u32)param_1 + 0x1940u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x1948u) + 8u), &a);
    a.r[0] = (u32)param_1 + 0xe0u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0xe8u) + 8u), &a);
    return 1u;
}
