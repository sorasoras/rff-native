#include "tc_rt.h"

void fn_80325f9c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0eq = 0, r4 = 0;
    TcArgs a = {0};
    c0eq = ((u32)rd16(param_3) & 0x10u) == 0u;
    wr32((u32)param_1 + 0xc4u, 0xffffffffu);
    wr8((u32)param_1 + 0xc0u, 0u);
    wr32((u32)param_1 + 0xc8u, 0xffffffffu);
    wr32((u32)param_1 + 0xccu, 0xffffffffu);
    if (!c0eq) {
        wr32((u32)param_1 + 0xc4u, 0u);
        wr8((u32)param_1 + 0xc0u, 1u);
    }
    if (((u32)rd16(param_3) & 0x20u) != 0u) {
        r4 = (u32)rd8((u32)param_1 + 0xc0u);
        wr32((u32)param_1 + 0xc8u, r4);
        wr8((u32)param_1 + 0xc0u, (u8)(r4 + 1u));
    }
    if (((u32)rd16(param_3) & 0x40u) != 0u) {
        r4 = (u32)rd8((u32)param_1 + 0xc0u);
        wr32((u32)param_1 + 0xccu, r4);
        wr8((u32)param_1 + 0xc0u, (u8)(r4 + 1u));
    }
    a.r[0] = (u32)rd8((u32)param_1 + 0xc0u);
    (void)tc_call(0x8025016cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_3;
    a.r[2] = param_4;
    (void)tc_call(0x8032607cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x80326368u, &a);
    return;
}
