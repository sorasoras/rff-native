#include "tc_rt.h"

s32 fn_801220e4(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x28u, 0x803630ecu);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801972a4u, &a);
        r29 = 0u;
        r30 = 0u;
        while (r29 < rd32((u32)param_1 + 0x38u)) {
            r3 = rd32((u32)param_1 + 0x34u) + r30;
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            (void)tc_call(0x80161ac4u, &a);
            r30 = r30 + 0xd0u;
            r29 = r29 + 1u;
        }
        a.r[0] = rd32((u32)param_1 + 0x34u);
        a.r[1] = 0x801221f8u;
        a.r[2] = 0x80122258u;
        a.r[3] = 0u;
        (void)tc_call(0x80255794u, &a);
        r3 = (u32)param_1 + 0x1a8u;
        wr32((u32)param_1 + 0x34u, 0u);
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x30cu, 0x80360450u);
            a.r[0] = r3;
            (void)tc_call(0x8007ae84u, &a);
            r3 = (u32)param_1 + 0x1a8u;
            c0eq = r3 == 0u;
            if (!c0eq && !c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8007ae30u, &a);
            }
        }
        r3 = (u32)param_1 + 0x40u;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x1a4u, 0x80360450u);
            a.r[0] = r3;
            (void)tc_call(0x8007ae84u, &a);
            r3 = (u32)param_1 + 0x40u;
            c0eq = r3 == 0u;
            if (!c0eq && !c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8007ae30u, &a);
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8019720cu, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}
