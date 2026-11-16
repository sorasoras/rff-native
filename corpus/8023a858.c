#include "tc_rt.h"

u32 fn_8023a858(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0x460a0000u;
    r3 = tc_call(0x8022cd2cu, &a);
    if ((r3 - 0x8000000u) != 0u) {
        a.r[0] = 0x817fdfe8u;
        f1 = tc_callf(0x802253dcu, &a);
        r0 = (u32)rd8(0x817fdfe9u);
        if (r0 >= 0x1eu && r0 < 0xfeu) {
            if ((u32)rd8(0x8000319cu) == 0x81u) {
                r30 = 0x7ed40000u;
            }
            wr32(0x80570ae8u, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x804e5f80u;
            a.r[1] = 0x20u;
            a.r[2] = r30;
            a.r[3] = 0x8023a848u;
            f1 = tc_callf(0x8023bb64u, &a);
            while (rd32(0x80570ae8u) == 0u) {
            }
            r0 = rd32(0x80571670u);
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                wr32(0x80570ae8u, 0u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x8023a848u;
                a.r[7] = 0u;
                (void)tc_call(0x8023bff4u, &a);
                while (rd32(0x80570ae8u) == 0u) {
                }
                (void)tc_call(0x8023cda4u, &a);
                if (rd32(0x80571670u) != 1u) {
                    (void)tc_call(0x8023a6f0u, &a);
                    r3 = 0u;
                    return r3;
                }
                r3 = tc_call(0x8023cda4u, &a);
                if ((r3 & 0xff000000u) != 0u) {
                    r3 = 0u;
                    return r3;
                }
                r3 = tc_call(0x8023cda4u, &a);
                f1 = tc_lastf();
                r3 = r3 & 0xffffffu;
                if (r3 == 0x52100u) {
                    wr32(0x80570ae8u, 0u);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x804e5f80u;
                    a.r[1] = 0x40000u;
                    a.r[2] = 0u;
                    a.r[3] = 0x8023a848u;
                    f1 = tc_callf(0x8023c478u, &a);
                    while (rd32(0x80570ae8u) == 0u) {
                    }
                    r0 = rd32(0x80571670u);
                    c0lt = (s32)r0 < 2;
                    if (r0 == 2u) {
                        wr32(0x80570ae8u, 0u);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x8023a848u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8023bff4u, &a);
                        while (rd32(0x80570ae8u) == 0u) {
                        }
                        (void)tc_call(0x8023cda4u, &a);
                        if (rd32(0x80571670u) != 1u) {
                            (void)tc_call(0x8023a6f0u, &a);
                            r3 = 0u;
                            return r3;
                        }
                        r3 = tc_call(0x8023cda4u, &a);
                        if ((r3 & 0xff000000u) != 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        r3 = tc_call(0x8023cda4u, &a);
                        r3 = r3 & 0xffffffu;
                        c0lt = (s32)r3 < 340224;
                        if (r3 == 0x53100u) {
                            r3 = 1u;
                            return r3;
                        }
                        if (c0lt && r3 == 0x52000u) {
                            r3 = 1u;
                            return r3;
                        }
                    } else {
                        if (!c0lt) {
                            (void)tc_call(0x8023a6f0u, &a);
                            r3 = 0u;
                            return r3;
                        }
                        if ((s32)r0 < 1) {
                            (void)tc_call(0x8023a6f0u, &a);
                            r3 = 0u;
                            return r3;
                        }
                    }
                }
            } else {
                if (!c0lt) {
                    (void)tc_call(0x8023a6f0u, &a);
                    r3 = 0u;
                    return r3;
                }
                if ((s32)r0 < 1) {
                    (void)tc_call(0x8023a6f0u, &a);
                    r3 = 0u;
                    return r3;
                }
            }
            r4 = (u32)rd8(0x80570aedu);
            r3 = (u32)rd8(0x80570aeeu);
            r0 = (u32)rd8(0x80570aefu);
            wr8(0x817fdfd8u, rd8(0x80570aecu));
            wr8(0x817fdfd9u, (u8)r4);
            wr8(0x817fdfdau, (u8)r3);
            wr8(0x817fdfdbu, (u8)r0);
            r3 = tc_call(0x802750ccu, &a);
            if ((r3 & 0xffu) != 0u) {
                a.r[0] = 0u;
                (void)tc_call(0x8022b25cu, &a);
            } else {
                a.r[0] = 1u;
                (void)tc_call(0x8022b25cu, &a);
            }
            r3 = tc_call(0x802750ccu, &a);
            if ((r3 & 0xffu) <= 6u) {
                r3 = tc_call(0x802750ccu, &a);
                r5 = rd32(((r3 << 2u) & 0x3fcu) - 0x7fcc3580u);
            } else {
                r5 = rd32(0x8033ca84u);
            }
            r0 = rd32(0x817fdfd8u);
            wr32(0x817fdfe0u, 0u);
            wr32(0x817fdfdcu, r0);
            a.r[0] = 0x817fdfdcu;
            a.r[1] = 0x817fdfe0u;
            a.r[2] = r5;
            (void)tc_call(0x8022a718u, &a);
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
        return r3;
    }
    r3 = 1u;
    return r3;
}
