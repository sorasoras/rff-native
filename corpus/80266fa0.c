#include "tc_rt.h"

u32 fn_80266fa0(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fd720u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8026b004u, &a);
    if ((s32)r3 > 0) {
        a.r[0] = 0x817fd72cu;
        a.r[1] = 0x817fd728u;
        r3 = tc_call(0x80266d88u, &a);
        r0 = r3;
        a.r[0] = rd32(0x817fd728u);
        a.r[1] = 0u;
        (void)tc_call(0x80266c88u, &a);
        r3 = tc_call(0x8026afc8u, &a);
        if (r3 != 0u) {
            a.r[0] = r0;
            (void)tc_call(0x80266cf8u, &a);
            r31 = 0xffffffffu;
        } else {
            a.r[0] = rd32(0x817fd728u);
            a.r[1] = 0x817fd730u;
            a.r[2] = 0x40u;
            (void)tc_call(0x802669f4u, &a);
            r31 = rd32(0x817fd72cu);
            if ((s32)(rd32(0x817fd730u) - 0x40u) > 0) {
                r3 = tc_call(0x8026afc8u, &a);
                if (r3 != 0u) {
                    a.r[0] = r31;
                    (void)tc_call(0x80266cf8u, &a);
                    r31 = 0xffffffffu;
                } else {
                    a.r[0] = rd32(0x817fd728u);
                    a.r[1] = 0x817fd770u;
                    a.r[2] = rd32(0x817fd730u);
                    (void)tc_call(0x802669f4u, &a);
                }
            }
        }
        r3 = r31;
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
