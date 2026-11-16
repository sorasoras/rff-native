#include "tc_rt.h"

u32 fn_8014a9cc(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x805712d0u) == 0u) {
        if ((u32)param_1 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x101u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(0x805712d0u, r3);
        r6 = 0u;
        r4 = 0u;
        r3 = r3 + (rd32(r3) * 0x304u);
        r5 = r3 + 4u;
        for (;;) {
            r3 = rd32(0x805712d0u);
            if ((s32)r6 >= (s32)rd32(r3)) break;
            r3 = r3 + r4;
            wr32(r3 + 0x74u, r5);
            while ((u32)rd16(r5) != 0u) {
                r5 = r5 + 2u;
            }
            while ((u32)rd16(r5) == 0u) {
                r5 = r5 + 2u;
            }
            r4 = r4 + 0x304u;
            r6 = r6 + 1u;
        }
        wr32(0x805712e8u, r3);
    }
    if (rd32(0x805712d4u) == 0u) {
        if ((u32)param_1 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x102u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(0x805712d4u, r3);
        wr32(0x805712ecu, r3);
    }
    if (rd32(0x805712d8u) == 0u) {
        if ((u32)param_1 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x103u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(0x805712d8u, r3);
        wr32(0x805712f0u, r3);
    }
    if (rd32(0x805712dcu) == 0u) {
        if ((u32)param_1 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x104u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(0x805712dcu, r3);
        wr32(0x805712f4u, r3);
    }
    if (rd32(0x805712e0u) == 0u) {
        if ((u32)param_1 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x105u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(0x805712e0u, r3);
        wr32(0x805712f8u, r3);
    }
    if (rd32(0x805712e4u) == 0u) {
        if ((u32)param_1 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x100u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        wr32(0x805712e4u, r3);
        wr32(0x805712fcu, r3);
    }
    r3 = 1u;
    return r3;
}
