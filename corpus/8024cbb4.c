#include "tc_rt.h"

u32 fn_8024cbb4(void)
{
    return ((u32)rd16(0xcc005006u) & 0xffffu) | (((u32)rd16(0xcc005004u) << 0x10u) & 0xffff0000u);
}
