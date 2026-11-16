#include "tc_rt.h"

u32 fn_8023aca4(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571685u) == 0u) {
        wr8(0x80571685u, 1u);
        r3 = tc_call(0x8026f178u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80387aa8u;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x8026ed38u, &a);
        r30 = r3;
        r3 = tc_call(0x8026ed30u, &a);
        f1 = tc_lastf();
        if ((r30 & 0x1fu) != 0u) {
            r30 = (r30 + 0x1fu) & 0x1fu;
        }
        if ((r30 + 0x80u) > r3) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80387ac8u;
            a.r[1] = 0x80u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
        }
        a.r[0] = r30 + 0x80u;
        f1 = tc_callf(0x8026ed40u, &a);
        r4 = tc_lastr4();
        wr32(0x80571694u, r30);
        if (r30 != 0u) {
            r3 = tc_call(0x8026ed38u, &a);
            r30 = r3;
            r3 = tc_call(0x8026ed30u, &a);
            f1 = tc_lastf();
            if ((r30 & 0x1fu) != 0u) {
                r30 = (r30 + 0x1fu) & 0x1fu;
            }
            if ((r30 + 0x20u) > r3) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80387ac8u;
                a.r[1] = 0x20u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80228554u, &a);
            }
            a.r[0] = r30 + 0x20u;
            f1 = tc_callf(0x8026ed40u, &a);
            r4 = tc_lastr4();
            wr32(0x80571690u, r30);
            if (r30 != 0u) {
                r0 = 1u;
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80387b2cu;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80228554u, &a);
                r0 = 0u;
            }
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80387b04u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            r0 = 0u;
        }
        if (r0 == 0u) {
            r3 = 0u;
            return r3;
        }
        if ((u32)rd8(0x80571684u) == 0u) {
            wr32(0x804e5fa0u, 0u);
            wr32(0x804e5fa4u, 0u);
            wr8(0x804e5fa8u, 0u);
            wr32(0x804e5facu, 0xfeebdaedu);
            wr32(0x804e5fb0u, 0u);
            wr32(0x804e5fc0u, 0u);
            wr32(0x804e5fc4u, 0u);
            wr8(0x804e5fc8u, 0u);
            wr32(0x804e5fccu, 0xfeebdaedu);
            wr32(0x804e5fd0u, 1u);
            wr32(0x804e5fe0u, 0u);
            wr32(0x804e5fe4u, 0u);
            wr8(0x804e5fe8u, 0u);
            wr32(0x804e5fecu, 0xfeebdaedu);
            wr32(0x804e5ff0u, 2u);
            wr32(0x804e6000u, 0u);
            wr32(0x804e6004u, 0u);
            wr8(0x804e6008u, 0u);
            wr32(0x804e600cu, 0xfeebdaedu);
            wr32(0x804e6010u, 3u);
            wr32(0x80571680u, 0u);
            wr8(0x80571684u, 1u);
        }
    }
    a.r[0] = rd32(0x80571690u);
    a.r[1] = 0x80570af8u;
    a.r[2] = 0x20u;
    (void)tc_call(0x8025bdf4u, &a);
    a.r[0] = rd32(0x80571690u);
    a.r[1] = 0u;
    r3 = tc_call(0x8026f5f8u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wr32(0x80570af0u, r3);
    if ((s32)r3 < 0) {
        c0lt = (s32)r3 < -5;
        if (r3 == 0xfffffffbu) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80387be0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            r3 = 0u;
        } else {
            if (!c0lt) {
                if (r3 == 0xffffffffu) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80387b98u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80228554u, &a);
                    r3 = 0u;
                    return r3;
                }
            } else if ((s32)r3 >= -6) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80387b4cu;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80228554u, &a);
                r3 = 0u;
                return r3;
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80387c2cu;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            r3 = 0u;
        }
    } else {
        r3 = 1u;
    }
    return r3;
}
