#include "tc_rt.h"

u32 fn_8014a298(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = rd32(0x805712e8u) + (rd32(param_1) * 0x304u);
    r0 = rd32(r31 + 4u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r30 = 0x1000u;
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            r30 = 0x2000u;
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            r30 = 0x400u;
        } else if (!c0lt) {
            r30 = 0x800u;
        }
    }
    if ((((u32)rd8(r31 + 0xcu) >> 7u) & 1u) != 0u) {
        r30 = r30 | 0x8000u;
    }
    if ((((u32)rd8(r31 + 0xcu) >> 6u) & 1u) != 0u) {
        r30 = r30 | 0x100000u;
    }
    if ((((u32)rd8(r31 + 0xcu) >> 5u) & 1u) != 0u) {
        r30 = r30 | 0x200000u;
    }
    if ((((u32)rd8(r31 + 0xcu) >> 4u) & 1u) != 0u) {
        r30 = r30 | 0x400000u;
    }
    if ((((u32)rd8(r31 + 0xcu) >> 3u) & 1u) != 0u) {
        r30 = r30 | 0x800000u;
    }
    if (rd32(r31 + 0x10u) != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = ppc_mulhwu(0x446f8657u, r3);
        r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
        if ((s32)rd32(r31 + 0x10u) >= (s32)r3) {
            r30 = r30 | 0x1000000u;
        }
    }
    if (rd32(r31 + 0x14u) != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = ppc_mulhwu(0x446f8657u, r3);
        r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
        if ((s32)rd32(r31 + 0x14u) >= (s32)r3) {
            r30 = r30 | 0x2000000u;
        }
    }
    if (rd32(r31 + 0x18u) != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = ppc_mulhwu(0x446f8657u, r3);
        r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
        if ((s32)rd32(r31 + 0x18u) >= (s32)r3) {
            r30 = r30 | 0x4000000u;
        }
    }
    if (rd32(r31 + 0x1cu) != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = ppc_mulhwu(0x446f8657u, r3);
        r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
        if ((s32)rd32(r31 + 0x1cu) >= (s32)r3) {
            r30 = r30 | 0x8000000u;
        }
    }
    if (rd32(r31 + 0x20u) != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = ppc_mulhwu(0x446f8657u, r3);
        r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
        if ((s32)rd32(r31 + 0x20u) >= (s32)r3) {
            r30 = r30 | 0x10000000u;
        }
    }
    if (rd32(r31 + 0x24u) != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = ppc_mulhwu(0x446f8657u, r3);
        r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
        if ((s32)rd32(r31 + 0x24u) >= (s32)r3) {
            r30 = r30 | 0x20000000u;
        }
    }
    if (rd32(r31 + 0x28u) != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r5 = ppc_mulhwu(0x446f8657u, r3);
        r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
        if ((s32)rd32(r31 + 0x28u) >= (s32)r3) {
            r30 = r30 | 0x20000u;
        }
    }
    r3 = tc_call(0x80040b64u, &a);
    r3 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
    r3 = r3 + 1u;
    if ((s32)rd32(r31 + 0x34u) < (s32)r3) {
        r3 = tc_call(0x80040b64u, &a);
        r4 = r30 | 0x10u;
        r3 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
        r3 = r3 + 1u;
        if ((s32)rd32(r31 + 0x30u) >= (s32)r3) {
            r4 = r30 | 0x40u;
        }
        r30 = r4;
    } else {
        r30 = r30 | 0x80u;
    }
    return r30;
}
