#include "tc_rt.h"

u32 fn_80077cf0(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r6 = 0, r27 = 0;
    TcArgs a = {0};
    r6 = 0x80488d80u;
    r3 = 0u;
    ctr = 0x1eu;
    do {
        if (rd32(r6 + 4u) == 0u) {
            r3 = (r3 * 0x1cu) - 0x7fb77280u;
            wr32(r3 + 8u, (u32)param_3);
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = param_2;
            (void)tc_call(0x801a65e8u, &a);
            r3 = 1u;
            return r3;
        }
        r6 = r6 + 0x1cu;
        r3 = r3 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((u32)param_3 == 0u) {
        r3 = 0x80488d80u;
        r4 = 0u;
        ctr = 0x1eu;
        do {
            if (rd32(r3 + 4u) != 0u && rd32(r3 + 8u) == 0u) {
                r27 = (r4 * 0x1cu) - 0x7fb77280u;
                a.r[0] = r27;
                (void)tc_call(0x801a6424u, &a);
                wr32(r27 + 8u, (u32)param_3);
                a.r[0] = r27;
                a.r[1] = param_1;
                a.r[2] = param_2;
                (void)tc_call(0x801a65e8u, &a);
                r3 = 1u;
                return r3;
            }
            r3 = r3 + 0x1cu;
            r4 = r4 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r3 = 0u;
    return r3;
}
