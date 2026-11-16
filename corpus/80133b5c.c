#include "tc_rt.h"

u32 fn_80133b5c(void)
{
    u32 ctr = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = 0x817fdfccu;
    wr16(0x817fdfc8u, 0x2e8u);
    wr8(0x817fdfcau, 1u);
    wr8(0x817fdfcbu, 1u);
    ctr = 5u;
    do {
        wr16(r6, 0x2e8u);
        wr8(r6 + 2u, 1u);
        wr8(r6 + 3u, 1u);
        r6 = r6 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr8(0x817fdfecu, 0u);
    wr8(0x817fdfedu, 0u);
    wr8(0x817fdfeeu, 0u);
    wr32(0x817fdff0u, 0xffffffffu);
    wr32(0x817fdff4u, 0xffffffffu);
    wr32(0x817fdff8u, 0xffffffffu);
    wr16(0x817fdfe0u, 0x2e8u);
    wr8(0x817fdfe2u, 1u);
    wr8(0x817fdfe3u, 1u);
    wr16(0x817fdfe4u, 0x2e8u);
    wr8(0x817fdfe6u, 1u);
    wr8(0x817fdfe7u, 1u);
    wr16(0x817fdfc8u, 0x2e8u);
    wr8(0x817fdfcau, 1u);
    wr8(0x817fdfcbu, 1u);
    wr16(0x817fdfccu, 0x2e8u);
    wr8(0x817fdfceu, 1u);
    wr8(0x817fdfcfu, 1u);
    wr16(0x817fdfd0u, 0x2e8u);
    wr8(0x817fdfd2u, 1u);
    wr8(0x817fdfd3u, 1u);
    wr16(0x817fdfd4u, 0x2e8u);
    wr8(0x817fdfd6u, 1u);
    wr8(0x817fdfd7u, 1u);
    wr16(0x817fdfd8u, 0x2e8u);
    wr8(0x817fdfdau, 1u);
    wr8(0x817fdfdbu, 1u);
    wr16(0x817fdfdcu, 0x2e8u);
    wr8(0x817fdfdeu, 1u);
    wr8(0x817fdfdfu, 1u);
    wr32(0x817fdfe8u, 0xffffffffu);
    a.r[0] = 0x817fdfc8u;
    (void)tc_call(0x80198ea8u, &a);
    return 0u;
}
