#include "tc_rt.h"

void fn_8029b4c0(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5, u32 param_6, u32 param_7)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80295360u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80295188u, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 == 0u) {
            if (param_6 == 0u) {
                return;
            }
            a.r[0] = param_1;
            a.r[1] = param_7;
            a.r[2] = 3u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            (void)tc_call(param_6, &a);
            return;
        }
    }
    r4 = 0u;
    r5 = 0x8053f2e8u;
    ctr = 8u;
    for (;;) {
        if (((u32)rd8(r5 + 0xeu) & 0x80u) != 0u && (u32)rd16(r5 + 0xcu) == param_2 && rd32(r5) == (u32)param_4) {
            if ((u32)param_3 != 0u && rd32(r5 + 4u) == (u32)param_5) break;
            if ((u32)param_3 == 0u && rd32(r5 + 8u) == (u32)param_5) break;
        }
        r0 = (u32)rd8(r5 + 0x4au);
        r5 = r5 + 0x3cu;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r5 + 0xcu) == param_2 && rd32(r5) == (u32)param_4) {
            if ((u32)param_3 != 0u && rd32(r5 + 4u) == (u32)param_5) break;
            if ((u32)param_3 == 0u && rd32(r5 + 8u) == (u32)param_5) break;
        }
        r0 = (u32)rd8(r5 + 0x4au);
        r5 = r5 + 0x3cu;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r5 + 0xcu) == param_2 && rd32(r5) == (u32)param_4) {
            if ((u32)param_3 != 0u && rd32(r5 + 4u) == (u32)param_5) break;
            if ((u32)param_3 == 0u && rd32(r5 + 8u) == (u32)param_5) break;
        }
        r4 = r4 + 2u;
        r5 = r5 + 0x3cu;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r5 = 0u;
            break;
        }
    }
    if (r5 != 0u) {
        wr32(r3, r5);
        wr8(r3 + 0x81u, rd8(r5 + 0xeu));
        wr8(r3 + 0x80u, (u8)param_3);
        wr32(r3 + 4u, param_6);
        wr32(r3 + 8u, param_7);
        wr8(r3 + 0x76u, (u8)((u32)rd8(r3 + 0x76u) & 0xfeu));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x8029cfb0u, &a);
        f1 = tc_lastf();
        r5 = r3;
        if ((r3 & 0xffu) != 1u && param_6 != 0u) {
            if ((u32)rd8(r31 + 0x80u) != 0u) {
                r3 = rd32(r31);
                if (r3 != 0u && rd32(r3) == 3u) {
                    wr32(r3 + 4u, 0u);
                }
            }
            r5 = r5 & 0xffu;
            a.r[0] = param_1;
            a.r[1] = param_7;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            (void)tc_call(param_6, &a);
            wr32(r31 + 4u, 0u);
        }
    } else {
        if (param_6 != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_7;
            a.r[2] = 4u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(param_6, &a);
        }
        if ((u32)rd8(0x80540118u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xd0000u;
            a.r[1] = 0x80394758u;
            a.r[2] = param_2;
            a.r[3] = (u32)param_4;
            a.r[4] = (u32)param_5;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc9cu, &a);
        }
    }
    return;
}
