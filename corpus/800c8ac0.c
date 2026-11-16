#include "tc_rt.h"

u32 fn_800c8ac0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0;
    c0lt = param_3 < 1;
    r3 = (u32)param_1 + ((u32)param_2 * 0x60u);
    if ((u32)param_3 != 1u) {
        if (c0lt) {
            if (param_3 >= 0) {
                r3 = (u32)rd8(r3 + 0x48u);
                return r3;
            }
            r3 = (u32)rd8(r3 + 0x4bu);
            return r3;
        }
        if (param_3 >= 3) {
            r3 = (u32)rd8(r3 + 0x4bu);
            return r3;
        }
        r3 = (u32)rd8(r3 + 0x4au);
        return r3;
    }
    r3 = (u32)rd8(r3 + 0x49u);
    return r3;
}
