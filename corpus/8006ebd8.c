#include "tc_rt.h"

void fn_8006ebd8(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r27 = rd32((u32)param_1 + 0x2cu);
    if (r27 != 0u) {
        r4 = rd32(r27 + 0xb8u);
        if (((ppc_cntlzw(r4) >> 5u) & 0x7ffffffu) == 0u) {
            if (((ppc_cntlzw(r4 - 2u) >> 5u) & 0x7ffffffu) != 0u) {
                a.r[0] = r27;
                a.r[1] = r4;
                a.r[2] = param_3;
                a.r[3] = param_4;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(r27) + 0x100u), &a);
                f1 = tc_lastf();
                wr8((u32)param_1 + 0x28u, (u8)r3);
                a.r[0] = r27;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r27) + 0x108u), &a);
                f1 = tc_lastf();
                wr8((u32)param_1 + 0x29u, (u8)r3);
                a.r[0] = r27;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r27) + 0x110u), &a);
                f1 = tc_lastf();
                wr8((u32)param_1 + 0x2au, (u8)r3);
                a.r[0] = r27;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r27) + 0x118u), &a);
                wr8((u32)param_1 + 0x2bu, (u8)r3);
            }
        } else {
            r0 = (u32)rd8(0x804990a0u) + rd32(0x8049e150u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8((u32)param_1 + 0x28u, (u8)r0);
            r0 = (u32)rd8(0x804990a1u) + rd32(0x8049e154u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8((u32)param_1 + 0x29u, (u8)r0);
            r0 = (u32)rd8(0x804990a2u) + rd32(0x8049e158u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8((u32)param_1 + 0x2au, (u8)r0);
            r0 = (u32)rd8(0x804990a3u) + rd32(0x8049e15cu);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            wr8((u32)param_1 + 0x2bu, (u8)r0);
        }
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[3] = param_4;
    (void)tc_call(0x8006e6f4u, &a);
    return;
}
