#include "tc_rt.h"

void fn_8027ab08(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r4 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = r4 + (((ppc_cntlzw((u32)rd8(r4 + 0x8c8u)) >> 5u) & 0xffu) * 0x60u);
    r29 = r3 + 0xa0u;
    r0 = (u32)(s8)rd8(r3 + 0xc9u);
    c0lt = (s32)r0 < -2;
    do {
        if (r0 != 0xfffffffeu) {
            if (!c0lt) {
                if (r0 == 0u) {
                    r3 = rd32(r4 + 0x8b8u);
                    if (r3 > 2u) {
                        if ((r3 - 3u) > 2u) {
                            if ((r3 - 6u) > 2u) {
                                a.r[0] = (u32)param_2;
                                a.r[1] = r29;
                                a.r[2] = 0x5au;
                                (void)tc_call(0x80004338u, &a);
                                a.r[0] = r31;
                                (void)tc_call(0x8022c2d8u, &a);
                                return;
                            }
                            a.r[0] = (u32)param_2;
                            a.r[1] = r29;
                            a.r[2] = 0x36u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                            return;
                        }
                        a.r[0] = (u32)param_2;
                        a.r[1] = r29;
                        a.r[2] = 0x32u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                        return;
                    }
                    a.r[0] = (u32)param_2;
                    a.r[1] = r29;
                    a.r[2] = 0x2au;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = r31;
                    (void)tc_call(0x8022c2d8u, &a);
                    return;
                }
            } else if (r0 == 0xfffffff9u) {
                break;
            }
            r3 = rd32(r4 + 0x8b8u);
            if (r3 > 2u) {
                if ((r3 - 3u) > 2u) {
                    if ((r3 - 6u) > 2u) {
                        a.r[0] = (u32)param_2;
                        a.r[1] = 0u;
                        a.r[2] = 0x5au;
                        (void)tc_call(0x8000443cu, &a);
                    } else {
                        a.r[0] = (u32)param_2;
                        a.r[1] = 0u;
                        a.r[2] = 0x36u;
                        (void)tc_call(0x8000443cu, &a);
                    }
                } else {
                    a.r[0] = (u32)param_2;
                    a.r[1] = 0u;
                    a.r[2] = 0x32u;
                    (void)tc_call(0x8000443cu, &a);
                }
            } else {
                a.r[0] = (u32)param_2;
                a.r[1] = 0u;
                a.r[2] = 0x2au;
                (void)tc_call(0x8000443cu, &a);
            }
            wr8((u32)param_2 + 0x29u, rd8(r29 + 0x29u));
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
    } while (0);
    a.r[0] = (u32)param_2;
    a.r[1] = r29;
    a.r[2] = 0x2au;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
