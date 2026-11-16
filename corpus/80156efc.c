#include "tc_rt.h"

void fn_80156efc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x24u) != 0u) {
        r3 = rd32(param_1 + 0x20u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                r3 = rd32(param_1 + 0x20u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                }
                wr32(param_1 + 0x20u, 0u);
            }
        }
        r30 = (u32)rd8(0x80492825u);
        r31 = (u32)rd8(0x80492824u);
        if ((u32)rd8(param_1 + 0x51u) != r30 || (u32)rd8(param_1 + 0x50u) != r31) {
            wr8(param_1 + 0x50u, (u8)r31);
            r5 = (u32)rd8(param_1 + 0x52u);
            wr8(param_1 + 0x51u, (u8)r30);
            a.r[0] = r31;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = (u32)rd8(param_1 + 0x53u);
            r3 = tc_call(0x80156d6cu, &a);
            f1 = tc_lastf();
            r5 = ppc_mulhw(1717986919, (s32)r3);
            r0 = (u32)((s32)r5 >> 1);
            r4 = (r0 >> 0x1fu) & 1u;
            r0 = r0 + r4;
            if ((s32)r0 >= 2) {
                r3 = rd32(param_1 + 0x54u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0xcu;
                    f1 = tc_callf(0x800b31a0u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    wr32(param_1 + 0x54u, 0u);
                }
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0x14u), &a);
            } else {
                if ((s32)r3 >= 5) {
                    r0 = (u32)((s32)r5 >> 1);
                    r0 = r0 + ((r0 >> 0x1fu) & 1u);
                    r0 = r0 * 5u;
                    r0 = r3 - r0;
                    if (r0 == 0u && rd32(param_1 + 0x20u) != (param_1 + 4u)) {
                        wr8(param_1 + 0x52u, (u8)r31);
                        wr8(param_1 + 0x53u, (u8)r30);
                        a.r[0] = param_1;
                        r3 = tc_call(0x80156eb8u, &a);
                        f1 = tc_lastf();
                        if (r3 != 0u) {
                            r3 = rd32(param_1 + 0x20u);
                            if (r3 != 0u) {
                                a.r[0] = r3;
                                a.r[1] = param_1;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                            }
                            r3 = param_1 + 4u;
                            wr32(param_1 + 0x20u, r3);
                            if (r3 == 0u) {
                                return;
                            }
                            a.r[0] = r3;
                            a.r[1] = param_1;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(r3) + 8u), &a);
                        } else {
                            r3 = rd32(param_1 + 0x20u);
                            if (r3 != 0u) {
                                a.r[0] = r3;
                                a.r[1] = param_1;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                            }
                            r3 = param_1 + 0x10u;
                            wr32(param_1 + 0x20u, r3);
                            if (r3 != 0u) {
                                a.r[0] = r3;
                                a.r[1] = param_1;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(rd32(rd32(r3) + 8u), &a);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
