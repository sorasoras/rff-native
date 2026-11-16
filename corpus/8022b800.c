#include "tc_rt.h"

void fn_8022b800(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r26 = 0, r27 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0u;
    c0lt = (s32)param_1 < 3;
    wr32(0x817fdfd8u, 0u);
    r26 = param_1;
    if (param_1 == 3u) {
        a.r[0] = param_2;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802306b0u, &a);
    } else if (!c0lt) {
        c0lt = (s32)param_1 < 5;
        if (param_1 == 5u) {
            r0 = rd32(param_2);
            wr32(0x817fdfd8u, r0);
        } else if (c0lt) {
            a.r[0] = param_2;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x802307c0u, &a);
        }
    } else {
        c0lt = (s32)param_1 < 1;
        if (param_1 == 1u) {
            r30 = (u32)rd8(param_2);
            r31 = rd32(0x805714d0u);
            if (r30 != 0u) {
                r27 = param_2 + 1u;
                r0 = 0u;
                if ((r30 >= 0x81u && r30 <= 0x9fu) || (r30 >= 0xe0u && r30 <= 0xfcu)) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r3 = (u32)rd8(r27);
                    r0 = 0u;
                    if (r3 >= 0x40u && r3 <= 0xfcu && r3 != 0x7fu) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r30 = (((u32)rd8(r27) & 0xff0000ffu) | ((r30 << 8u) & 0xffff00u)) & 0xffffu;
                    }
                }
            }
        } else if (c0lt && (s32)param_1 >= 0) {
            r30 = (u32)rd8(param_2);
            r31 = rd32(0x805714d4u);
        }
    }
    r3 = rd32(0x817fdfd8u);
    if (r3 != 0u) {
        r31 = rd32(0x805714d4u);
        r26 = 0u;
        a.r[0] = r3;
        r3 = tc_call(0x80230830u, &a);
        r30 = r3 & 0xffu;
        if (r30 == 0u || (rd32(0x805714ccu) != 0u && rd32(0x817fdfd8u) <= 0x7fu)) {
            a.r[0] = rd32(0x817fdfd8u);
            r3 = tc_call(0x802308a8u, &a);
            r30 = r3;
            if ((r3 & 0xffffu) != 0u) {
                r26 = 1u;
                r31 = rd32(0x805714d0u);
            }
        }
    }
    wr32(param_3, r31);
    a.r[0] = r26;
    a.r[1] = r30 & 0xffffu;
    r3 = tc_call(0x8022af30u, &a);
    wr32(param_4, r3);
    return;
}
