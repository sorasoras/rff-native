#include "tc_rt.h"

void fn_8028bd88(u32 param_1, u32 param_2, u32 param_3)
{
    wr8(0x80539ba6u, 0u);
    wr8(0x80539ba2u, 0u);
    wr8(0x80539ba3u, 0u);
    wr8(0x80539ba4u, 0u);
    wr8(0x80539ba7u, (u8)param_1);
    wr8(0x80539ba8u, (u8)param_2);
    wr16(0x80539b9au, (u16)param_3);
    return;
}
