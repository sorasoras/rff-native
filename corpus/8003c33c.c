#include "tc_rt.h"

void fn_8003c33c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x8034f690u;
    (void)tc_call(0x8003c320u, &a);
    r3 = tc_call(0x8003cefcu, &a);
    wr32(0x803be240u, r3);
    if ((u32)param_2 != 1u) {
        wr32(0x8034f6fcu, rd32(0x8057065cu));
    } else {
        wr32(0x8034f6fcu, rd32(0x80570658u));
    }
    c0lt = param_1 < 1;
    if ((u32)param_1 == 1u) {
        r0 = rd32(0x803be240u);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) {
            wr32(0x8034f694u, rd32(0x8034f680u));
        } else if (!c0lt) {
            if ((s32)r0 >= 5) {
                wr32(0x8034f694u, rd32(0x8034f678u));
            } else {
                wr32(0x8034f694u, rd32(0x8034f684u));
            }
        } else if (r0 == 1u) {
            wr32(0x8034f694u, rd32(0x8034f678u));
        } else {
            wr32(0x8034f694u, rd32(0x8034f678u));
        }
    } else {
        if (!c0lt) {
            if (param_1 >= 3) {
                return;
            }
            r0 = rd32(0x803be240u);
            c0lt = (s32)r0 < 4;
            if (r0 == 4u) {
                wr32(0x8034f694u, rd32(0x8034f684u));
                return;
            }
            if (!c0lt) {
                c0lt = (s32)r0 < 6;
                if (r0 == 6u) {
                    wr32(0x8034f694u, rd32(0x8034f68cu));
                    return;
                }
                if (c0lt) {
                    wr32(0x8034f694u, rd32(0x8034f688u));
                    return;
                }
            } else {
                c0lt = (s32)r0 < 2;
                if (r0 == 2u) {
                    wr32(0x8034f694u, rd32(0x8034f67cu));
                    return;
                }
                if (!c0lt) {
                    wr32(0x8034f694u, rd32(0x8034f680u));
                    return;
                }
                if ((s32)r0 >= 1) {
                    wr32(0x8034f694u, rd32(0x8034f678u));
                    return;
                }
            }
            wr32(0x8034f694u, rd32(0x8034f678u));
            return;
        }
        if (param_1 < 0) {
            return;
        }
        wr32(0x8034f694u, rd32(0x8034f674u));
    }
    wr32(0x803be23cu, 0u);
    wr32(0x803be238u, 0x8003c09cu);
    wr32(0x803be244u, 0u);
    a.r[0] = 0x803be224u;
    f1 = tc_callf(0x8003c234u, &a);
    wr32(0x803be248u, 0u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x80335b58u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x800371a8u, &a);
    wr32(0x803be24cu, r3);
    return;
}
