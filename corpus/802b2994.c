#include "tc_rt.h"

void fn_802b2994(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = ((u32)rd16(0x80542842u) * 0x298u) - 0x7fabd7bcu;
    if (param_r3 != 0u) {
        r28 = param_r3 + 0x298u;
    } else {
        r28 = 0x80542844u;
    }
    for (;;) {
        if (r28 >= r30) {
            return;
        }
        r31 = 0u;
        while ((r31 & 0xffffu) < (u32)rd16(param_r4)) {
            r24 = r28 + 0xcu;
            r25 = 0u;
            r27 = param_r4 + ((r31 & 0xffffu) * 0x12u);
            r26 = r27 + 4u;
            while ((r25 & 0xffffu) < (u32)rd16(r28 + 8u)) {
                r0 = (u32)rd8(r24 + 0xau);
                if (r0 != 3u) {
                    if (r0 == 6u) {
                        a.r[0] = rd32(r24 + 4u);
                        a.r[1] = rd32(r24);
                        a.r[2] = r26;
                        a.r[3] = (u32)rd16(r27 + 2u);
                        a.r[4] = 0u;
                        r3 = tc_call(0x802b2ad0u, &a);
                        if ((r3 & 0xffu) != 0u) break;
                    }
                } else {
                    a.r[0] = rd32(r24 + 4u);
                    a.r[1] = rd32(r24);
                    a.r[2] = r26;
                    a.r[3] = (u32)rd16(r27 + 2u);
                    r3 = tc_call(0x802b6e40u, &a);
                    if ((r3 & 0xffu) != 0u) break;
                }
                r25 = r25 + 1u;
                r24 = r24 + 0xcu;
            }
            if ((r25 & 0xffffu) == (u32)rd16(r28 + 8u)) break;
            r31 = r31 + 1u;
        }
        if ((r31 & 0xffffu) == (u32)rd16(param_r4)) break;
        r28 = r28 + 0x298u;
    }
    return;
}
