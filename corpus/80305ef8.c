#include "tc_rt.h"

u32 fn_80305ef8(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    r3 = (u32)rd8((u32)param_2 + 0x8cu) + rd32((u32)param_2 + 0x48u);
    if ((s32)r3 <= 127) {
        r29 = r3 & ~(u32)((s32)r3 >> 31);
    } else {
        r29 = 0x7fu;
    }
    if (rd32(param_1 + 0x24u) != 0u) {
        for (;;) {
            if ((s32)rd32(param_1) < (s32)rd32(param_1 + 0x24u)) {
                wr32(0x817fdfecu, param_1 + 4u);
                a.r[0] = param_1;
                a.r[1] = 0x817fdfecu;
                a.r[2] = (u32)param_2 + 0xe8u;
                (void)tc_call(0x802deba4u, &a);
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d56cu, &a);
                r3 = rd32(param_1 + 0x10u);
                r0 = param_1 + 0x10u;
                while (r3 != r0) {
                    r5 = (u32)rd8(r3 - 0x64u) + rd32(r3 - 0xa8u);
                    if ((s32)r5 <= 127) {
                        r6 = r5 & ~(u32)((s32)r5 >> 31);
                    } else {
                        r6 = 0x7fu;
                    }
                    r5 = (u32)rd8((u32)param_2 + 0x8cu) + rd32((u32)param_2 + 0x48u);
                    if ((s32)r5 <= 127) {
                        r4 = r5 & ~(u32)((s32)r5 >> 31);
                    } else {
                        r4 = 0x7fu;
                    }
                    if ((s32)r4 < (s32)r6) break;
                    r3 = rd32(r3);
                }
                wr32(0x817fdfe8u, r3);
                a.r[0] = param_1 + 0xcu;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = (u32)param_2 + 0xf0u;
                (void)tc_call(0x802deba4u, &a);
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                a.r[0] = (u32)param_2;
                a.r[1] = param_1;
                (void)tc_call(0x802f70b0u, &a);
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 1u;
                return r3;
            }
            r3 = rd32(param_1 + 0x10u) - 0xf0u;
            if (r3 == 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 0u;
                return r3;
            }
            r4 = (u32)rd8(r3 + 0x8cu) + rd32(r3 + 0x48u);
            if ((s32)r4 <= 127) {
                r0 = r4 & ~(u32)((s32)r4 >> 31);
            } else {
                r0 = 0x7fu;
            }
            if ((s32)r29 < (s32)r0) break;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 0u;
        return r3;
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    r3 = 0u;
    return r3;
}
