#include "tc_rt.h"

void fn_8026e6dc(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u && (s32)rd32(0x80570c28u) >= 0) {
        a.r[0] = param_1;
        a.r[1] = 0x40u;
        r3 = tc_call(0x8026ed48u, &a);
        r31 = r3;
        if (r3 != 0x40u) {
            a.r[0] = rd32(0x80571a6cu);
            a.r[1] = 0x140u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80270904u, &a);
            r30 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x100u, param_6);
                wr32(r3 + 0x104u, param_7);
                wr32(r3 + 0x108u, 0u);
                r3 = r3 + 6u;
                a.r[0] = r3;
                a.r[1] = param_1;
                a.r[2] = r31 + 1u;
                (void)tc_call(0x80004338u, &a);
                wr8(r30 + 0x49u, (u8)param_2);
                wr8(r30 + 0x46u, (u8)param_3);
                wr8(r30 + 0x47u, (u8)param_4);
                wr8(r30 + 0x48u, (u8)param_5);
                a.r[0] = rd32(0x80570c28u);
                a.r[1] = 9u;
                a.r[2] = r30;
                a.r[3] = 0x4cu;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0x8026da78u;
                a.r[7] = r30;
                (void)tc_call(0x8026fd70u, &a);
            }
        }
    }
    return;
}
