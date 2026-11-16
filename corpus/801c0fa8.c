#include "tc_rt.h"

u32 fn_801c0fa8(u32 param_1)
{
    u32 c0lt = 0, ctr = 0, r4 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r7 = param_1 + 4u;
    r4 = param_1 + 0x1cu;
    c0lt = r7 < r4;
    wr16(param_1, 0x2e8u);
    wr8(param_1 + 2u, 1u);
    wr8(param_1 + 3u, 1u);
    if (c0lt) {
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (c0lt) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    (void)tc_call(0x801a783cu, &a);
    (void)tc_call(0x801a783cu, &a);
    wr16(param_1 + 0x20cu, 0x2e8u);
    wr8(param_1 + 0x20eu, 1u);
    wr8(param_1 + 0x20fu, 1u);
    a.r[0] = param_1 + 0x1cu;
    (void)tc_call(0x801a7840u, &a);
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x801c141cu, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 7);
    a.r[0] = param_1 + 0x114u;
    (void)tc_call(0x801a7844u, &a);
    a.r[0] = param_1 + 0x190u;
    (void)tc_call(0x801a7844u, &a);
    return param_1;
}
