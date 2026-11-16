#include "tc_rt.h"

u32 fn_80329918(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0;
    (void)param_1;
    r0 = (u32)rd8(rd32((u32)param_2 + 0x24u) + 0x14au);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (c0lt) {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                return 0x80329994u;
            }
            if (!c0lt) {
                return 0x80329a68u;
            }
            return 0x80329994u;
        }
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            return 0x80329c50u;
        }
        if (!c0lt) {
            return 0x80329994u;
        }
        return 0x80329b40u;
    }
    return 0x80329b24u;
}
