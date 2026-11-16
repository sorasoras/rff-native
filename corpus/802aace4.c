#include "tc_rt.h"

void fn_802aace4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_1 + 0x10u);
    if ((u32)rd8(param_1) != 0u) {
        wr8(param_1, 0u);
        a.r[0] = param_1 + 0x18u;
        (void)tc_call(0x8028d290u, &a);
        while (rd32(param_1 + 0x70u) != 0u) {
            a.r[0] = param_1 + 0x70u;
            r3 = tc_call(0x8028a9f8u, &a);
            a.r[0] = r3;
            (void)tc_call(0x8028a35cu, &a);
        }
        wr32(param_1 + 0x10u, 0u);
        if (rd32(r31 + 8u) != param_1) {
            if (rd32(r31 + 0xcu) != param_1) {
                wr32(rd32(param_1 + 0xcu) + 8u, rd32(param_1 + 8u));
                wr32(rd32(param_1 + 8u) + 0xcu, rd32(param_1 + 0xcu));
            } else {
                r3 = rd32(param_1 + 0xcu);
                wr32(r31 + 0xcu, r3);
                wr32(r3 + 8u, 0u);
            }
        } else {
            r3 = rd32(param_1 + 8u);
            wr32(r31 + 8u, r3);
            if (r3 != 0u) {
                wr32(r3 + 0xcu, 0u);
            }
        }
        if (rd32(0x805411d0u) != 0u) {
            wr32(param_1 + 8u, 0u);
            wr32(param_1 + 0xcu, rd32(0x805411d4u));
            wr32(rd32(0x805411d4u) + 8u, param_1);
            wr32(0x805411d4u, param_1);
        } else {
            wr32(0x805411d0u, param_1);
            wr32(0x805411d4u, param_1);
            wr32(param_1 + 8u, 0u);
            wr32(param_1 + 0xcu, 0u);
        }
        if ((u32)rd8(r31) != 0u && rd32(r31 + 4u) == 4u && rd32(r31 + 8u) == 0u) {
            r3 = (u32)rd16(r31 + 0x58u);
            if (r3 == 0u) {
                a.r[0] = (u32)rd16(r31 + 0x28u);
                a.r[1] = 0x13u;
                r3 = tc_call(0x8029c6bcu, &a);
                r0 = r3 & 0xffu;
                if (r0 != 1u) {
                    if (r0 != 0u) {
                        r3 = 1u;
                    } else {
                        wr32(r31 + 4u, 5u);
                        r3 = 0xffffu;
                    }
                } else {
                    r3 = 0x1eu;
                    wr32(r31 + 4u, 5u);
                }
            }
            r5 = r3 & 0xffffu;
            if (r5 != 0xffffu) {
                a.r[0] = r31 + 0x10u;
                a.r[1] = 2u;
                a.r[2] = r5;
                (void)tc_call(0x8028d220u, &a);
            }
        }
    }
    return;
}
