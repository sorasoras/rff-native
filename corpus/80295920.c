#include "tc_rt.h"

void fn_80295920(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x10u);
    if (r0 != 1u) {
        if (r0 == 2u) {
            r12 = rd32(0x8053df00u);
            wr32(0x8053df00u, 0u);
            if (r12 != 0u) {
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                (void)tc_call(r12, &a);
            }
        }
    } else {
        r0 = (u32)rd8(0x8053dfa6u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            r3 = (u32)rd8(0x8053dfa7u) - 1u;
            wr8(0x8053dfa7u, (u8)r3);
            if ((r3 & 0xffu) != 0u) {
                a.r[0] = 0x8053deccu;
                a.r[1] = 1u;
                a.r[2] = 1u;
                (void)tc_call(0x8028d220u, &a);
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x802a1b28u, &a);
                }
            } else {
                wr8(0x8053dfa6u, 0u);
                wr8(0x8053dfa7u, 5u);
                a.r[0] = 0x8053deccu;
                a.r[1] = 1u;
                a.r[2] = 4u;
                (void)tc_call(0x8028d220u, &a);
                (void)tc_call(0x802a0fb0u, &a);
            }
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                r3 = (u32)rd8(0x8053dfa7u) - 1u;
                wr8(0x8053dfa7u, (u8)r3);
                if ((r3 & 0xffu) != 0u) {
                    a.r[0] = 0x8053deccu;
                    a.r[1] = 1u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8028d220u, &a);
                    (void)tc_call(0x802a1a6cu, &a);
                    (void)tc_call(0x802a1b50u, &a);
                    (void)tc_call(0x80298e74u, &a);
                } else {
                    wr8(0x8053dfa6u, 0u);
                    wr8(0x8053dfa7u, 5u);
                    a.r[0] = 0x8053deccu;
                    a.r[1] = 1u;
                    a.r[2] = 4u;
                    (void)tc_call(0x8028d220u, &a);
                    (void)tc_call(0x802a0fb0u, &a);
                }
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                wr8(0x8053dfa6u, 0u);
                wr8(0x8053dfa7u, 5u);
                a.r[0] = 0x8053deccu;
                a.r[1] = 1u;
                a.r[2] = 4u;
                (void)tc_call(0x8028d220u, &a);
                (void)tc_call(0x802a0fb0u, &a);
            } else if (!c0lt) {
                wr8(0x8053dfa6u, 2u);
                wr8(0x8053dfa7u, 4u);
                a.r[0] = 0x8053deccu;
                a.r[1] = 1u;
                a.r[2] = 1u;
                (void)tc_call(0x8028d220u, &a);
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x802a1b28u, &a);
                }
                a.r[0] = 0x8053dfa0u;
                a.r[1] = 0x8053dfa0u;
                a.r[2] = 3u;
                f1 = tc_callf(0x80004338u, &a);
                r0 = (u32)rd8(0x8053dfa6u);
                if (r0 != 0u && r0 != 1u) {
                    a.r[0] = 2u;
                    r3 = tc_call(0x8028a274u, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0x8053dfa0u;
                        f1 = tc_callf(0x802a1824u, &a);
                    }
                }
                r0 = (u32)rd8(0x8053dfa6u);
                if (r0 != 0u && r0 != 1u) {
                    a.r[0] = 2u;
                    r3 = tc_call(0x8028a274u, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0x8053d958u;
                        f1 = tc_callf(0x802a150cu, &a);
                    }
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = (u32)rd8(0x8053d978u);
                a.r[1] = 0x8053d97au;
                a.r[2] = (u32)rd8(0x8053d979u);
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8029a718u, &a);
            }
        }
    }
    return;
}
