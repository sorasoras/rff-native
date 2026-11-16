#include "tc_rt.h"

u32 fn_80146c60(s32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xe20u, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    if (r3 > 0x40u) {
        r3 = 0u;
    } else {
        r0 = rd32((u32)param_1 + 0xe1cu);
        if (r0 < 0xau) {
            r0 = r0 * 0x94u;
            a.r[0] = (u32)param_1 + r0 + 0x748u;
            a.r[1] = param_2;
            r3 = tc_call(0x8025e84cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
        }
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80146f00u, &a);
        r30 = r3;
        if (r3 >= 0xau) {
            r3 = 0u;
        } else {
            r29 = r3 * 0x94u;
            a.r[0] = (u32)param_1 + r29 + 0x748u;
            a.r[1] = param_2;
            (void)tc_call(0x8025e7c0u, &a);
            r4 = (u32)param_1 + r29;
            r3 = 1u;
            wr32(r4 + 0x744u, param_5);
            wr8(r4 + 0x7cau, (u8)param_6);
            wr32(r4 + 0x740u, param_4);
            wr32(r4 + 0x73cu, (u32)param_3 * 0x1eu);
            wr8(r4 + 0x7cbu, (u8)param_7);
            wr8(r4 + 0x7ccu, (u8)param_8);
            r4 = rd32((u32)param_1 + 0xd90u);
            wr32((u32)param_1 + 0xe1cu, r30);
            wr32((u32)param_1 + 0xd90u, r4 + 1u);
        }
    }
    return r3;
}
