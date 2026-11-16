#include "tc_rt.h"

u32 fn_8022c3e4(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r5 = 0;
    r0 = ppc_cntlzw(param_1);
    if ((s32)r0 >= 12) {
        if ((s32)r0 >= 17) {
            if ((s32)r0 >= 28) {
                return param_1;
            }
            r5 = 0xf0u;
            if ((param_2 & 0x4000u) == 0u) {
                r5 = 0x8f0u;
            }
            if ((param_2 & 0x800u) == 0u) {
                r5 = r5 | 8u;
            }
            if ((param_2 & 0x400u) == 0u) {
                r5 = r5 | 4u;
            }
            if ((param_2 & 0x200u) == 0u) {
                r5 = r5 | 2u;
            }
            if ((param_2 & 0x100u) == 0u) {
                r5 = r5 | 1u;
            }
            if ((param_2 & 0x80u) == 0u) {
                r5 = r5 | 0x100u;
            }
            if ((param_2 & 0x40u) == 0u) {
                r5 = r5 | 0x1000u;
            }
            if ((param_2 & 0x2000u) == 0u) {
                r5 = r5 | 0x200u;
            }
            if ((param_2 & 0x1000u) == 0u) {
                r5 = r5 | 0x400u;
            }
            if ((param_2 & 0x20u) == 0u) {
                r5 = r5 | 0x2000u;
            }
            if ((param_2 & 0x10u) == 0u) {
                r5 = r5 | 0x4000u;
            }
            wr32(0xcc003004u, r5);
            return param_1 & 0xffff800fu;
        }
        if ((s32)r0 >= 15) {
            r5 = rd32(0xcd006828u) & 0xfffffff0u;
            if ((param_2 & 0x10000u) == 0u) {
                r5 = r5 | 1u;
            }
            if ((param_2 & 0x8000u) == 0u) {
                r5 = r5 | 4u;
            }
            wr32(0xcd006828u, r5);
            return param_1 & 0xfffe7fffu;
        }
        r5 = rd32(0xcd006814u) & 0xfffff3f0u;
        if ((param_2 & 0x80000u) == 0u) {
            r5 = r5 | 1u;
        }
        if ((param_2 & 0x40000u) == 0u) {
            r5 = r5 | 4u;
        }
        if ((param_2 & 0x20000u) == 0u) {
            r5 = r5 | 0x400u;
        }
        wr32(0xcd006814u, r5);
        return param_1 & 0xfff1ffffu;
    }
    c0lt = (s32)r0 < 8;
    if (r0 == 8u) {
        r5 = rd32(0xcd006c00u) & 0xffffffd3u;
        if ((param_2 & 0x800000u) == 0u) {
            r5 = r5 | 4u;
        }
        wr32(0xcd006c00u, r5);
        return param_1 & 0xff7fffffu;
    }
    if (!c0lt) {
        r5 = rd32(0xcd006800u) & 0xffffd3f0u;
        if ((param_2 & 0x400000u) == 0u) {
            r5 = r5 | 1u;
        }
        if ((param_2 & 0x200000u) == 0u) {
            r5 = r5 | 4u;
        }
        if ((param_2 & 0x100000u) == 0u) {
            r5 = r5 | 0x400u;
        }
        wr32(0xcd006800u, r5);
        return param_1 & 0xff8fffffu;
    }
    if ((s32)r0 >= 5) {
        r5 = (u32)rd16(0xcc00500au) & 0xfffffe07u;
        if ((param_2 & 0x4000000u) == 0u) {
            r5 = r5 | 0x10u;
        }
        if ((param_2 & 0x2000000u) == 0u) {
            r5 = r5 | 0x40u;
        }
        if ((param_2 & 0x1000000u) == 0u) {
            r5 = r5 | 0x100u;
        }
        wr16(0xcc00500au, (u16)r5);
        return param_1 & 0xf8ffffffu;
    }
    if ((s32)r0 >= 0) {
        r5 = 0u;
        if ((param_2 & 0x80000000u) == 0u) {
            r5 = 1u;
        }
        if ((param_2 & 0x40000000u) == 0u) {
            r5 = r5 | 2u;
        }
        if ((param_2 & 0x20000000u) == 0u) {
            r5 = r5 | 4u;
        }
        if ((param_2 & 0x10000000u) == 0u) {
            r5 = r5 | 8u;
        }
        if ((param_2 & 0x8000000u) == 0u) {
            r5 = r5 | 0x10u;
        }
        wr16(0xcc00401cu, (u16)r5);
        return param_1 & 0x7ffffffu;
    }
    return param_1;
}
