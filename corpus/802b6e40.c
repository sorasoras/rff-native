#include "tc_rt.h"

u32 fn_802b6e40(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0gt = 0, r3 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    c0gt = param_2 > param_4;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (param_2 != param_4) {
        if (!c0gt) {
            if (param_4 != 4u) {
                a.r[0] = 0x817fdfc8u;
                a.r[1] = param_3;
                a.r[2] = 0x10u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = 0x817fdfd8u;
                a.r[1] = 0x80348580u;
                a.r[2] = 0x10u;
                (void)tc_call(0x80004338u, &a);
                if (param_2 != 4u) {
                    a.r[0] = 0x817fdfdau;
                    a.r[1] = param_1;
                    a.r[2] = param_2;
                    (void)tc_call(0x80004338u, &a);
                } else {
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = param_1;
                    a.r[2] = param_2;
                    (void)tc_call(0x80004338u, &a);
                }
                a.r[0] = 0x817fdfd8u;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0x10u;
                r3 = tc_call(0x802592d8u, &a);
                r3 = (ppc_cntlzw(r3) >> 5u) & 0xffu;
            } else {
                r6 = 0u;
                if ((u32)rd8(param_3) == 0u && (u32)rd8(param_3 + 1u) == 0u && (u32)rd8(param_3 + 2u) == (u32)rd8(param_1) && (u32)rd8(param_3 + 3u) == (u32)rd8(param_1 + 1u)) {
                    r6 = 1u;
                }
                r3 = r6;
            }
        } else if (param_2 != 4u) {
            a.r[0] = 0x817fdfd8u;
            a.r[1] = param_1;
            a.r[2] = 0x10u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = 0x817fdfc8u;
            a.r[1] = 0x80348580u;
            a.r[2] = 0x10u;
            (void)tc_call(0x80004338u, &a);
            if (param_4 != 4u) {
                a.r[0] = 0x817fdfcau;
                a.r[1] = param_3;
                a.r[2] = param_4;
                (void)tc_call(0x80004338u, &a);
            } else {
                a.r[0] = 0x817fdfc8u;
                a.r[1] = param_3;
                a.r[2] = param_4;
                (void)tc_call(0x80004338u, &a);
            }
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x10u;
            r3 = tc_call(0x802592d8u, &a);
            r3 = (ppc_cntlzw(r3) >> 5u) & 0xffu;
        } else {
            r6 = 0u;
            if ((u32)rd8(param_1) == 0u && (u32)rd8(param_1 + 1u) == 0u && (u32)rd8(param_1 + 2u) == (u32)rd8(param_3) && (u32)rd8(param_1 + 3u) == (u32)rd8(param_3 + 1u)) {
                r6 = 1u;
            }
            r3 = r6;
        }
    } else if (param_2 != 2u) {
        if (param_2 != 4u) {
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = param_2;
            r3 = tc_call(0x802592d8u, &a);
            r6 = (ppc_cntlzw(r3) >> 5u) & 0xffu;
        } else {
            r6 = 0u;
            if ((u32)rd8(param_1) == (u32)rd8(param_3) && (u32)rd8(param_1 + 1u) == (u32)rd8(param_3 + 1u) && (u32)rd8(param_1 + 2u) == (u32)rd8(param_3 + 2u) && (u32)rd8(param_1 + 3u) == (u32)rd8(param_3 + 3u)) {
                r6 = 1u;
            }
        }
        r3 = r6;
    } else {
        r6 = 0u;
        if ((u32)rd8(param_1) == (u32)rd8(param_3) && (u32)rd8(param_1 + 1u) == (u32)rd8(param_3 + 1u)) {
            r6 = 1u;
        }
        r3 = r6;
    }
    return r3;
}
