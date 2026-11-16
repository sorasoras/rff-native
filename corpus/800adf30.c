#include "tc_rt.h"

u32 fn_800adf30(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 143;
    if ((u32)param_2 == 0x8fu) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800ae008u, &a);
        if (r3 == 0u) {
            r3 = 1u;
            return r3;
        }
    } else if (!c0lt) {
        if ((u32)param_2 != 0xa5u) {
            r3 = 2u;
            return r3;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(param_3 + 4u);
        a.r[2] = rd32(param_3);
        a.r[3] = rd32(param_3 + 8u);
        (void)tc_call(0x800add64u, &a);
        wr32((u32)param_1 + 0x40u, rd32(param_3 + 0xcu));
    } else {
        c0lt = param_2 < 128;
        if ((u32)param_2 == 0x80u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffffffu;
            a.r[2] = rd32(param_3);
            a.r[3] = 0u;
            (void)tc_call(0x800add64u, &a);
        } else {
            if (!c0lt) {
                r3 = 2u;
                return r3;
            }
            if (param_2 < 127) {
                r3 = 2u;
                return r3;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(param_3 + 4u);
            a.r[2] = rd32(param_3);
            a.r[3] = 0xffu;
            (void)tc_call(0x800add64u, &a);
            wr32((u32)param_1 + 0x40u, 0u);
        }
    }
    r3 = 0u;
    return r3;
}
