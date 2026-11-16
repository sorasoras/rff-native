#include "tc_rt.h"

void fn_8028662c(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r9 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80289ba4u, &a);
    wr32(0x8050fe20u, 0u);
    wr16(0x80511068u, 0u);
    r5 = 0x8050f100u;
    wr16(0x80511088u, 0u);
    r9 = 0u;
    wr32(0x8050fe24u, 0u);
    wr16(0x8051106au, 0u);
    wr16(0x8051108au, 0u);
    wr32(0x8050fe28u, 0u);
    wr16(0x8051106cu, 0u);
    wr16(0x8051108cu, 0u);
    wr32(0x8050fe2cu, 0u);
    wr16(0x8051106eu, 0u);
    wr16(0x8051108eu, 0u);
    wr32(0x8050fe30u, 0u);
    wr16(0x80511070u, 0u);
    wr16(0x80511090u, 0u);
    wr32(0x8050fe34u, 0u);
    wr16(0x80511072u, 0u);
    wr16(0x80511092u, 0u);
    wr32(0x8050fe38u, 0u);
    wr16(0x80511074u, 0u);
    wr16(0x80511094u, 0u);
    wr32(0x8050fe3cu, 0u);
    wr16(0x80511076u, 0u);
    wr16(0x80511096u, 0u);
    wr32(0x8050fe40u, 0u);
    wr16(0x80511078u, 0u);
    wr16(0x80511098u, 0u);
    wr32(0x8050fe44u, 0u);
    wr16(0x8051107au, 0u);
    wr16(0x8051109au, 0u);
    wr32(0x8050fe48u, 0u);
    wr16(0x8051107cu, 0u);
    wr16(0x8051109cu, 0u);
    wr32(0x8050fe4cu, 0u);
    wr16(0x8051107eu, 0u);
    wr16(0x8051109eu, 0u);
    wr32(0x8050fe50u, 0u);
    wr16(0x80511080u, 0u);
    wr16(0x805110a0u, 0u);
    wr32(0x8050fe54u, 0u);
    wr16(0x80511082u, 0u);
    wr16(0x805110a2u, 0u);
    wr32(0x8050fe58u, 0u);
    wr16(0x80511084u, 0u);
    wr16(0x805110a4u, 0u);
    wr32(0x8050fe5cu, 0u);
    wr16(0x80511086u, 0u);
    wr16(0x805110a6u, 0u);
    wr32(0x8050f118u, 0x8050f158u);
    wr32(0x8050f114u, 0x8050f11cu);
    ctr = 3u;
    do {
        wr32(r5 + 0x1cu, ((5u - r9) * 0x60u) - 0x7faf0a5cu);
        if (r9 == 0u) {
            r0 = 0u;
        } else {
            r0 = ((r9 - 1u) * 0xcu) - 0x7faf0ee4u;
        }
        wr32(r5 + 0x20u, r0);
        if (r9 == 5u) {
            r0 = 0u;
        } else {
            r0 = ((r9 + 1u) * 0xcu) - 0x7faf0ee4u;
        }
        r9 = r9 + 1u;
        wr32(r5 + 0x24u, r0);
        wr32(r5 + 0x28u, ((5u - r9) * 0x60u) - 0x7faf0a5cu);
        if (r9 == 0u) {
            r0 = 0u;
        } else {
            r0 = ((r9 - 1u) * 0xcu) - 0x7faf0ee4u;
        }
        wr32(r5 + 0x2cu, r0);
        if (r9 == 5u) {
            r0 = 0u;
        } else {
            r0 = ((r9 + 1u) * 0xcu) - 0x7faf0ee4u;
        }
        wr32(r5 + 0x30u, r0);
        r5 = r5 + 0x18u;
        r9 = r9 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(0x8050f168u, 0x8050f1d8u);
    r5 = 0x8050f100u;
    r4 = 0x8050f1e4u;
    r6 = 0u;
    wr32(0x8050f164u, 0x8050f16cu);
    ctr = 5u;
    do {
        wr32(r5 + 0x6cu, r4);
        if (r6 == 0u) {
            r0 = 0u;
        } else {
            r0 = ((r6 - 1u) * 0xcu) - 0x7faf0e94u;
        }
        wr32(r5 + 0x70u, r0);
        if (r6 == 9u) {
            r0 = 0u;
        } else {
            r0 = ((r6 + 1u) * 0xcu) - 0x7faf0e94u;
        }
        wr32(r5 + 0x74u, r0);
        r4 = r4 + 0x60u;
        r6 = r6 + 1u;
        wr32(r5 + 0x78u, r4);
        if (r6 == 0u) {
            r0 = 0u;
        } else {
            r0 = ((r6 - 1u) * 0xcu) - 0x7faf0e94u;
        }
        wr32(r5 + 0x7cu, r0);
        if (r6 == 9u) {
            r0 = 0u;
        } else {
            r0 = ((r6 + 1u) * 0xcu) - 0x7faf0e94u;
        }
        wr32(r5 + 0x80u, r0);
        r4 = r4 + 0x60u;
        r5 = r5 + 0x18u;
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr8(0x8050f10cu, 0u);
    wr8(0x8050f10eu, 0u);
    wr8(0x8050f10du, 0u);
    wr8(0x8050f10fu, 0u);
    wr8(0x8050f110u, 0u);
    wr8(0x8050f111u, 0u);
    wr8(0x8050f7e7u, 0u);
    wr8(0x8050f7e9u, 0u);
    wr8(0x8050f7e8u, 1u);
    wr8(0x8050f7eau, 0u);
    wr8(0x8050f7ebu, 0u);
    wr8(0x8050f808u, 0u);
    wr8(0x8050f80au, 0u);
    wr8(0x8050f80bu, 0xbfu);
    a.r[0] = 0x8050f802u;
    a.r[1] = 0u;
    a.r[2] = 6u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x8050f7fcu;
    a.r[1] = 0u;
    a.r[2] = 6u;
    (void)tc_call(0x8000443cu, &a);
    wr16(0x8050f844u, 0u);
    wr16(0x8050f846u, 0xau);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = 0x8050f1e4u;
    a.r[1] = 0u;
    a.r[2] = 0x3c0u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x8050f5a4u;
    a.r[1] = 0u;
    a.r[2] = 0x240u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x8050f112u, 0u);
    wr8(0x8050f113u, 0u);
    wr8(0x8050f7e4u, 0u);
    wr8(0x8050f7e5u, 0u);
    wr8(0x8050f7e6u, 0u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
