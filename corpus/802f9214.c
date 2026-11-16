#include "tc_rt.h"

u32 fn_802f9214(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    r5 = 0u;
    r7 = 0u;
    r3 = (u32)rd8((u32)param_2 + 0x8cu) + rd32((u32)param_2 + 0x48u);
    if ((s32)r3 > 127) {
        r31 = 0x7fu;
    } else {
        r31 = r3 & ~(u32)((s32)r3 >> 31);
    }
    if (rd32(param_1 + 0xcu) == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 0u;
    } else {
        r28 = param_1 + 4u;
        while ((s32)rd32(param_1) >= (s32)rd32(param_1 + 0xcu)) {
            r4 = rd32(param_1 + 4u);
            r6 = 0x80u;
            r3 = 0u;
            while (r4 != r28) {
                r7 = r4 - 0xf8u;
                r5 = (u32)rd8(r4 - 0x6cu) + rd32(r4 - 0xb0u);
                if ((s32)r5 > 127) {
                    r0 = 0x7fu;
                } else {
                    r0 = r5 & ~(u32)((s32)r5 >> 31);
                }
                if ((s32)r6 > (s32)r0) {
                    r3 = r7;
                    r6 = r0;
                }
                r4 = rd32(r4);
            }
            if (r3 == 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 0u;
                return r3;
            }
            r4 = (u32)rd8(r3 + 0x8cu) + rd32(r3 + 0x48u);
            if ((s32)r4 > 127) {
                r0 = 0x7fu;
            } else {
                r0 = r4 & ~(u32)((s32)r4 >> 31);
            }
            if ((s32)r31 < (s32)r0) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 0u;
                return r3;
            }
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            r5 = 0u;
            r7 = 0u;
        }
        wr32(0x817fdfe8u, param_1 + 4u);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = (u32)param_2 + 0xf8u;
        (void)tc_call(0x802deba4u, &a);
        a.r[0] = (u32)param_2;
        a.r[1] = param_1;
        (void)tc_call(0x802f70ccu, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 1u;
    }
    return r3;
}
