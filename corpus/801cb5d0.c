#include "tc_rt.h"

s32 fn_801cb5d0(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0;
    c0lt = param_3 < 1;
    if ((u32)param_3 != 1u) {
        if (c0lt) {
            if (param_3 >= 0) {
                return (s32)(s16)rd16(rd32(param_1) + (((u32)param_2 << 3u) & 0xfffffff8u) + 2u);
            }
            return -1;
        }
        if (param_3 >= 3) {
            return -1;
        }
        return (s32)(s16)rd16(rd32(param_1) + (((u32)param_2 << 3u) & 0xfffffff8u) + 6u);
    }
    return (s32)(s16)rd16(rd32(param_1) + (((u32)param_2 << 3u) & 0xfffffff8u) + 4u);
}
