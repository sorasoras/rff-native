#include "tc_rt.h"

u32 fn_8018c474(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x84u) - 1u;
    wr32((u32)param_1 + 0x84u, r0);
    if (r0 == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8018ceb4u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 3u;
            (void)tc_call(0x8018d5ecu, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x10b2u;
            (void)tc_call(0x8010a74cu, &a);
            return 1u;
        }
        if (r3 == 1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 2u;
            (void)tc_call(0x8018d5ecu, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x10b2u;
            (void)tc_call(0x8010a74cu, &a);
            return 1u;
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x10b3u;
        (void)tc_call(0x8010a74cu, &a);
    } else {
        if (r0 == 0xfffffff1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 2u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            (void)tc_call(0x8018d1e8u, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8018d1c8u, &a);
        }
    }
    return 1u;
}
