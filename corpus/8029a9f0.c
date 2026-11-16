#include "tc_rt.h"

void fn_8029a9f0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x8053f2a4u) != 0u) {
        a.r[0] = 0x8053f294u;
        (void)tc_call(0x8028d290u, &a);
        wr32(0x8053f2a4u, 0u);
        a.r[0] = 0x8053f2acu;
        a.r[1] = 0xffu;
        a.r[2] = 6u;
        (void)tc_call(0x8000443cu, &a);
        if (param_2 != 0u) {
            wr8(0x80540117u, 0xeu);
            a.r[0] = param_1;
            (void)tc_call(0x802a03c8u, &a);
        } else {
            wr8(0x80540117u, 0u);
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = param_4;
            (void)tc_call(0x802a01e4u, &a);
            a.r[0] = param_1;
            r3 = tc_call(0x80295360u, &a);
            if (r3 != 0u) {
                wr32(r3 + 0x10u, rd32(param_5));
                wr32(r3 + 0x14u, rd32(param_5 + 4u));
            }
        }
    }
    return;
}
