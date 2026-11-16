#include "tc_rt.h"

void fn_802325ac(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fde80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r28 = param_1;
    wr32(0x817fdea0u, 0u);
    if ((param_1 & 0x1fu) != 0u) {
        a.r[0] = 0x817fdf00u;
        a.r[1] = param_1;
        a.r[2] = 0xd8u;
        (void)tc_call(0x80004338u, &a);
        r28 = 0x817fdf00u;
    }
    a.r[0] = rd32(r28 + 4u);
    a.r[1] = rd32(r28 + 8u);
    a.r[2] = 0u;
    a.r[3] = 0x817fdea0u;
    r3 = tc_call(0x802de708u, &a);
    c0eq = r3 == 0u;
    if ((s32)r3 <= 0 && (c0eq && rd32(0x817fdea0u) != 0u)) {
        a.r[0] = rd32(r28 + 4u);
        a.r[1] = rd32(r28 + 8u);
        a.r[2] = 0x817fdec0u;
        a.r[3] = 0x817fdea0u;
        r3 = tc_call(0x802de708u, &a);
    }
    if (r3 == 0u) {
        r5 = 0u;
        r4 = 0u;
        ctr = 8u;
        do {
            r6 = r28 + r4;
            r0 = rd32(r6 + 0x98u);
            if (r0 == 1u) {
                wr32(param_2, 1u);
                if (rd32(0x817fdea0u) != 0u) {
                    r0 = rd32(r6 + 0x9cu);
                    r4 = r4 - 0x7e802140u;
                    r4 = rd32(r4 + 4u);
                    if (r4 < r0) {
                        r0 = r0 - r4;
                        wr32(param_3, r0);
                        return;
                    }
                    wr32(param_3, 0u);
                    return;
                }
                wr32(param_3, rd32(r6 + 0x9cu));
                return;
            }
            if (r0 != 0u) {
                r30 = r5 + 1u;
            }
            r5 = r5 + 1u;
            r4 = r4 + 8u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        if (r30 != 0u) {
            r30 = r30 - 1u;
            r6 = (r30 << 3u) & 0xfffffff8u;
            r4 = r28 + r6;
            if (rd32(r4 + 0x98u) != 4u) {
                wr32(param_2, 9u);
            } else {
                wr32(param_2, 4u);
                r5 = rd32(r4 + 0x9cu);
                wr32(param_3, r5);
                if (rd32(0x817fdea0u) != 0u) {
                    wr32(param_3, r5 - rd32(r6 - 0x7e80213cu));
                }
            }
        } else {
            wr32(param_2, 0u);
            wr32(param_3, 0xffffffffu);
        }
    }
    return;
}
