#include "tc_rt.h"

void fn_802ddb80(void)
{
    if (rd32(0x805480ecu) == 0u) {
        wr32(0x805480ecu, 1u);
        wr32(0x805480e8u, 0u);
        return;
    }
    return;
}
