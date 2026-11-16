#include "tc_rt.h"

void fn_80004028(void)
{
    wr8(0x80571540u, 1u);
    return;
}
