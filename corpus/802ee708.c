#include "tc_rt.h"

void fn_802ee708(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r7 = 0, r8 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    a.r[0] = (u32)param_2;
    a.r[1] = 0x524c414eu;
    r3 = tc_call(0x802ef398u, &a);
    if (r3 != 0u) {
        r3 = (u32)rd16((u32)param_2 + 6u);
        r0 = r3 & 0xffu;
        if (((r3 >> 8u) & 0xffu) == 0u && r0 >= 8u && r0 <= 0xau) {
            r30 = 1u;
        }
        if (r30 != 0u) {
            r0 = (u32)rd16((u32)param_2 + 0xcu);
            wr32(param_1, (u32)param_2);
            r7 = (u32)param_2 + r0;
            r8 = 0u;
            while ((s32)r8 < (s32)rd16(rd32(param_1) + 0xeu)) {
                r0 = rd32(r7);
                c0lt = (s32)r0 < 1885432113;
                if (r0 == 0x70616931u) {
                    wr32(param_1 + 4u, r7);
                } else if (!c0lt) {
                    if (r0 == 0x70617431u) {
                        wr32(param_1 + 8u, r7);
                    }
                } else if (r0 == 0x70616831u) {
                    wr32(param_1 + 0xcu, r7);
                }
                r8 = r8 + 1u;
                r7 = r7 + rd32(r7 + 4u);
            }
        }
    }
    return;
}
