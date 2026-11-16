#include "tc_rt.h"

void fn_80052dd8(void)
{
    TcArgs a = {0};
    if (rd32(0x803d115cu) != 0u) {
        (void)tc_call(0x801f87a4u, &a);
        return;
    }
    return;
}
