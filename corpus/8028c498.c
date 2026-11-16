#include "tc_rt.h"

void fn_8028c498(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = 0x80539bc0u;
    a.r[1] = 0u;
    a.r[2] = 0x4cu;
    (void)tc_call(0x8000443cu, &a);
    (void)tc_call(0x8028b7a8u, &a);
    r30 = 0x80539bc0u;
    wr8(0x80539be9u, 5u);
    (void)tc_call(0x8028b784u, &a);
    if ((u32)rd8(0x80571b51u) == 0u) {
        wr8(0x80539be8u, 0u);
        wr8(0x80571b51u, 1u);
    }
    r3 = tc_call(0x8026f178u, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x802b72e8u, &a);
        if (r3 == 0u) {
            c0eq = (u32)rd8(0x80571b5cu) == 1u;
            wr32(0x80539be4u, param_1);
            if (!c0eq) {
                wr32(0x80539bd4u, 0x57eu);
                wr32(0x80539bd8u, 0x305u);
            } else {
                r0 = rd32(0x80571b64u);
                wr32(0x80539bd4u, rd32(0x80571b60u));
                wr32(0x80539bd8u, r0);
            }
            c0eq = rd32(0x80571b58u) == 1u;
            wr8(0x80539bd0u, 0u);
            r5 = rd32(0x80539bd8u);
            wr8(0x80539bd1u, 0u);
            r0 = rd32(0x80539bd4u);
            wr8(0x80539bd2u, 0u);
            wr8(0x80539bd3u, 0u);
            if (!c0eq) {
                r5 = r5 & 0xffffu;
                a.r[0] = 0x80570ddcu;
                a.r[1] = r0 & 0xffffu;
                a.r[2] = r5;
                a.r[3] = 0x80539bc0u;
                r3 = tc_call(0x802b7590u, &a);
                r30 = r3;
            } else {
                r3 = rd32(0x80571b54u);
                if (r3 != 0u) {
                    if (r3 == 1u) {
                        r5 = r5 & 0xffffu;
                        a.r[0] = 0x80570ddcu;
                        a.r[1] = r0 & 0xffffu;
                        a.r[2] = r5;
                        a.r[3] = 0x80539bc0u;
                        r3 = tc_call(0x802b7590u, &a);
                        r30 = r3;
                    }
                } else {
                    r5 = r5 & 0xffffu;
                    a.r[0] = 0x80570dd8u;
                    a.r[1] = r0 & 0xffffu;
                    a.r[2] = r5;
                    a.r[3] = 0x80539bc0u;
                    r3 = tc_call(0x802b7590u, &a);
                    r30 = r3;
                }
            }
            if ((s32)r30 >= 0) {
                wr32(0x80570dd4u, r30);
            }
            if ((s32)r30 >= 0) {
                wr8(0x80539bd0u, 2u);
                wr8(0x80539bd1u, 0x82u);
                wr8(0x80539bd2u, 0x81u);
                wr8(0x80539bd3u, 0u);
                a.r[0] = 0x80539becu;
                (void)tc_call(0x8028a0c0u, &a);
                wr8(0x80539bf8u, 0u);
                a.r[0] = 0x80539bfcu;
                (void)tc_call(0x8028a0c0u, &a);
                wr8(0x80539c08u, 0u);
                a.r[0] = 0x294u;
                a.r[1] = 0x2du;
                a.r[2] = 1u;
                a.r[3] = 0u;
                r3 = tc_call(0x8028ab90u, &a);
                wr8(0x80539bdcu, (u8)r3);
                a.r[0] = 0x708u;
                a.r[1] = 0x1eu;
                a.r[2] = 1u;
                a.r[3] = 0u;
                r3 = tc_call(0x8028ab90u, &a);
                r0 = (u32)rd8(0x80539bdcu);
                wr8(0x80539bddu, (u8)r3);
                if (r0 != 0xffu && (r3 & 0xffu) != 0xffu) {
                    (void)tc_call(0x8028b7a8u, &a);
                    wr8(0x80539be9u, 4u);
                    (void)tc_call(0x8028b784u, &a);
                    wr32(0x80570dd0u, 1u);
                }
            }
        }
    }
    return;
}
