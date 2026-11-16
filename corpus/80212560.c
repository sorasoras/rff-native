#include "tc_rt.h"

void fn_80212560(void)
{
    if (rd32(0x804dfa6cu) != 0u) {
        wr32(0x804dfa78u, 0u);
        return;
    }
    wr32(0x804dfa78u, 1u);
    return;
}
