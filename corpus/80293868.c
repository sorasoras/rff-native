#include "tc_rt.h"

void fn_80293868(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r12 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    r6 = 0u;
    if ((u32)rd8(0x8053daa5u) == 0u || (u32)rd16(0x8053d98cu) != param_1) {
        r6 = 1u;
        if ((u32)rd8(0x8053dbc1u) == 0u || (u32)rd16(0x8053daa8u) != param_1) {
            r6 = 2u;
            if ((u32)rd8(0x8053dcddu) == 0u || (u32)rd16(0x8053dbc4u) != param_1) {
                r6 = 3u;
                if ((u32)rd8(0x8053ddf9u) == 0u || (u32)rd16(0x8053dce0u) != param_1) {
                    r6 = 4u;
                }
            }
        }
    }
    if (r6 < 4u) {
        r29 = (r6 * 0x11cu) - 0x7fac26a8u;
        r0 = (u32)rd8(r29 + 0x14fu);
        if (r0 == 2u) {
            if ((u32)param_3 != 0u) {
                wr8(r29 + 0x14fu, 0u);
            } else {
                wr8(r29 + 0x14fu, 3u);
            }
            a.r[0] = r29 + 0x3cu;
            a.r[1] = (ppc_cntlzw((u32)rd8(r29 + 0x14eu)) >> 5u) & 0xffu;
            r3 = tc_call(0x802a0e6cu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if ((r3 & 0xffu) != 0u) {
                return;
            }
            wr8(r29 + 0x14fu, 0u);
            r12 = rd32(0x8053df84u);
            if (r12 == 0u) {
                return;
            }
            a.r[0] = 0x8053df7cu;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
            wr32(0x8053df84u, 0u);
        } else {
            if (r0 == 4u) {
                wr8(r29 + 0x14fu, 0u);
                r12 = rd32(0x8053df84u);
                if (r12 != 0u) {
                    a.r[0] = 0x8053df7cu;
                    a.r[1] = 0x8053d958u;
                    a.r[2] = (u32)param_3;
                    a.r[3] = r6;
                    a.f[0] = 0.0;
                    (void)tc_call(r12, &a);
                    wr32(0x8053df84u, 0u);
                }
            }
        }
    }
    return;
}
