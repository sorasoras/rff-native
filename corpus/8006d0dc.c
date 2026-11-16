#include "tc_rt.h"

void fn_8006d0dc(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8006e5d4u, &a);
    if (r3 != 0u) {
        r29 = 1u;
        r31 = rd32((u32)param_2 + 0x30u) & 0xff000000u;
        if ((rd32(0x80499094u) & 0x1000u) == 0u) {
            a.r[0] = 0x8049e140u;
            a.r[1] = 0x1000u;
            r3 = tc_call(0x801a8f18u, &a);
            if (r3 == 0u) {
                r29 = 0u;
            }
        }
        if (r29 == 0u) {
            if ((r31 & 0x1000000u) != 0u) {
                r29 = 1u;
                if ((rd32(0x80499094u) & 0x80u) == 0u) {
                    a.r[0] = 0x8049e140u;
                    a.r[1] = 0x80u;
                    r3 = tc_call(0x801a8f18u, &a);
                    if (r3 == 0u) {
                        r29 = 0u;
                    }
                }
                if (r29 == 0u) {
                    r0 = rd32(0x80499094u);
                    wrf32d(0x804991acu, (f64)rdf32(0x805726c0u));
                    r0 = r0 | 1u;
                    wr32(0x80499094u, r0);
                }
            }
            if ((r31 & 0x2000000u) != 0u) {
                r29 = 1u;
                if ((rd32(0x80499094u) & 0x100u) == 0u) {
                    a.r[0] = 0x8049e140u;
                    a.r[1] = 0x100u;
                    r3 = tc_call(0x801a8f18u, &a);
                    if (r3 == 0u) {
                        r29 = 0u;
                    }
                }
                if (r29 == 0u) {
                    r0 = rd32(0x80499094u);
                    wrf32d(0x804991b0u, (f64)rdf32(0x805726c0u));
                    r0 = r0 | 2u;
                    wr32(0x80499094u, r0);
                }
            }
            if ((r31 & 0x4000000u) != 0u) {
                r29 = 1u;
                if ((rd32(0x80499094u) & 0x200u) == 0u) {
                    a.r[0] = 0x8049e140u;
                    a.r[1] = 0x200u;
                    r3 = tc_call(0x801a8f18u, &a);
                    if (r3 == 0u) {
                        r29 = 0u;
                    }
                }
                if (r29 == 0u) {
                    r0 = rd32(0x80499094u);
                    wrf32d(0x804991bcu, (f64)rdf32(0x805726c0u));
                    r0 = r0 | 0x10u;
                    wr32(0x80499094u, r0);
                }
            }
            if ((r31 & 0x8000000u) != 0u) {
                r29 = 1u;
                if ((rd32(0x80499094u) & 0x800u) == 0u) {
                    a.r[0] = 0x8049e140u;
                    a.r[1] = 0x800u;
                    r3 = tc_call(0x801a8f18u, &a);
                    if (r3 == 0u) {
                        r29 = 0u;
                    }
                }
                if (r29 == 0u) {
                    r0 = rd32((u32)param_1 + 0x290u);
                    if (r0 != 0x1bu && r0 != 0x1cu) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x8006db64u, &a);
                    }
                    r0 = rd32(0x80499094u);
                    wrf32d(0x804991c0u, (f64)rdf32(0x805726c4u));
                    r0 = r0 | 0x20u;
                    wr32(0x80499094u, r0);
                }
            }
            if ((r31 & 0x10000000u) != 0u) {
                r29 = 1u;
                if ((rd32(0x80499094u) & 0x400u) == 0u) {
                    a.r[0] = 0x8049e140u;
                    a.r[1] = 0x400u;
                    r3 = tc_call(0x801a8f18u, &a);
                    if (r3 == 0u) {
                        r29 = 0u;
                    }
                }
                if (r29 == 0u) {
                    r0 = rd32(0x80499094u);
                    wrf32d(0x804991b8u, (f64)rdf32(0x805726c0u));
                    r0 = r0 | 8u;
                    wr32(0x80499094u, r0);
                }
            }
        }
        if ((r31 & 0x20000000u) != 0u) {
            r0 = rd32(0x80499094u);
            wrf32d(0x804991b4u, (f64)rdf32(0x80572600u));
            r0 = r0 | 4u;
            wr32(0x80499094u, r0);
        }
    }
    return;
}
