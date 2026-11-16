#include "tc_rt.h"

u32 fn_802939d8(u32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802966a4u, &a);
    f1 = tc_lastf();
    r4 = (u32)rd16(param_2);
    r31 = r3;
    if (r4 != 0u) {
        if ((r4 & 1u) != 0u && ((u32)rd8(r3) & 0x20u) == 0u) {
            r5 = r4 & 0xfffeu;
            wr16(param_2, (u16)r5);
            if ((u32)rd8(0x80540118u) >= 3u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0002u;
                a.r[1] = 0x803936ecu;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc6cu, &a);
            }
        }
        r3 = (u32)rd16(param_2);
        if ((r3 & 2u) != 0u && ((u32)rd8(r31) & 0x40u) == 0u) {
            r5 = r3 & 0xfffffffdu;
            wr16(param_2, (u16)r5);
            if ((u32)rd8(0x80540118u) >= 3u) {
                r5 = r5 & 0xffffu;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0002u;
                a.r[1] = 0x80393728u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc6cu, &a);
            }
        }
        r3 = (u32)rd16(param_2);
        if ((r3 & 4u) != 0u && ((u32)rd8(r31) & 0x80u) == 0u) {
            r5 = r3 & 0xfffffffbu;
            wr16(param_2, (u16)r5);
            if ((u32)rd8(0x80540118u) >= 3u) {
                r5 = r5 & 0xffffu;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0002u;
                a.r[1] = 0x80393760u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc6cu, &a);
            }
        }
        r3 = (u32)rd16(param_2);
        if ((r3 & 8u) != 0u && ((u32)rd8(r31 + 1u) & 1u) == 0u) {
            r5 = r3 & 0xfffffff7u;
            wr16(param_2, (u16)r5);
            if ((u32)rd8(0x80540118u) >= 3u) {
                r5 = r5 & 0xffffu;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0002u;
                a.r[1] = 0x803937a0u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
            }
        }
    }
    r30 = 0u;
    r31 = 0x8053d98cu;
    for (;;) {
        if ((u32)rd8(r31 + 0x119u) != 0u) {
            a.r[0] = r31 + 8u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x11cu;
        if (r30 >= 4u) {
            r31 = 0u;
            break;
        }
    }
    if (r31 == 0u) {
        r3 = 7u;
    } else {
        a.r[0] = (u32)rd16(r31);
        a.r[1] = (u32)rd16(param_2);
        r3 = tc_call(0x802a0f1cu, &a);
        c0eq = (r3 & 0xffu) == 0u;
        r3 = 3u;
        if (!c0eq) {
            r3 = 1u;
        }
    }
    return r3;
}
