#include "tc_rt.h"

u32 fn_80242cb8(void)
{
    return ((u32)rd16(0xcc005032u) & 0xffe0u) | (((u32)rd16(0xcc005030u) << 0x10u) & 0x1fff0000u);
}
