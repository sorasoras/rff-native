#include "tc_rt.h"

u32 fn_8031d3ac(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_2 + 0xc8u);
    r0 = rd32(r5 + 0x10u) - 1u;
    wr32(r5 + 0x10u, r0);
    if (r0 == 0u && rd32(r5 + 0xcu) == 2u) {
        a.r[0] = r5;
        a.r[1] = (u32)param_2;
        a.r[2] = r5;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r5 + 0x1cu) + 8u), &a);
    }
    a.r[0] = (u32)param_1 + 0x38u;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802de984u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802de7f4u, &a);
    wr32((u32)param_2 + 0xcu, 3u);
    return 1u;
}
