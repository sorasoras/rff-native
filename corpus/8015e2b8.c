#include "tc_rt.h"

void fn_8015e2b8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    r0 = rd32((u32)param_1 + 0xf8u);
    wr32((u32)param_1 + 0x144u, 0x1068u);
    c0lt = (s32)r0 < 18;
    if (r0 != 0x12u) {
        if (c0lt) {
            c0lt = (s32)r0 < 16;
            if (r0 == 0x10u) {
                wr32((u32)param_1 + 0x144u, 0x106fu);
                return;
            }
            if (!c0lt) {
                wr32((u32)param_1 + 0x144u, 0x108au);
                return;
            }
            return;
        }
        if ((s32)r0 < 51) {
            if ((s32)r0 >= 22) {
                return;
            }
            wr32((u32)param_1 + 0x144u, 0x1070u);
            return;
        }
        if ((s32)r0 >= 55) {
            return;
        }
        wr32((u32)param_1 + 0x144u, 0x106fu);
        return;
    }
    return;
}
