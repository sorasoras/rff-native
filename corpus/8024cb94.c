#include "tc_rt.h"

u32 fn_8024cb94(void)
{
    return ((u32)rd16(0xcc005000u) >> 0xfu) & 1u;
}
