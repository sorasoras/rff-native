#include "tc_rt.h"

void fn_8029a1f8(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    if (param_r3 < 3u) {
        r31 = (param_r3 * 0x34u) - 0x7fac26a8u;
        if ((u32)rd16(r31 + 0x185cu) == 4u) {
            r29 = r31 + 0x1868u;
            if ((u32)rd8(r31 + 0x1882u) == 0u || (u32)rd8(0x8053f260u) == 0u) {
                wr16(r29 + 0xcu, (u16)((u32)rd16(param_r4 + 2u) & ((u32)rd16(0x8053dfaeu) & 7u)));
                if ((u32)rd8(0x80540118u) >= 3u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0xd0002u;
                    a.r[1] = 0x80394148u;
                    a.r[2] = (u32)rd16(r31 + 0x185eu);
                    a.r[3] = (u32)rd16(r29 + 0xcu);
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8028cc84u, &a);
                }
                a.r[0] = (u32)rd16(r31 + 0x185eu);
                a.r[1] = ((u32)rd16(r29 + 0xcu) << 5u) & 0xe0u;
                r3 = tc_call(0x802a0468u, &a);
            } else {
                r3 = (u32)rd16(0x8053dfaeu);
                r4 = (u32)rd16(param_r4 + 2u);
                r27 = r4 & r3 & 0x3fu;
                if ((u32)rd8(0x8053df8eu) >= 3u) {
                    r27 = (r27 | ((r4 | r3) & 0x3c0u)) & 0xffffu;
                }
                if ((u32)rd8(0x80540118u) >= 3u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0xd0002u;
                    a.r[1] = 0x8039418cu;
                    a.r[2] = (u32)rd16(r31 + 0x185eu);
                    a.r[3] = param_r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x8028cc6cu, &a);
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                }
                if ((u32)rd8(0x80540118u) >= 3u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0xd0002u;
                    a.r[1] = 0x80393f8cu;
                    a.r[2] = rd32(r29);
                    a.r[3] = rd32(r29 + 4u);
                    a.r[4] = (u32)rd16(param_r4);
                    a.r[5] = (u32)rd16(r29 + 0xau);
                    a.r[6] = (u32)rd8(param_r4 + 4u);
                    a.r[7] = r27 & 0xffffu;
                    (void)tc_call(0x8028cce4u, &a);
                }
                a.r[0] = (u32)rd16(r31 + 0x185eu);
                a.r[1] = rd32(r29);
                a.r[2] = rd32(r29 + 4u);
                a.r[3] = (u32)rd16(param_r4);
                a.r[4] = (u32)rd16(r29 + 0xau);
                a.r[5] = (u32)rd8(param_r4 + 4u);
                a.r[6] = r27 & 0xffffu;
                r3 = tc_call(0x802a08ecu, &a);
                if ((r3 & 0xffu) != 0u) {
                    wr16(param_r4 + 2u, (u16)r27);
                }
            }
        }
    }
    return;
}
