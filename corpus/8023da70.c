#include "tc_rt.h"

void fn_8023da70(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_1 & 3u;
    r30 = (param_1 >> 2u) & 0x3fffffffu;
    wr32(0x800000ccu, r30);
    a.r[0] = param_1;
    r3 = tc_call(0x8023d958u, &a);
    wr16(0xcc002002u, 2u);
    wr32(0x817fdfe8u, 0u);
    while (rd32(0x817fdfe8u) < 0x3e8u) {
        wr32(0x817fdfe8u, rd32(0x817fdfe8u) + 1u);
    }
    wr16(0xcc002002u, 0u);
    wr16(0xcc002006u, rd16(r3 + 0x1au));
    wr16(0xcc002004u, (u16)(((u32)rd8(r3 + 0x1eu) & 0xffff00ffu) | (((u32)rd8(r3 + 0x1du) << 8u) & 0xff00u)));
    wr16(0xcc00200au, (u16)((u32)rd8(r3 + 0x1cu) | (((u32)rd8(r3 + 0x1fu) << 7u) & 0xffffff80u)));
    wr16(0xcc002008u, (u16)(((u32)rd16(r3 + 0x20u) << 1u) & 0xfffeu));
    if (rd32(0x80571718u) == 0u) {
        wr16(0xcc002072u, (u16)((u32)rd8(r3 + 0x22u) | 0x8000u));
        wr16(0xcc002074u, rd16(r3 + 0x24u));
    }
    wr16(0xcc002000u, (u16)rd8(r3));
    wr16(0xcc00200eu, (u16)((u32)rd16(r3 + 4u) + (((u32)rd16(r3 + 2u) << 1u) & 0xfffffffeu) - 2u));
    wr16(0xcc00200cu, (u16)((u32)rd16(r3 + 8u) + 2u));
    wr16(0xcc002012u, (u16)((u32)rd16(r3 + 6u) + (((u32)rd16(r3 + 2u) << 1u) & 0xfffffffeu) - 2u));
    wr16(0xcc002010u, (u16)((u32)rd16(r3 + 0xau) + 2u));
    wr16(0xcc002016u, (u16)((u32)rd8(r3 + 0xcu) | (((u32)rd16(r3 + 0x10u) << 5u) & 0xffffffe0u)));
    wr16(0xcc002014u, (u16)((u32)rd8(r3 + 0xeu) | (((u32)rd16(r3 + 0x14u) << 5u) & 0xffffffe0u)));
    wr16(0xcc00201au, (u16)((u32)rd8(r3 + 0xdu) | (((u32)rd16(r3 + 0x12u) << 5u) & 0xffffffe0u)));
    wr16(0xcc002018u, (u16)((u32)rd8(r3 + 0xfu) | (((u32)rd16(r3 + 0x16u) << 5u) & 0xffffffe0u)));
    wr16(0xcc002048u, 0x2828u);
    wr16(0xcc002036u, 1u);
    wr16(0xcc002034u, 0x1001u);
    r0 = (u32)rd16(r3 + 0x18u);
    r3 = (u32)rd16(r3 + 0x1au);
    wr16(0xcc002032u, (u16)(r3 + 1u));
    wr16(0xcc002030u, (u16)(((((r0 >> 1u) & 0x7fffffffu) + 1u) & 0xffffu) | 0x1000u));
    if ((s32)r30 >= 4 || (s32)r30 < 1) {
        r30 = 0u;
    }
    if (r31 <= 1u) {
        wr16(0xcc002002u, (u16)(((((r30 << 8u) & 0xffffff00u) | 1u) & 0xfffffffbu) | ((r31 << 2u) & 4u)));
        wr16(0xcc00206cu, 0u);
    } else {
        wr16(0xcc002002u, (u16)(((r30 << 8u) & 0xffffff00u) | 5u));
        wr16(0xcc00206cu, 1u);
    }
    return;
}
