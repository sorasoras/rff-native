#include "tc_rt.h"

u32 fn_802ff2d8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    if ((u32)rd8(param_1 + 5u) == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 0u;
    } else {
        r3 = (u32)(s16)rd16(param_1 + 0xa8u);
        if ((s32)r3 < (s32)(s16)rd16(param_1 + 0xa6u)) {
            wr16(param_1 + 0xa8u, (u16)(r3 + 1u));
        }
        r3 = (u32)(s16)rd16(param_1 + 0xaeu);
        if ((s32)r3 < (s32)(s16)rd16(param_1 + 0xacu)) {
            wr16(param_1 + 0xaeu, (u16)(r3 + 1u));
        }
        r3 = (u32)(s16)rd16(param_1 + 0xb4u);
        if ((s32)r3 < (s32)(s16)rd16(param_1 + 0xb2u)) {
            wr16(param_1 + 0xb4u, (u16)(r3 + 1u));
        }
        if ((u32)rd8(param_1 + 0x7eu) != 0u) {
            if (rd32(param_1 + 0xf0u) != 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 1u;
                return r3;
            }
            wr8(param_1 + 0x7eu, 0u);
        }
        r3 = rd32(param_1 + 0x78u);
        if ((s32)r3 > 0) {
            r0 = r3 - 1u;
            wr32(param_1 + 0x78u, r0);
            if ((s32)r0 > 0) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 1u;
                return r3;
            }
        }
        if (rd32(param_1 + 0x54u) != 0u) {
            while (rd32(param_1 + 0x78u) == 0u && (u32)rd8(param_1 + 0x7eu) == 0u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0xcu), &a);
                f1 = tc_lastf();
                if (r3 == 1u) {
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                    r3 = 0xffffffffu;
                    return r3;
                }
            }
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 1u;
    }
    return r3;
}
