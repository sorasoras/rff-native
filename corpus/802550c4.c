#include "tc_rt.h"

void fn_802550c4(void)
{
    wr16(rd32(0x80571954u) + 4u, 4u);
    return;
}
