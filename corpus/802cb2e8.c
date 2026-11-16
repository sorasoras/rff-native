#include "tc_rt.h"

void fn_802cb2e8(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0xffffffffu;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80275d08u, &a);
    if (r3 != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x80276158u, &a);
        if (r3 != 0u) {
            if ((u32)param_3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = param_4;
                r3 = tc_call(0x802cb20cu, &a);
                r31 = r3;
            } else {
                wr8(0x817fdfc8u, (u8)(((u32)param_3 >> 0x18u) & 0xffu));
                wr8(0x817fdfc9u, (u8)(((u32)param_3 >> 0x10u) & 0xffffu));
                wr8(0x817fdfcau, (u8)(((u32)param_3 >> 8u) & 0xffffffu));
                wr8(0x817fdfcbu, (u8)param_3);
                wr8(0x817fdfccu, 0u);
                a.r[0] = param_1;
                a.r[1] = 0x817fdfc8u;
                r3 = tc_call(0x80275d08u, &a);
                if (r3 != 0xffffffffu) {
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdfc8u;
                    r3 = tc_call(0x80276158u, &a);
                    if (r3 != 0u) {
                        a.r[0] = param_1;
                        a.r[1] = param_4;
                        r3 = tc_call(0x80275d08u, &a);
                        r31 = r3;
                        a.r[0] = param_1;
                        a.r[1] = 0x80399af4u;
                        (void)tc_call(0x80276158u, &a);
                    }
                }
            }
            a.r[0] = param_1;
            a.r[1] = 0x80399af4u;
            (void)tc_call(0x80276158u, &a);
        }
    }
    if (r31 != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x80275cb8u, &a);
        a.r[0] = 0x817fdfd0u;
        (void)tc_call(0x80276134u, &a);
        if (param_5 != 0u) {
            a.r[0] = 0x817fdfd0u;
            r3 = tc_call(0x80276148u, &a);
            wr32(param_5, r3);
        }
        (void)tc_call(0x80276150u, &a);
    }
    return;
}
