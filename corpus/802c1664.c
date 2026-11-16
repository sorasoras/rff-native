#include "tc_rt.h"

void fn_802c1664(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = rd32(0x80547470u);
    if (r6 != 0u) {
        c0lt = param_2 < -1;
        if ((u32)param_2 != 0xffffffffu) {
            if (!c0lt) {
                if (param_2 < 1) {
                    r6 = r6 + ((u32)param_1 * 0x68u);
                    wr8(r6 + 0x5cu, 1u);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 4u;
                    a.r[2] = 0x802c1774u;
                    (void)tc_call(0x8027b0acu, &a);
                }
            } else {
                c0lt = param_2 < -3;
                if ((u32)param_2 == 0xfffffffdu) {
                    wr8(r6 + ((u32)param_1 * 0x68u) + 0x62u, 0u);
                } else if (!c0lt) {
                    r31 = r6 + ((u32)param_1 * 0x68u);
                    a.r[0] = r31;
                    a.r[1] = (u32)param_1;
                    (void)tc_call(0x80226e98u, &a);
                    a.r[0] = r31;
                    (void)tc_call(0x80226a70u, &a);
                    a.r[0] = r31;
                    a.r[1] = 0x10624dd3u;
                    a.r[2] = 0u;
                    a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x32u;
                    a.r[4] = 0x802c1634u;
                    (void)tc_call(0x8022697cu, &a);
                }
            }
        }
    }
    return;
}
