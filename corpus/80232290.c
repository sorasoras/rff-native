#include "tc_rt.h"

u32 fn_80232290(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    a.r[0] = 0x80386c40u;
    a.r[1] = 0x3fu;
    a.r[2] = 0u;
    r3 = tc_call(0x80270e54u, &a);
    r31 = r3;
    if (r3 == 0u || r3 == 0xfffffffau) {
        a.r[0] = 0x80386c40u;
        a.r[1] = 0x817fdf40u;
        a.r[2] = 2u;
        r3 = tc_call(0x80271af0u, &a);
        r31 = r3;
        if (r3 == 0u) {
            r30 = 1u;
            r3 = tc_call(0x802de0e8u, &a);
            r31 = r3;
            if (r3 == 0u) {
                a.r[0] = 0x817fdf20u;
                a.r[1] = 0u;
                a.r[2] = 0x20u;
                (void)tc_call(0x8000443cu, &a);
                a.r[0] = 0x817fdf20u;
                r3 = tc_call(0x802de670u, &a);
                r31 = r3;
                if (r3 == 0u) {
                    a.r[0] = 0x817fdf40u;
                    a.r[1] = 0x817fdf20u;
                    a.r[2] = 0x20u;
                    r3 = tc_call(0x80271228u, &a);
                    r31 = r3;
                    if ((s32)r3 >= 0) {
                        if (r3 != 0x20u) {
                            r31 = 0xfffffff8u;
                        } else {
                            r31 = 0u;
                        }
                    }
                }
            }
        }
    }
    if (r30 != 0u) {
        a.r[0] = 0x817fdf40u;
        (void)tc_call(0x80271ce4u, &a);
    }
    if (r31 == 0u) {
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
