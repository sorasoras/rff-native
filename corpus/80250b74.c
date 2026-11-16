#include "tc_rt.h"

void fn_80250b74(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80576c88u);
    { extern void gx_trace_begin(u32 ctx); gx_trace_begin(r31); }
    if (rd32(r31 + 0x5fcu) != 0u) {
        (void)tc_call(0x802508fcu, &a);
    }
    if (rd32(r31) == 0u) {
        r7 = rd32(0x80576c88u);
        r6 = 0u;
        r5 = (u32)rd16(r7 + 4u);
        r4 = (u32)rd16(r7 + 6u);
        wr8(0xcc008000u, 0x98u);
        r5 = r5 * r4;
        wr16(0xcc008000u, rd16(r7 + 4u));
        if (r5 != 0u) {
            r3 = r5 + 3u;
            r7 = r5 - 0x20u;
            if (((r3 >> 2u) & 0x3fffffffu) > 8u) {
                r0 = 0u;
                if (r3 >= 3u && r5 <= r3) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    ctr = ((r7 + 0x1fu) >> 5u) & 0x7ffffffu;
                    if (r7 > 0u) {
                        do {
                            wr32(0xcc008000u, 0u);
                            r6 = r6 + 0x20u;
                            wr32(0xcc008000u, 0u);
                            wr32(0xcc008000u, 0u);
                            wr32(0xcc008000u, 0u);
                            wr32(0xcc008000u, 0u);
                            wr32(0xcc008000u, 0u);
                            wr32(0xcc008000u, 0u);
                            wr32(0xcc008000u, 0u);
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            ctr = ((r5 + 3u - r6) >> 2u) & 0x3fffffffu;
            if (r6 < r5) {
                do {
                    wr32(0xcc008000u, 0u);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wr16(r31 + 2u, 1u);
    }
    wr8(0xcc008000u, (u8)(param_2 | param_1));
    wr16(0xcc008000u, (u16)param_3);
    return;
}
