#include "tc_rt.h"

u32 fn_8008d1b4(s32 param_1)
{
    if (param_1 >= 1 && param_1 <= 148) {
        return 1u;
    }
    if (((u32)param_1 == 0x95u || (u32)param_1 == 0x98u) || ((u32)param_1 == 0xa7u || (u32)param_1 == 0xaau)) {
        return 1u;
    }
    if ((u32)param_1 == 0x96u || (u32)param_1 == 0xa8u) {
        return 2u;
    }
    if (((u32)param_1 == 0x97u || (u32)param_1 == 0x99u) || ((u32)param_1 == 0xa9u || (u32)param_1 == 0xabu)) {
        return 0xcu;
    }
    return 1u;
}
