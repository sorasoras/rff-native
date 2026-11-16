#include "tc_rt.h"

void fn_80286e68(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r26 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r26 = (u32)(s8)rd8(0x8050f808u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r26 == 3u) {
        r3 = tc_call(0x8022c2b0u, &a);
        if (((u32)rd8(0x8050f10cu) == 0u && (u32)rd8(0x8050f10du) == 0u) && ((u32)rd8(0x8050f10fu) == 4u && (u32)rd8(0x8050f110u) == 5u)) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r0 = 0u;
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r0 = 1u;
        }
        if (r0 == 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            wr8(0x80571b48u, (u8)param_3);
            r30 = r3;
            wr8(0x8050f10cu, 1u);
            wr8(0x8050f7e8u, (u8)param_2);
            wr8(0x8050f7e9u, (u8)param_1);
            wr8(0x8050f7e7u, (u8)((((0u - (u32)param_4) | (u32)param_4) >> 0x1fu) & 1u));
            wr8(0x8050f7e6u, 0u);
            wr16(0x8050f848u, 0x32u);
            wr16(0x8050f84au, 0xc8u);
            a.r[0] = 0x8050f810u;
            (void)tc_call(0x8022671cu, &a);
            r3 = tc_call(0x8023029cu, &a);
            r4 = tc_lastr4();
            a.r[0] = 0x8050f810u;
            a.r[1] = r4;
            a.r[2] = r3;
            a.r[3] = r4;
            a.r[4] = 0u;
            a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x14u;
            a.r[6] = 0x80285a98u;
            (void)tc_call(0x802269ecu, &a);
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
        }
    }
    return;
}
