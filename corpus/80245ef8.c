#include "tc_rt.h"

void fn_80245ef8(s32 param_1)
{
    wr16((u32)param_1 + 0x38u, 0u);
    wr16((u32)param_1 + 0x6cu, 0u);
    wr32((u32)param_1 + 0x1cu, 0x18a80024u);
    wr16((u32)param_1 + 0xe2u, 0u);
    wr16((u32)param_1 + 0xeau, 0u);
    wr16((u32)param_1 + 0xfeu, 0u);
    wr16((u32)param_1 + 0x13cu, 0u);
    wr16((u32)param_1 + 0x132u, 0u);
    wr16((u32)param_1 + 0x134u, 0u);
    wr16((u32)param_1 + 0x136u, 0u);
    wr16((u32)param_1 + 0x138u, 0u);
    wr16((u32)param_1 + 0x13au, 0u);
    return;
}
