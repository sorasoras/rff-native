#include "tc_rt.h"

u32 fn_8024cba4(void)
{
    return ((u32)rd16(0xcc005004u) >> 0xfu) & 1u;
}
