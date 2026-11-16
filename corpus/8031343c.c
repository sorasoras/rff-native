#include "tc_rt.h"

void fn_8031343c(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((rd32(param_r3 + 0x20u) & 0x200u) == 0u && rd32(param_r3 + 0xcu) == 1u && rd32(param_r3 + 0xb4u) == 0u && (u32)rd16(param_r3 + 0xdeu) == 0u) {
        r4 = rd32(param_r3 + 0x20u) & 4u;
        if (r4 != 0u) {
            r31 = rd32(param_r3 + 0xe4u);
            if ((r31 + 0x10000u) == 0xffffu) {
                a.r[0] = rd32(param_r3 + 0xbcu);
                a.r[1] = param_r3;
                (void)tc_call(0x80310bb4u, &a);
                return;
            }
        } else {
            r31 = rd32(param_r3 + 0xe4u);
            if (r31 >= (u32)rd16(param_r3 + 0x3cu)) {
                a.r[0] = rd32(param_r3 + 0xbcu);
                a.r[1] = param_r3;
                (void)tc_call(0x80310bb4u, &a);
                return;
            }
        }
        if (r4 == 0u) {
            r30 = (u32)rd16(param_r3 + 0x3cu);
        } else {
            r30 = 0xffffffffu;
        }
        r29 = 0u;
        if (r31 != 0u) {
            r3 = rd32(param_r3 + 0xb8u);
            r3 = rd32(r3 + 4u) + r3;
            r3 = r3 + 8u;
            r3 = rd32(r3) + r3;
            r3 = r3 + 4u;
            r3 = (((u32)rd16(r3) << 3u) & 0xfffffff8u) + r3;
            r28 = (u32)rd16(r3 + 6u);
        } else {
            r28 = 0u;
        }
        for (;;) {
            r5 = rd32(param_r3 + 0xb8u);
            r6 = rd32(r5 + 4u) + 8u;
            r4 = rd32(r5 + r6) + (r5 + r6) + 4u;
            r4 = (((u32)rd16(r4) << 3u) & 0xfffffff8u) + r4;
            if ((r28 & 0xffffu) >= (u32)rd16(r4 + 4u)) break;
            r3 = rd32(r5 + r6) + (r5 + r6);
            r4 = r3 + 4u;
            r3 = (u32)rd16(r3 + 4u);
            r3 = (r3 << 3u) & 0xfffffff8u;
            r3 = r3 + r4;
            r3 = r3 + 4u;
            r3 = r3 + ((r28 << 2u) & 0x3fffcu);
            r3 = rd32(r3 + 4u);
            if (((u32)rd8(r3 + 4u) & 8u) == 0u && (((u32)rd8(r3) + 0x55u) & 0xffu) <= 1u) {
                r26 = (u32)rd8(r3 + 1u);
                a.r[0] = r3;
                a.r[1] = param_r3 + r26 + 0x20u;
                a.r[2] = r31;
                a.r[3] = (u32)rd16(param_r3 + 0xeau);
                a.r[4] = r30;
                (void)tc_call(0x80315218u, &a);
                if (r26 >= 0x70u) {
                    r29 = 1u;
                }
            }
            r28 = r28 + 1u;
        }
        if (r29 != 0u) {
            a.r[0] = param_r3;
            (void)tc_call(0x80313cecu, &a);
        }
    }
    return;
}
