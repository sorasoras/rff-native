#include "tc_rt.h"

void fn_802987ec(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 1u;
    r29 = 1u;
    r3 = tc_call(0x80295814u, &a);
    if ((r3 & 0xffu) == 0u) {
        return;
    }
    r3 = (u32)rd8(0x8053f006u);
    if ((r3 & param_3) == 0u) {
        if (param_3 == 1u) {
            if (r3 != 0u) {
                a.r[0] = param_1;
                a.r[1] = 0x8053f000u;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 == 0u) {
                    r30 = 0u;
                } else {
                    return;
                }
            }
            wr32(0x8053efd4u, param_5);
        } else {
            if (r3 != 0u) {
                return;
            }
        }
        if (r30 != 0u) {
            a.r[0] = 0x8053f000u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = 0x8053efd8u;
            a.r[1] = 0xau;
            a.r[2] = param_4;
            (void)tc_call(0x8028d220u, &a);
            if (param_2 != 0u) {
                a.r[0] = param_1;
                a.r[1] = (u32)rd8(param_2 + 0xbu);
                a.r[2] = (u32)rd8(param_2 + 0xdu);
                a.r[3] = (u32)rd16(param_2) | 0x8000u;
                r3 = tc_call(0x802a0600u, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                r3 = tc_call(0x802a0600u, &a);
            }
            r29 = r3;
        }
        if ((r29 & 0xffu) != 0u) {
            wr8(0x8053f006u, (u8)((u32)rd8(0x8053f006u) | param_3));
        }
    }
    return;
}
