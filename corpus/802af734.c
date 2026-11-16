#include "tc_rt.h"

void fn_802af734(u32 param_1, s32 param_2)
{
    if (((u32)rd16((u32)param_2 + 0x12u) & 1u) != 0u) {
        wr8(param_1, rd8((u32)param_2 + 0xau));
    }
    if (((u32)rd16((u32)param_2 + 0x12u) & 2u) != 0u) {
        wr8(param_1 + 1u, rd8((u32)param_2 + 0xbu));
    }
    if (((u32)rd16((u32)param_2 + 0x12u) & 4u) != 0u) {
        wr8(param_1 + 2u, rd8((u32)param_2 + 0xcu));
    }
    if (((u32)rd16((u32)param_2 + 0x12u) & 8u) != 0u) {
        wr8(param_1 + 3u, rd8((u32)param_2 + 0xdu));
    }
    if (((u32)rd16((u32)param_2 + 0x12u) & 0x10u) != 0u) {
        wr8(param_1 + 4u, rd8((u32)param_2 + 0xeu));
    }
    if (((u32)rd16((u32)param_2 + 0x12u) & 0x3f00u) != 0u) {
        wr8(param_1 + 5u, rd8((u32)param_2 + 0xfu));
    }
    if (((u32)rd16((u32)param_2 + 0x12u) & 0x20u) != 0u) {
        wr8(param_1 + 7u, rd8((u32)param_2 + 0x10u));
    }
    if (((u32)rd16((u32)param_2 + 0x12u) & 0x40u) != 0u) {
        wr8(param_1 + 8u, rd8((u32)param_2 + 0x11u));
        return;
    }
    return;
}
