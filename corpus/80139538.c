#include "tc_rt.h"

u32 fn_80139538(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x5c0u);
    a.r[0] = r31;
    r3 = tc_call(0x801f88d0u, &a);
    if (r3 == 0u) {
        return 1u;
    }
    a.r[0] = r31;
    r3 = tc_call(0x801f87c8u, &a);
    c0lt = (s32)r3 < 1;
    if (r3 == 1u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x80138f24u, &a);
    } else {
        if (c0lt && (s32)r3 >= 0) {
            a.r[0] = (u32)param_1;
            a.r[1] = 3u;
            (void)tc_call(0x80138f24u, &a);
            if (rd32(0x80571138u) != 0u) {
                (void)tc_call(0x80052dc0u, &a);
                wr32(rd32((u32)param_1 + 0x1cu) + 0x5c0u, 0u);
                return 1u;
            }
            (void)tc_call(0x8003c20cu, &a);
            wr32(0x80571124u, 0u);
            a.r[0] = 0u;
            (void)tc_call(0x80035b6cu, &a);
            (void)tc_call(0x80052dc0u, &a);
            wr32(rd32((u32)param_1 + 0x1cu) + 0x5c0u, 0u);
            return 1u;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x80138f24u, &a);
    }
    (void)tc_call(0x80052dc0u, &a);
    wr32(rd32((u32)param_1 + 0x1cu) + 0x5c0u, 0u);
    return 1u;
}
