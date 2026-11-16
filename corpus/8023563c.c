#include "tc_rt.h"

u32 fn_8023563c(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    if ((param_1 - 0x20000u) != 0x400u) {
        r4 = param_1 & 0xffffffu;
        if ((r4 - 0x60000u) != 0x2800u && (r4 - 0x20000u) != 0x3a00u) {
            r3 = r4 - 0x50000u;
            if (r3 != 0x3000u && (r4 - 0xb0000u) != 0x5a01u) {
                if (r3 != 0x2000u || (rd32(rd32(0x80571650u) + 8u) != 0x25u && rd32(0x80571654u) != 0x8023757cu)) {
                    wr32(0x805715d8u, rd32(0x805715d8u) + 1u);
                    if (rd32(0x805715d8u) != 2u) {
                        wr32(0x80571638u, r4);
                        if ((r4 - 0x30000u) == 0x1100u || rd32(rd32(0x80571650u) + 8u) == 5u) {
                            return 2u;
                        }
                        return 3u;
                    }
                    if (r4 != rd32(0x80571638u)) {
                        wr32(0x80571638u, r4);
                        return 2u;
                    }
                    wr32(0x80571638u, r4);
                    return 1u;
                }
                return 0u;
            }
        }
        return 0u;
    }
    wr32(0x80571638u, param_1);
    return 1u;
}
