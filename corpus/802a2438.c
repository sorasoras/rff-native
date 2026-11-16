#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    wr32(r1 + 0x1cu, 0u);
    r0 = (u32)rd8(0x8054053eu);
    wr32(r1 + 0xcu, 0u);
    wr32(r1 + 0x10u, 0u);
    wr16(r1 + 0x14u, 0u);
    wr8(r1 + 8u, 0u);
    if (r0 == 0u) {
        r6 = (u32)rd8(0x8054053au);
        r5 = (u32)rd8(param_1 + 8u);
        if (r5 == r6) {
            if (r5 == 0u) {
                r3 = 1u;
                wr8(0x80540548u, 0xffu);
                return r3;
            }
            r4 = (u32)rd16(0x8054053cu);
            if (r4 >= (u32)rd16(param_1 + 2u) && r4 <= (u32)rd16(param_1)) {
                r3 = 1u;
                wr8(0x80540548u, 0xffu);
                return r3;
            }
        }
        c0lt = (s32)r5 < 2;
        if (r5 == 2u) {
            if (r6 == 0u) {
                a.r[0] = 0x80u;
                a.r[1] = 0x805404d0u;
                a.r[2] = param_1;
                r3 = tc_call(0x80298becu, &a);
                f1 = tc_lastf();
                r6 = 0u;
                wr8(r1 + 8u, (u8)r3);
                wr8(0x8054053eu, 1u);
            } else {
                r3 = px_rec(r1, r1 + 0xcu);
                r6 = 0u;
            }
        } else if (!c0lt) {
            if ((s32)r5 < 4) {
                if (r6 == 0u) {
                    a.r[0] = 0x80u;
                    a.r[1] = 0x805404d0u;
                    a.r[2] = param_1;
                    r3 = tc_call(0x80298becu, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    wr8(r1 + 8u, (u8)r3);
                    wr8(0x8054053eu, 1u);
                } else {
                    r3 = px_rec(r1, r1 + 0xcu);
                    r6 = 0u;
                }
            }
        } else if (r5 == 0u) {
            if (r6 != 2u) {
                if (r6 == 3u) {
                    a.r[0] = 0x80u;
                    a.r[1] = 0x805404d0u;
                    a.r[2] = r1 + 0xcu;
                    r3 = tc_call(0x80298becu, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    wr8(r1 + 8u, (u8)r3);
                    wr8(0x8054053eu, 1u);
                }
            } else {
                a.r[0] = 0x80u;
                a.r[1] = 0x805404d0u;
                a.r[2] = r1 + 0xcu;
                r3 = tc_call(0x80298becu, &a);
                f1 = tc_lastf();
                r6 = 0u;
                wr8(r1 + 8u, (u8)r3);
                wr8(0x8054053eu, 1u);
            }
        }
        r4 = (u32)rd8(r1 + 8u);
        if (r4 > 1u) {
            wr8(r1 + 8u, (u8)(r4 + 0x37u));
            r12 = rd32(0x80540594u);
            if (r12 != 0u) {
                a.r[0] = 4u;
                a.r[1] = (u32)rd8(0x8054053fu);
                a.r[2] = r1 + 8u;
                a.r[3] = r6;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
        return r3;
    }
    r3 = 1u;
    wr8(0x80540548u, 0xffu);
    return r3;
}

u32 fn_802a2438(u32 param_1)
{
    return px_rec(0x817fe000u, param_1);
}
