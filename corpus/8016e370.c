#include "tc_rt.h"

static u64 px_f2b(f64 x){union{f64 d;u64 b;}v;v.d=x;return v.b;}

static f64 px_b2f(u64 x){union{f64 d;u64 b;}v;v.b=x;return v.d;}

static f32 px_w2f(u32 x){union{f32 f;u32 w;}v;v.w=x;return v.f;}

static f64 px_lo(f64 x){return(f64)px_w2f((u32)px_f2b(x));}

static f64 px_pq(f64 x){u64 b=px_f2b(x);if((b&0x7ff0000000000000ull)==0x7ff0000000000000ull&&(b&0x000fffffffffffffull)!=0)
return px_b2f(b|0x0008000000000000ull);return x;}

static f64 px_padd(f64 a,f64 b){f64 r=a+b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_psub(f64 a,f64 b){f64 r=a-b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pmul(f64 a,f64 c){f64 r=a*c;if(r!=r){if(a!=a)return px_pq(a);if(c!=c)return px_pq(c);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pfnm(f64 x){return x!=x?x:-x;}

static f64 px_sfma(f64 a,f64 c,f64 b){f64 s=a*c+b;if(s!=s){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);if(c!=c)return px_pq(c);
return px_b2f(0x7ff8000000000000ull);}return s;}

static f64 px_sfms(f64 a,f64 c,f64 b){f64 s=a*c-b;if(s!=s){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);if(c!=c)return px_pq(c);
return px_b2f(0x7ff8000000000000ull);}return s;}

void fn_8016e370(u32 param_r3){
u32 fl_=0,lr=0,r0=0,r1=0,r3=0,r4=tc_argr(1u),r5=tc_argr(2u),r6=tc_argr(3u),r7=tc_argr(4u),r8=tc_argr(5u),r9=tc_argr(6u),r10=tc_argr(7u);
u32 r11=tc_argr(8u),r12=tc_argr(9u),r22=0,r23=0,r24=0,r25=0,r26=0,r27=0,r28=0,r29=0,r30=0,r31=0;u32 t36=0,t39=0,t42=0,t45=0,t48=0,t51=0;
f64 f0=0.0,f1=tc_argf(0u),f2=tc_argf(1u),f3=tc_argf(2u),f4=tc_argf(3u),f5=tc_argf(4u),f6=tc_argf(5u),f7=tc_argf(6u),f8=tc_argf(7u),f9=0.0,f26=0.0,f27=0.0;
f64 f28=0.0,f29=0.0,f30=0.0,f31=0.0,t37=0.0,t38=0.0,t40=0.0,t41=0.0,t43=0.0,t44=0.0,t46=0.0,t47=0.0;f64 t49=0.0,t50=0.0,t52=0.0,t53=0.0;TcArgs a={0};
TcArgs za={0};r1=0x817fe000u;lr=0x817ff000u;r3=param_r3;for(;;){wr32(r1-0x90u,r1);r1=r1-0x90u;wr32(r1+0x94u,lr);wrf64(r1+0x80u,f31);wrf32d(r1+0x88u,px_lo(f31));
wrf64(r1+0x70u,f30);wrf32d(r1+0x78u,px_lo(f30));wrf64(r1+0x60u,f29);wrf32d(r1+0x68u,px_lo(f29));wrf64(r1+0x50u,f28);wrf32d(r1+0x58u,px_lo(f28));
wrf64(r1+0x40u,f27);wrf32d(r1+0x48u,px_lo(f27));wrf64(r1+0x30u,f26);wrf32d(r1+0x38u,px_lo(f26));r11=r1+0x30u;wr32(r11-0x28u,r22);wr32(r11-0x24u,r23);
wr32(r11-0x20u,r24);wr32(r11-0x1cu,r25);wr32(r11-0x18u,r26);wr32(r11-0x14u,r27);wr32(r11-0x10u,r28);wr32(r11-0xcu,r29);wr32(r11-8u,r30);wr32(r11-4u,r31);r23=r3;
a=za;a.r[0]=r3;r3=tc_call(0x80171dacu,&a);f1=tc_lastf();r24=r23;r25=0u;do{r0=rd32(r24+0x1804u);if(r0!=0u){r22=r0*0xcu;a=za;r3=tc_call(0x800545e4u,&a);
f1=tc_lastf();r6=r3;if(r22!=0u){if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;
a.r[3]=r6;r3=tc_call(0x80040cd8u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=0x20u;a.r[2]=r22;r3=tc_call(0x80094e80u,&a);f1=tc_lastf();}}else{
r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040db8u,&a);f1=tc_lastf();}}else{r3=0u;}
wr32(r24+0x1798u,r3);}r25=r25+1u;r24=r24+4u;}while((s32)r25<3);r7=0u;r6=0u;while(r7<rd32(r23+0x1804u)){r7=r7+1u;wr32(rd32(r23+0x1798u)+r6,0u);
r3=rd32(r23+0x1798u)+r6;r6=r6+0xcu;wr32(r3+4u,0u);}r7=0u;r6=0u;while(r7<rd32(r23+0x1808u)){r7=r7+1u;wr32(rd32(r23+0x179cu)+r6,0u);r3=rd32(r23+0x179cu)+r6;
r6=r6+0xcu;wr32(r3+4u,0u);}r5=r23+8u;r7=0u;r6=0u;while(r7<rd32(r5+0x1804u)){r7=r7+1u;wr32(rd32(r5+0x1798u)+r6,0u);r3=rd32(r5+0x1798u)+r6;r6=r6+0xcu;
wr32(r3+4u,0u);}r25=0u;r29=0x80499060u;r22=0u;r28=0u;r27=0u;r26=0u;r31=0x80470000u;r30=1u;do{r24=(u32)rd16(r22-0x7fb66dc0u);a=za;a.r[0]=r24;
r3=tc_call(0x800cd6e4u,&a);f1=tc_lastf();if(r24!=0x2e8u){r0=r3&0xffu;r3=((r0&0x20u)!=0u)?0u:(1u<<(r0&0x1fu));if((r3&0x1fe0u)==0u){if((r3&0x1e000u)==0u){
if((r3&0x60000u)!=0u){wr8(rd32(r23+0x17a0u)+r26+8u,(u8)r25);a=za;a.r[0]=0x80472f48u;a.r[1]=r24;r3=tc_call(0x800bede4u,&a);f1=tc_lastf();
wr32(rd32(r23+0x17a0u)+r26,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r4=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r3=rd32(r3);a=za;a.r[0]=r3;
a.r[1]=0x48u;a.r[2]=rd32(r4+0xcu);a.r[3]=r4+0x18u;r3=tc_call(0x80040cd8u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=0x20u;a.r[2]=0x48u;
r3=tc_call(0x80094e80u,&a);f1=tc_lastf();}r24=r3;}else{r3=rd32(r3);a=za;a.r[0]=r3;a.r[1]=0x48u;a.r[2]=rd32(r4+0xcu);a.r[3]=r4+0x18u;r3=tc_call(0x80040db8u,&a);
f1=tc_lastf();r24=r3;}if(r3!=0u){r4=rd32(r23+0x17a0u);r3=r3;r4=rd32(r4+r26);a=za;a.r[0]=r3;a.r[1]=r4;r3=tc_call(0x800514a0u,&a);f1=tc_lastf();}
r3=rd32(r23+0x17a0u)+r26;r26=r26+0xcu;wr32(r3+4u,r24);}}else{wr8(rd32(r23+0x179cu)+r27+8u,(u8)r25);a=za;a.r[0]=0x80472f48u;a.r[1]=r24;
r3=tc_call(0x800bede4u,&a);f1=tc_lastf();wr32(rd32(r23+0x179cu)+r27,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r4=r3;if(rd32(r3+0x10u)==0u){
if(rd32(r3+0x20u)==0u){r3=rd32(r3);a=za;a.r[0]=r3;a.r[1]=0x48u;a.r[2]=rd32(r4+0xcu);a.r[3]=r4+0x18u;r3=tc_call(0x80040cd8u,&a);f1=tc_lastf();}else{r3=r3+0x24u;
a=za;a.r[0]=r3;a.r[1]=0x20u;a.r[2]=0x48u;r3=tc_call(0x80094e80u,&a);f1=tc_lastf();}r24=r3;}else{r3=rd32(r3);a=za;a.r[0]=r3;a.r[1]=0x48u;a.r[2]=rd32(r4+0xcu);
a.r[3]=r4+0x18u;r3=tc_call(0x80040db8u,&a);f1=tc_lastf();r24=r3;}if(r3!=0u){r4=rd32(r23+0x179cu);r3=r3;r4=rd32(r4+r27);a=za;a.r[0]=r3;a.r[1]=r4;
r3=tc_call(0x800514a0u,&a);f1=tc_lastf();}r3=rd32(r23+0x179cu)+r27;r27=r27+0xcu;wr32(r3+4u,r24);}}else{wr8(rd32(r23+0x1798u)+r28+8u,(u8)r25);a=za;
a.r[0]=0x80472f48u;a.r[1]=r24;r3=tc_call(0x800bede4u,&a);f1=tc_lastf();wr32(rd32(r23+0x1798u)+r28,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r4=r3;
if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r3=rd32(r3);a=za;a.r[0]=r3;a.r[1]=0x48u;a.r[2]=rd32(r4+0xcu);a.r[3]=r4+0x18u;r3=tc_call(0x80040cd8u,&a);
f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=0x20u;a.r[2]=0x48u;r3=tc_call(0x80094e80u,&a);f1=tc_lastf();}r24=r3;}else{r3=rd32(r3);a=za;a.r[0]=r3;
a.r[1]=0x48u;a.r[2]=rd32(r4+0xcu);a.r[3]=r4+0x18u;r3=tc_call(0x80040db8u,&a);f1=tc_lastf();r24=r3;}if(r3!=0u){r4=rd32(r23+0x1798u);r3=r3;r4=rd32(r4+r28);a=za;
a.r[0]=r3;a.r[1]=r4;r3=tc_call(0x800514a0u,&a);f1=tc_lastf();}r3=rd32(r23+0x1798u)+r28;r28=r28+0xcu;wr32(r3+4u,r24);}}r25=r25+1u;r22=r22+4u;}while((s32)r25<60);
a=za;a.r[0]=r23;r3=tc_call(0x80171eecu,&a);f1=tc_lastf();a=za;a.r[0]=r23;a.r[1]=3u;r3=tc_call(0x80172618u,&a);f1=tc_lastf();if(r3==0u){a=za;a.r[0]=r23;
r3=tc_call(0x80172618u,&a);f1=tc_lastf();if(r3==0u){a=za;a.r[0]=r23;a.r[1]=1u;r3=tc_call(0x80172618u,&a);f1=tc_lastf();if(r3==0u){a=za;a.r[0]=r23;a.r[1]=2u;
r3=tc_call(0x80172618u,&a);f1=tc_lastf();if(r3==0u){wr32(r23+0x16f8u,3u);}else{wr32(r23+0x16f8u,2u);}}else{wr32(r23+0x16f8u,1u);}}else{wr32(r23+0x16f8u,0u);}
}else{wr32(r23+0x16f8u,3u);}if(rd32(0x80571100u)!=1u){wrf32d(r23+0x1810u,(f64)rdf32(0x80574ce0u));}else{wrf32d(r23+0x1810u,(f64)rdf32(0x80574cdcu));}
wr32(r23+0x74u,0xffffffffu);wr32(r23+0x1e8u,0xffffffffu);wr32(r23+0x35cu,0xffffffffu);wr32(r23+0x4d0u,0xffffffffu);wr32(r23+0x644u,0xffffffffu);
wr32(r23+0x7b8u,0xffffffffu);wr32(r23+0x92cu,0xffffffffu);wr32(r23+0xaa0u,0xffffffffu);wr32(r23+0x1814u,0xffffffffu);a=za;r3=tc_call(0x800545e4u,&a);
f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x55fu;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r22=r3;a=za;a.r[0]=r3;
r3=tc_call(0x80045be0u,&a);f1=tc_lastf();a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();wr32(r23+0x74u,r3);a=za;r3=tc_call(0x800545e4u,&a);
f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r22;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);
r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();
a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x66cu;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r22=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);
f1=tc_lastf();a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();wr32(r23+0x1814u,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;
if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r22;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);
r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}
f31=(f64)rdf32(0x80574ce4u);r26=r23;f30=(f64)rdf32(0x80574ce8u);r27=0u;f29=(f64)rdf32(0x80574cecu);r25=1u;f28=(f64)rdf32(0x80574cf0u);r24=0xffu;
f27=(f64)rdf32(0x80574cf8u);r22=0u;f26=(f64)rdf32(0x80574cfcu);for(;;){wrf32d(r26+0x88u,f31);r3=r26;wrf32d(r26+0x84u,f31);r12=rd32(r26);r12=rd32(r12+0xcu);
lr=0x8016e9c0u;if(r12==0x8016e370u){fl_=1u;break;}a=za;a.r[0]=r26;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r12=rd32(r26);r3=r26;f1=(f64)rdf32(r26+0x78u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r26+0x7cu);f3=(f64)rdf32(r26+0x84u);f4=(f64)rdf32(r26+0x88u);lr=0x8016e9e4u;
if(r12==0x8016e370u){fl_=2u;break;}a=za;a.r[0]=r26;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
wr32(r26+0x20u,1u);r3=r26+0x8cu;wr32(r26+0x18u,rd32(r23+0x74u));wr8(r26+0x2cu,0xffu);wr32(r26+0x28u,0u);wrf32d(r26+0x14u,f30);wrf32d(r26+0x10u,f30);
r12=rd32(r26+0x8cu);r12=rd32(r12+0xcu);lr=0x8016ea14u;if(r12==0x8016e370u){fl_=3u;break;}a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;
a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);wr32(r26+0xe8u,1u);r3=r26+0x8cu;f4=(f64)rdf32(0x80574cf4u);r12=rd32(r26+0x8cu);f1=(f64)rdf32(r23+0x1810u);f0=(f64)rdf32(r26+0x78u);
f3=(f64)(f32)px_pmul(f28,f1);r12=rd32(r12+0x1cu);f1=(f64)(f32)px_sfma(f29,f1,f0);f2=(f64)rdf32(r26+0x7cu);lr=0x8016ea44u;if(r12==0x8016e370u){fl_=4u;break;}
a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r3=r26+0x100u;
wr32(r26+0xa4u,rd32(r23+0x1814u));wrf32d(r26+0x98u,f27);wr32(r26+0xb4u,0u);r12=rd32(r26+0x100u);r12=rd32(r12+0xcu);lr=0x8016ea68u;if(r12==0x8016e370u){fl_=5u;
break;}a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r26+0x15cu,1u);r3=r26+0x100u;f4=(f64)rdf32(0x80574cf4u);
f1=(f64)rdf32(r23+0x1810u);f0=(f64)rdf32(r26+0x78u);r12=rd32(r26+0x100u);f3=(f64)(f32)px_pmul(f28,f1);f0=(f64)(f32)px_sfma(f29,f1,f0);f2=(f64)rdf32(r26+0x7cu);
r12=rd32(r12+0x1cu);f1=px_pfnm((f64)(f32)px_sfms(f26,f1,f0));lr=0x8016ea9cu;if(r12==0x8016e370u){fl_=6u;break;}a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;
a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);
r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r27=r27+1u;wr32(r26+0x118u,rd32(r23+0x1814u));wrf32d(r26+0x10cu,f27);
wr32(r26+0x128u,0u);r26=r26+0x174u;if((s32)r27>=8){fl_=7u;break;}}if(fl_!=7u){if(fl_!=6u){if(fl_!=5u){if(fl_!=4u){if(fl_!=3u){if(fl_==2u){fl_=0u;
}else if(fl_==1u){fl_=0u;continue;}continue;}fl_=0u;continue;}fl_=0u;continue;}fl_=0u;continue;}fl_=0u;continue;}fl_=0u;f3=(f64)rdf32(0x80574d00u);
r3=r23+0xba0u;f2=(f64)rdf32(0x80574d08u);f1=(f64)rdf32(0x80574d04u);f0=(f64)rdf32(0x80574d0cu);f1=px_pfnm((f64)(f32)px_sfms(f3,f2,f1));wrf32d(r23+0xc28u,f3);
f0=px_pfnm((f64)(f32)px_sfms(f3,f2,f0));wrf32d(r23+0xc24u,f3);wrf32d(r23+0xc18u,f1);wrf32d(r23+0xc1cu,f0);r12=rd32(r23+0xba0u);r12=rd32(r12+0xcu);
lr=0x8016eaf8u;if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r12=rd32(r23+0xba0u);r3=r23+0xba0u;f1=(f64)rdf32(r23+0xc18u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r23+0xc1cu);f3=(f64)rdf32(r23+0xc24u);f4=(f64)rdf32(r23+0xc28u);
lr=0x8016eb1cu;if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r3=rd32(r23+0x74u);wr32(r23+0xbb8u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);
r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);if((s32)r3>1){wr32(r23+0xbbcu,1u);}}f3=(f64)rdf32(0x80574d04u);f4=(f64)rdf32(0x80574cd8u);
f1=(f64)rdf32(r23+0xc18u);r3=r23+0xc30u;f5=(f64)rdf32(r23+0xc28u);f6=(f64)(f32)px_padd(f1,f4);f2=(f64)rdf32(0x80574d08u);f0=(f64)rdf32(0x80574d0cu);
f1=px_pfnm((f64)(f32)px_sfms(f3,f2,f3));f7=(f64)rdf32(r23+0xc1cu);f0=px_pfnm((f64)(f32)px_sfms(f3,f2,f0));f2=(f64)rdf32(r23+0xc24u);wr8(r23+0xbccu,0xc0u);
wr32(r23+0xbc8u,0u);wrf32d(r23+0xbb4u,f2);wrf32d(r23+0xbb0u,f5);wrf32d(r23+0xc2cu,f4);wrf32d(r23+0xba4u,f6);wrf32d(r23+0xba8u,f7);wrf32d(r23+0xcb8u,f3);
wrf32d(r23+0xcb4u,f3);wrf32d(r23+0xca8u,f1);wrf32d(r23+0xcacu,f0);r12=rd32(r23+0xc30u);r12=rd32(r12+0xcu);lr=0x8016ebb4u;if(r12!=0x8016e370u){a=za;a.r[0]=r3;
a.r[1]=0xc0u;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;a.f[5]=f6;a.f[6]=f7;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r12=rd32(r23+0xc30u);r3=r23+0xc30u;f1=(f64)rdf32(r23+0xca8u);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r23+0xcacu);f3=(f64)rdf32(r23+0xcb4u);f4=(f64)rdf32(r23+0xcb8u);
lr=0x8016ebd8u;if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r3=rd32(r23+0x74u);
wr32(r23+0xc48u,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);if((s32)r3>8){wr32(r23+0xc4cu,8u);}}f2=(f64)rdf32(0x80574cd8u);f1=(f64)rdf32(r23+0xca8u);f0=(f64)rdf32(0x80574ce4u);r22=1u;
f4=(f64)(f32)px_padd(f1,f2);f3=(f64)rdf32(r23+0xcb8u);f1=(f64)rdf32(r23+0xcb4u);f5=(f64)rdf32(r23+0xcacu);r3=r23+0xcc0u;wr8(r23+0xc5cu,0x40u);
wr32(r23+0xc58u,0u);wrf32d(r23+0xc44u,f1);wrf32d(r23+0xc40u,f3);wr32(r23+0xc8cu,1u);wr32(r23+0xc90u,2u);wrf32d(r23+0xcbcu,f2);wrf32d(r23+0xc34u,f4);
wrf32d(r23+0xc38u,f5);wrf32d(r23+0xd48u,f0);wrf32d(r23+0xd44u,f0);r12=rd32(r23+0xcc0u);r12=rd32(r12+0xcu);lr=0x8016ec68u;if(r12!=0x8016e370u){a=za;a.r[0]=r3;
a.r[2]=0x40u;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;r3=tc_call(r12,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r23+0xd1cu,1u);r3=r23+0xcc0u;
f1=(f64)rdf32(r23+0xd38u);r12=rd32(r23+0xcc0u);f2=(f64)rdf32(r23+0xd3cu);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r23+0xd44u);f4=(f64)rdf32(r23+0xd48u);lr=0x8016ec90u;
if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
r3=tc_call(r12,&a);f1=tc_lastf();r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r3=rd32(r23+0x74u);wr32(r23+0xcd8u,r3);
if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
if((s32)r3>8){wr32(r23+0xcdcu,8u);}}f2=(f64)rdf32(r23+0xc24u);f1=(f64)rdf32(0x80574d08u);f0=(f64)rdf32(0x80574d04u);f3=(f64)rdf32(0x80574d00u);r28=0xffffffffu;
f1=px_pfnm((f64)(f32)px_sfms(f2,f1,f0));f2=(f64)rdf32(0x80574d10u);f0=(f64)rdf32(0x80574d14u);r29=0u;wr32(r23+0xce8u,0u);r3=r23+0xd54u;wr8(r23+0x1794u,0x7fu);
wr8(r23+0x1795u,0xe1u);wr8(r23+0x1796u,0xffu);wr8(r23+0x1797u,0xffu);wr8(r23+0xd0cu,0x7fu);wr8(r23+0xd0du,0xe1u);wr8(r23+0xd0eu,0xffu);wr8(r23+0xd0fu,0xffu);
wr8(r23+0xd10u,0x7fu);wr8(r23+0xd11u,0xe1u);wr8(r23+0xd12u,0xffu);wr8(r23+0xd13u,0xffu);wr8(r23+0xd14u,0x7fu);wr8(r23+0xd15u,0xe1u);wr8(r23+0xd16u,0xffu);
wr8(r23+0xd17u,0xffu);wr8(r23+0xd18u,0x7fu);wr8(r23+0xd19u,0xe1u);wr8(r23+0xd1au,0xffu);wr8(r23+0xd1bu,0xffu);wr32(r23+0xdc8u,0xffffffffu);
wr32(r23+0xe58u,0xffffffffu);wr32(r23+0xee8u,0xffffffffu);wr32(r23+0xf78u,0xffffffffu);wr32(r23+0x1008u,0xffffffffu);wrf32d(r23+0xdd8u,f3);
wrf32d(r23+0xddcu,f2);wrf32d(r23+0xdccu,f1);wrf32d(r23+0xdd0u,f0);r12=rd32(r23+0xd54u);r12=rd32(r12+0xcu);lr=0x8016ed70u;if(r12!=0x8016e370u){a=za;a.r[0]=r3;
a.r[1]=0xe1u;a.r[2]=0x7fu;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r27=1u;r3=r23+0xd54u;wr32(r23+0xdb0u,1u);
f1=(f64)rdf32(r23+0xdccu);r12=rd32(r23+0xd54u);f2=(f64)rdf32(r23+0xdd0u);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r23+0xdd8u);f4=(f64)rdf32(r23+0xddcu);lr=0x8016ed9cu;
if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
f1=(f64)rdf32(0x80574d18u);r26=0x58u;r25=0x28u;r24=0xcu;r22=0xc0u;f3=(f64)(f32)px_psub(f1,(f64)rdf32(r23+0xdd8u));f1=(f64)rdf32(0x80574d08u);
f2=(f64)rdf32(r23+0xddcu);r3=r23+0xde4u;f0=(f64)rdf32(r23+0xdd0u);f3=(f64)(f32)px_pmul(f3,f1);f1=(f64)rdf32(r23+0xdccu);wr32(r23+0xd6cu,0xffffffffu);
f1=(f64)(f32)px_psub(f1,f3);wr32(r23+0xdb4u,1u);wr8(r23+0xda0u,0x58u);wr8(r23+0xda1u,0x28u);wr8(r23+0xda2u,0xcu);wr8(r23+0xda3u,0xc0u);wr8(r23+0xda4u,0x58u);
wr8(r23+0xda5u,0x28u);wr8(r23+0xda6u,0xcu);wr8(r23+0xda7u,0xc0u);wr8(r23+0xda8u,0x58u);wr8(r23+0xda9u,0x28u);wr8(r23+0xdaau,0xcu);wr8(r23+0xdabu,0xc0u);
wr8(r23+0xdacu,0x58u);wr8(r23+0xdadu,0x28u);wr8(r23+0xdaeu,0xcu);wr8(r23+0xdafu,0xc0u);wr32(r23+0xd7cu,0u);wrf32d(r23+0xe68u,f3);wrf32d(r23+0xe6cu,f2);
wrf32d(r23+0xe5cu,f1);wrf32d(r23+0xe60u,f0);r12=rd32(r23+0xde4u);r12=rd32(r12+0xcu);lr=0x8016ee40u;if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;
a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);
r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r23+0xe40u,1u);r3=r23+0xde4u;f1=(f64)rdf32(r23+0xe5cu);
r12=rd32(r23+0xde4u);f2=(f64)rdf32(r23+0xe60u);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r23+0xe68u);f4=(f64)rdf32(r23+0xe6cu);lr=0x8016ee68u;if(r12!=0x8016e370u){a=za;
a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f2=(f64)rdf32(0x80574d18u);r3=r23+0xe74u;
f1=(f64)rdf32(r23+0xdd8u);f0=(f64)rdf32(r23+0xdccu);f4=(f64)(f32)px_psub(f2,f1);f3=(f64)rdf32(0x80574d08u);f1=(f64)(f32)px_padd(f0,f1);
f2=(f64)rdf32(r23+0xddcu);f0=(f64)rdf32(r23+0xdd0u);f3=(f64)(f32)px_pmul(f4,f3);wr32(r23+0xdfcu,0xffffffffu);wr32(r23+0xe44u,1u);wr8(r23+0xe30u,0x58u);
wr8(r23+0xe31u,0x28u);wr8(r23+0xe32u,0xcu);wr8(r23+0xe33u,0u);wr8(r23+0xe34u,0x58u);wr8(r23+0xe35u,0x28u);wr8(r23+0xe36u,0xcu);wr8(r23+0xe37u,0xc0u);
wr8(r23+0xe38u,0x58u);wr8(r23+0xe39u,0x28u);wr8(r23+0xe3au,0xcu);wr8(r23+0xe3bu,0u);wr8(r23+0xe3cu,0x58u);wr8(r23+0xe3du,0x28u);wr8(r23+0xe3eu,0xcu);
wr8(r23+0xe3fu,0xc0u);wr32(r23+0xe0cu,0u);wrf32d(r23+0xef8u,f3);wrf32d(r23+0xefcu,f2);wrf32d(r23+0xeecu,f1);wrf32d(r23+0xef0u,f0);r12=rd32(r23+0xe74u);
r12=rd32(r12+0xcu);lr=0x8016eefcu;if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;
a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);wr32(r23+0xed0u,1u);r3=r23+0xe74u;f1=(f64)rdf32(r23+0xeecu);r12=rd32(r23+0xe74u);f2=(f64)rdf32(r23+0xef0u);r12=rd32(r12+0x1cu);
f3=(f64)rdf32(r23+0xef8u);f4=(f64)rdf32(r23+0xefcu);lr=0x8016ef24u;if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;
a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();wr32(r23+0xe8cu,0xffffffffu);wr32(r23+0xed4u,1u);
wr8(r23+0xec0u,0x58u);wr8(r23+0xec1u,0x28u);wr8(r23+0xec2u,0xcu);wr8(r23+0xec3u,0xc0u);wr8(r23+0xec4u,0x58u);wr8(r23+0xec5u,0x28u);wr8(r23+0xec6u,0xcu);
wr8(r23+0xec7u,0u);wr8(r23+0xec8u,0x58u);wr8(r23+0xec9u,0x28u);wr8(r23+0xecau,0xcu);wr8(r23+0xecbu,0xc0u);wr8(r23+0xeccu,0x58u);wr8(r23+0xecdu,0x28u);
wr8(r23+0xeceu,0xcu);wr8(r23+0xecfu,0u);wr32(r23+0xe9cu,0u);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x562u;a.r[2]=1u;
a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r22=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);f1=tc_lastf();r24=r3;a=za;a.r[0]=r3;
r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
f3=(f64)rdf32(0x80574d1cu);f2=(f64)rdf32(0x80574d20u);f1=(f64)rdf32(0x80574d24u);f0=(f64)rdf32(0x80574d28u);wr32(r23+0xf78u,r3);r3=r23+0xf04u;
wrf32d(r23+0xf88u,f3);wrf32d(r23+0xf8cu,f2);wrf32d(r23+0xf7cu,f1);wrf32d(r23+0xf80u,f0);r12=rd32(r23+0xf04u);r12=rd32(r12+0xcu);lr=0x8016efd4u;
if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;r3=tc_call(r12,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r23+0xf60u,1u);
r3=r23+0xf04u;f1=(f64)rdf32(r23+0xf7cu);r12=rd32(r23+0xf04u);f2=(f64)rdf32(r23+0xf80u);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r23+0xf88u);f4=(f64)rdf32(r23+0xf8cu);
lr=0x8016effcu;if(r12!=0x8016e370u){a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r0=rd32(r23+0xf78u);wr32(r23+0xf2cu,0u);wr32(r23+0xf1cu,r0);a=za;a.r[0]=r24;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f3=(f64)rdf32(0x80574d1cu);
f2=(f64)rdf32(0x80574d20u);f1=(f64)rdf32(0x80574d2cu);f0=(f64)rdf32(0x80574d28u);wr32(r23+0x1008u,r3);r3=r23+0xf94u;wrf32d(r23+0x1018u,f3);
wrf32d(r23+0x101cu,f2);wrf32d(r23+0x100cu,f1);wrf32d(r23+0x1010u,f0);r12=rd32(r23+0xf94u);r12=rd32(r12+0xcu);lr=0x8016f04cu;if(r12!=0x8016e370u){a=za;a.r[0]=r3;
a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);wr32(r23+0xff0u,1u);r3=r23+0xf94u;f1=(f64)rdf32(r23+0x100cu);
r12=rd32(r23+0xf94u);f2=(f64)rdf32(r23+0x1010u);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r23+0x1018u);f4=(f64)rdf32(r23+0x101cu);lr=0x8016f074u;if(r12!=0x8016e370u){
a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();
f1=(f64)rdf32(0x80574ce0u);f0=(f64)rdf32(0x80574cd8u);r0=rd32(r23+0x1008u);wrf32d(r23+0xfd0u,f1);wrf32d(r23+0xfd4u,f0);wrf32d(r23+0xfd8u,f0);
wrf32d(r23+0xfdcu,f1);wr32(r23+0xfacu,r0);wr32(r23+0xfbcu,0u);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){
r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;
a.r[0]=r3;a.r[1]=r22;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}wr32(r23+0x1098u,0xffffffffu);wr32(r23+0x1128u,0xffffffffu);wr32(r23+0x11b8u,0xffffffffu);
wr32(r23+0x1248u,0xffffffffu);wr32(r23+0x12d8u,0xffffffffu);wr32(r23+0x1368u,0xffffffffu);wr32(r23+0x13f8u,0xffffffffu);wr32(r23+0x1488u,0xffffffffu);
wr32(r23+0x1518u,0xffffffffu);wr32(r23+0x15a8u,0xffffffffu);wr32(r23+0x1638u,0xffffffffu);wr32(r23+0x16c8u,0xffffffffu);a=za;r3=tc_call(0x800545e4u,&a);
f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x574u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r22=r3;a=za;a.r[0]=r3;
r3=tc_call(0x80045be0u,&a);f1=tc_lastf();a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();wr32(r23+0x1098u,r3);a=za;r3=tc_call(0x800545e4u,&a);
f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r22;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);
r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();
a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x560u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r22=r3;a=za;a.r[0]=r3;r3=tc_call(0x80045be0u,&a);
f1=tc_lastf();a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();wr32(r23+0x11b8u,r3);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;
if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}else{r3=r3+0x24u;a=za;
a.r[0]=r3;a.r[1]=r22;r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r22;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);}f9=(f64)rdf32(0x80574d30u);r27=r23;
f1=(f64)rdf32(0x80574d08u);r26=r23+0x1024u;f0=(f64)rdf32(0x80574d04u);r28=r23+0x10b4u;f8=(f64)rdf32(0x80574d34u);r29=r23+0x1144u;
f5=px_pfnm((f64)(f32)px_sfms(f9,f1,f0));f7=(f64)rdf32(0x80574d38u);f6=(f64)rdf32(0x80574d3cu);r30=0u;f2=(f64)rdf32(0x80574d48u);r25=2u;
f4=(f64)rdf32(0x80574d40u);r24=0xffu;f3=(f64)rdf32(0x80574d44u);r22=0u;f1=(f64)rdf32(0x80574d4cu);f0=(f64)rdf32(0x80574d50u);wrf32d(r23+0x10a8u,f9);
f27=(f64)rdf32(0x80574cd8u);wrf32d(r23+0x10acu,f8);f28=rdf64(0x80574d58u);wrf32d(r23+0x1138u,f8);f29=rdf64(0x80574d60u);wrf32d(r23+0x113cu,f8);
f30=(f64)rdf32(0x80574d68u);wrf32d(r23+0x11c8u,f7);f31=(f64)rdf32(0x80574d6cu);wrf32d(r23+0x11ccu,f6);f26=(f64)rdf32(0x80574d70u);wrf32d(r23+0x1258u,f9);
wrf32d(r23+0x125cu,f8);wrf32d(r23+0x12e8u,f8);wrf32d(r23+0x12ecu,f8);wrf32d(r23+0x1378u,f7);wrf32d(r23+0x137cu,f6);wrf32d(r23+0x1408u,f9);
wrf32d(r23+0x140cu,f8);wrf32d(r23+0x1498u,f8);wrf32d(r23+0x149cu,f8);wrf32d(r23+0x1528u,f7);wrf32d(r23+0x152cu,f6);wrf32d(r23+0x15b8u,f9);
wrf32d(r23+0x15bcu,f8);wrf32d(r23+0x1648u,f8);wrf32d(r23+0x164cu,f8);wrf32d(r23+0x16d8u,f7);wrf32d(r23+0x16dcu,f6);wrf32d(r23+0x109cu,f5);
wrf32d(r23+0x10a0u,f4);wrf32d(r23+0x124cu,f3);wrf32d(r23+0x1250u,f2);wrf32d(r23+0x13fcu,f5);wrf32d(r23+0x1400u,f1);wrf32d(r23+0x15acu,f0);
wrf32d(r23+0x15b0u,f2);for(;;){r12=rd32(r26);r3=r26;r12=rd32(r12+0xcu);lr=0x8016f334u;if(r12==0x8016e370u){fl_=9u;break;}a=za;a.r[0]=r26;a.r[1]=r4;a.r[2]=r5;
a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;a.f[5]=f6;a.f[6]=f7;a.f[7]=f8;r3=tc_call(r12,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r26);r3=r26;
f1=(f64)rdf32(r27+0x109cu);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r27+0x10a0u);f3=(f64)rdf32(r27+0x10a8u);f4=(f64)rdf32(r27+0x10acu);lr=0x8016f358u;
if(r12==0x8016e370u){fl_=8u;break;}a=za;a.r[0]=r26;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;
a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r3=rd32(r23+0x1098u);wr32(r27+0x103cu,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);
r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);if((s32)r3>2){wr32(r27+0x1040u,2u);}}wr8(r27+0x1050u,0xffu);r3=r28;wr32(r27+0x104cu,0u);
wrf32d(r27+0x10b0u,f27);f1=(f64)rdf32(r23+0x1810u);f0=(f64)rdf32(r27+0x10a8u);f2=(f64)rdf32(r27+0x10acu);f0=(f64)(f32)px_pmul(f1,f0);wrf32d(r27+0x1038u,f0);
wrf32d(r27+0x1034u,f2);f1=px_psub(f28,(f64)rdf32(r23+0x1810u));f1=(f64)(f32)px_pmul(px_pmul(f1,(f64)rdf32(r27+0x10a8u)),f29);wrf32d(r27+0x10b0u,f1);
f0=(f64)rdf32(r27+0x109cu);f2=(f64)rdf32(r27+0x10a0u);f0=(f64)(f32)px_padd(f0,f1);wrf32d(r27+0x1028u,f0);wrf32d(r27+0x102cu,f2);
wrf32d(r27+0x112cu,(f64)(f32)px_padd(f30,(f64)rdf32(r27+0x109cu)));wrf32d(r27+0x1130u,(f64)rdf32(r27+0x10a0u));r12=rd32(r28);r12=rd32(r12+0xcu);lr=0x8016f3f4u;
if(r12==0x8016e370u){fl_=10u;break;}a=za;a.r[0]=r28;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;
r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);
r12=rd32(r28);r3=r28;f1=(f64)rdf32(r27+0x112cu);r12=rd32(r12+0x1cu);f2=(f64)rdf32(r27+0x1130u);f3=(f64)rdf32(r27+0x1138u);f4=(f64)rdf32(r27+0x113cu);
lr=0x8016f418u;if(r12==0x8016e370u){fl_=11u;break;}a=za;a.r[0]=r28;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;
a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);
r10=tc_junkr(0xau);r3=rd32(r23+0x74u);wr32(r27+0x10ccu,r3);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);
r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r0=r30+2u;if((s32)r3>(s32)r0){wr32(r27+0x10d0u,r0);}}wr8(r27+0x10e0u,0xffu);
r3=r29;wr32(r27+0x10dcu,0u);wrf32d(r27+0x1140u,f27);f1=(f64)rdf32(r23+0x1810u);f0=(f64)rdf32(r27+0x1138u);f2=(f64)rdf32(r27+0x113cu);
f0=(f64)(f32)px_pmul(f1,f0);wrf32d(r27+0x10c8u,f0);wrf32d(r27+0x10c4u,f2);f1=px_psub(f28,(f64)rdf32(r23+0x1810u));
f1=(f64)(f32)px_pmul(px_pmul(f1,(f64)rdf32(r27+0x10a8u)),f29);wrf32d(r27+0x1140u,f1);f0=(f64)rdf32(r27+0x112cu);f2=(f64)rdf32(r27+0x1130u);
f0=(f64)(f32)px_padd(f0,f1);wrf32d(r27+0x10b8u,f0);wrf32d(r27+0x10bcu,f2);wrf32d(r27+0x11bcu,(f64)(f32)px_padd(f31,(f64)rdf32(r27+0x109cu)));
wrf32d(r27+0x11c0u,(f64)(f32)px_padd(f26,(f64)rdf32(r27+0x10a0u)));r12=rd32(r29);r12=rd32(r12+0xcu);lr=0x8016f4bcu;if(r12==0x8016e370u){fl_=12u;break;}a=za;
a.r[0]=r29;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;r3=tc_call(r12,&a);f1=tc_lastf();r4=tc_lastr4();
r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r12=rd32(r29);r3=r29;f1=(f64)rdf32(r27+0x11bcu);
r12=rd32(r12+0x1cu);f2=(f64)rdf32(r27+0x11c0u);f3=(f64)rdf32(r27+0x11c8u);f4=(f64)rdf32(r27+0x11ccu);lr=0x8016f4e0u;if(r12==0x8016e370u){fl_=13u;break;}a=za;
a.r[0]=r29;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();
r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;
r30=r30+1u;r26=r26+0x1b0u;wr32(r27+0x115cu,rd32(r23+0x11b8u));r28=r28+0x1b0u;r29=r29+0x1b0u;wr8(r27+0x1170u,0xffu);wr32(r27+0x116cu,0u);wrf32d(r27+0x11d0u,f27);
f1=(f64)rdf32(r23+0x1810u);f0=(f64)rdf32(r27+0x11c8u);f2=(f64)rdf32(r27+0x11ccu);f0=(f64)(f32)px_pmul(f1,f0);wrf32d(r27+0x1158u,f0);wrf32d(r27+0x1154u,f2);
f1=px_psub(f28,(f64)rdf32(r23+0x1810u));f1=(f64)(f32)px_pmul(px_pmul(f1,(f64)rdf32(r27+0x1138u)),f29);wrf32d(r27+0x11d0u,f1);f0=(f64)rdf32(r27+0x11bcu);
f2=(f64)rdf32(r27+0x11c0u);f0=(f64)(f32)px_padd(f0,f1);wrf32d(r27+0x1148u,f0);wrf32d(r27+0x114cu,f2);r27=r27+0x1b0u;if((s32)r30>=4){fl_=14u;break;}}do{
if(fl_==14u){fl_=15u;goto postloop;}if(fl_==13u){fl_=0u;fl_=17u;fl_=18u;fl_=20u;fl_=22u;break;}if(fl_==12u){fl_=0u;fl_=19u;
fl_=20u;fl_=22u;break;}if(fl_==11u){fl_=0u;fl_=21u;fl_=22u;break;}if(fl_==10u){fl_=0u;fl_=23u;break;}if(fl_==9u){fl_=0u;}else if(fl_==8u){fl_=0u;break;}fl_=24u;
break;}while(0);do{if(fl_==24u){fl_=0u;fl_=25u;break;}if(fl_!=23u){if(fl_==22u){fl_=0u;break;}fl_=25u;break;}fl_=0u;}while(0);do{if(fl_==25u){fl_=0u;fl_=26u;
break;}if(fl_!=21u){if(fl_==20u){fl_=0u;break;}fl_=26u;break;}fl_=0u;}while(0);do{if(fl_==26u){fl_=0u;fl_=27u;break;}if(fl_!=19u){if(fl_==18u){fl_=0u;break;}
fl_=27u;break;}fl_=0u;}while(0);do{if(fl_==27u){fl_=0u;fl_=28u;break;}if(fl_!=17u){if(fl_==16u){fl_=0u;break;}fl_=28u;break;}fl_=0u;}while(0);if(fl_==28u){
fl_=0u;continue;}if(fl_!=15u)continue;postloop:fl_=0u;r3=rd32(r23+0x115cu);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>0){
wr32(r23+0x1160u,0u);}}r3=rd32(r23+0x130cu);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>0){wr32(r23+0x1310u,0u);}}
r3=rd32(r23+0x14bcu);if(r3!=0u){a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>0){wr32(r23+0x14c0u,0u);}}r3=rd32(r23+0x166cu);if(r3!=0u){
a=za;a.r[0]=r3;r3=tc_call(0x8004c630u,&a);f1=tc_lastf();if((s32)r3>0){wr32(r23+0x1670u,0u);}}f0=(f64)rdf32(0x80574cd8u);r24=0u;wr8(r23+0x16f0u,8u);
wr8(r23+0x16e4u,8u);wr32(r23+0x16f4u,0u);wrf32d(r23+0x16e8u,f0);wrf32d(r23+0x16ecu,f0);wr32(r23+0x1778u,0xffffffffu);a=za;r3=tc_call(0x800545e4u,&a);
f1=tc_lastf();a=za;a.f[0]=f1;a.r[0]=r3;a.r[1]=0x561u;a.r[2]=1u;a.r[4]=0xffffffffu;r3=tc_call(0x80050dd4u,&a);f1=tc_lastf();r25=r3;a=za;a.r[0]=r3;
r3=tc_call(0x80045be0u,&a);f1=tc_lastf();a=za;a.r[0]=r3;r3=tc_call(0x8004bf2cu,&a);f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);
r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);f1=(f64)rdf32(r23+0x1810u);f0=rdf64(0x80574d58u);f6=(f64)rdf32(0x80574d74u);f0=px_psub(f0,f1);
f5=(f64)rdf32(0x80574d3cu);f2=(f64)rdf32(0x80574d78u);wr32(r23+0x1778u,r3);r3=r23+0x1704u;f1=px_pmul(f6,f0);f0=rdf64(0x80574d60u);f4=(f64)rdf32(0x80574d08u);
f3=(f64)rdf32(0x80574d04u);f0=px_pmul(f1,f0);wrf32d(r23+0x1788u,f6);f1=px_pfnm((f64)(f32)px_sfms(f6,f4,f3));wrf32d(r23+0x178cu,f5);f0=(f64)(f32)f0;
wrf32d(r23+0x1780u,f2);wrf32d(r23+0x177cu,f1);wrf32d(r23+0x1790u,f0);r12=rd32(r23+0x1704u);r12=rd32(r12+0xcu);lr=0x8016f688u;if(r12!=0x8016e370u){a=za;
a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;a.f[5]=f6;r3=tc_call(r12,&a);
f1=tc_lastf();r4=tc_lastr4();r5=tc_junkr(5u);r6=tc_junkr(6u);r7=tc_junkr(7u);r8=tc_junkr(8u);r9=tc_junkr(9u);r10=tc_junkr(0xau);r22=1u;r3=r23+0x1704u;
wr32(r23+0x1760u,1u);f1=(f64)rdf32(r23+0x177cu);r12=rd32(r23+0x1704u);f2=(f64)rdf32(r23+0x1780u);r12=rd32(r12+0x1cu);f3=(f64)rdf32(r23+0x1788u);
f4=(f64)rdf32(r23+0x178cu);lr=0x8016f6b4u;if(r12!=0x8016e370u)break;}}}}}}}}}}}}}}}}}}a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;
a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;r3=tc_call(r12,&a);f1=tc_lastf();f0=(f64)rdf32(0x80574d7cu);r6=rd32(r23+0x1778u);
f2=(f64)rdf32(r23+0x1780u);f1=(f64)rdf32(r23+0x177cu);f4=(f64)rdf32(r23+0x178cu);f3=(f64)rdf32(r23+0x1788u);wrf32d(r23+0x1710u,f0);wr32(r23+0x171cu,r6);
wr32(r23+0x1764u,1u);wr32(r23+0x172cu,0u);wr8(r23+0x1750u,0x58u);wr8(r23+0x1751u,0x28u);wr8(r23+0x1752u,0xcu);wr8(r23+0x1753u,0xc0u);wr8(r23+0x1754u,0x58u);
wr8(r23+0x1755u,0x28u);wr8(r23+0x1756u,0xcu);wr8(r23+0x1757u,0xc0u);wr8(r23+0x1758u,0x58u);wr8(r23+0x1759u,0x28u);wr8(r23+0x175au,0xcu);wr8(r23+0x175bu,0xc0u);
wr8(r23+0x175cu,0x58u);wr8(r23+0x175du,0x28u);wr8(r23+0x175eu,0xcu);wr8(r23+0x175fu,0xc0u);wrf32d(r23+0x1708u,f1);wrf32d(r23+0x170cu,f2);wrf32d(r23+0x1718u,f3);
wrf32d(r23+0x1714u,f4);a=za;r3=tc_call(0x800545e4u,&a);f1=tc_lastf();r6=r3;if(rd32(r3+0x10u)==0u){if(rd32(r3+0x20u)==0u){r5=rd32(r3+0xcu);r3=rd32(r3);
r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}else{r3=r3+0x24u;a=za;a.r[0]=r3;a.r[1]=r25;
r3=tc_call(0x80094ec0u,&a);f1=tc_lastf();}}else{r5=rd32(r3+0xcu);r3=rd32(r3);r6=r6+0x18u;a=za;a.r[0]=r3;a.r[1]=r25;a.r[2]=r5;a.r[3]=r6;
r3=tc_call(0x80040e98u,&a);f1=tc_lastf();}a=za;a.r[0]=0x15u;r3=tc_call(0x80141170u,&a);f1=tc_lastf();a=za;a.r[0]=r23;r3=tc_call(0x80172770u,&a);f1=tc_lastf();
t36=r1+0x88u;t37=(f64)rdf32(t36);t38=(f64)rdf32(t36);f31=rdf64(r1+0x80u);t39=r1+0x78u;t40=(f64)rdf32(t39);t41=(f64)rdf32(t39);f30=rdf64(r1+0x70u);t42=r1+0x68u;
t43=(f64)rdf32(t42);t44=(f64)rdf32(t42);f29=rdf64(r1+0x60u);t45=r1+0x58u;t46=(f64)rdf32(t45);t47=(f64)rdf32(t45);f28=rdf64(r1+0x50u);t48=r1+0x48u;
t49=(f64)rdf32(t48);t50=(f64)rdf32(t48);f27=rdf64(r1+0x40u);t51=r1+0x38u;t52=(f64)rdf32(t51);t53=(f64)rdf32(t51);r11=r1+0x30u;f26=rdf64(r1+0x30u);
r22=rd32(r11-0x28u);r23=rd32(r11-0x24u);r24=rd32(r11-0x20u);r25=rd32(r11-0x1cu);r26=rd32(r11-0x18u);r27=rd32(r11-0x14u);r28=rd32(r11-0x10u);r29=rd32(r11-0xcu);
r30=rd32(r11-8u);r31=rd32(r11-4u);r0=rd32(r1+0x94u);return;}
