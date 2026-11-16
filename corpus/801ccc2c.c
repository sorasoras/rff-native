#include "tc_rt.h"

u32 fn_801ccc2c(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xd08u;
    r3 = tc_call(0x80255850u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x802558bcu, &a);
        r30 = r3;
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801cf94cu, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801cffb4u, &a);
        r31 = r3;
        if (r3 != 0xbu) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x802558bcu, &a);
            wr32((u32)param_1 + 0xd04u, r31);
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801d0038u, &a);
            r31 = r3;
            if (r3 != 0xbu) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x802558bcu, &a);
                wr32((u32)param_1 + 0xd04u, r31);
                r3 = 0u;
            } else {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801d00a4u, &a);
                r31 = r3;
                if (r3 != 0xbu) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x802558bcu, &a);
                    wr32((u32)param_1 + 0xd04u, r31);
                    r3 = 0u;
                } else {
                    r3 = r30;
                }
            }
        }
    }
    return r3;
}
