#include "tc_rt.h"

static u64 px_f2b(f64 x){union{f64 d;u64 b;}v;v.d=x;return v.b;}

static f64 px_b2f(u64 x){union{f64 d;u64 b;}v;v.b=x;return v.d;}

static f32 px_w2f(u32 x){union{f32 f;u32 w;}v;v.w=x;return v.f;}

static f64 px_hi(f64 x){return(f64)px_w2f((u32)(px_f2b(x)>>32));}

static f64 px_lo(f64 x){return(f64)px_w2f((u32)px_f2b(x));}

static f64 px_pq(f64 x){u64 b=px_f2b(x);if((b&0x7ff0000000000000ull)==0x7ff0000000000000ull&&(b&0x000fffffffffffffull)!=0)
return px_b2f(b|0x0008000000000000ull);return x;}

static f64 px_psub(f64 a,f64 b){f64 r=a-b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pmul(f64 a,f64 c){f64 r=a*c;if(r!=r){if(a!=a)return px_pq(a);if(c!=c)return px_pq(c);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pdiv(f64 a,f64 b){f64 r=a/b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_ctiw(f64 b,s32 w){u64 r=0xfff8000000000000ull|(u32)w;if(w==0&&(px_f2b(b)>>63)!=0)r|=0x100000000ull;return px_b2f(r);}

void fn_802c3f08(u32 param_r3,u32 param_r4){u32 c0eq=0,c0gt=0,ctr=0,fl_=0,r0=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0;
u32 r10=0,r11=0,r12=0,r25=0,r26=0,r27=0,r31=0,sw_=0;f64 f0=0.0,f1=0.0,f2=0.0,f3=0.0,f4=0.0,f5=0.0,f6=0.0,f7=0.0,f8=0.0,f9=0.0,f10=0.0,f11=0.0;
f64 f12=0.0,f13=0.0,f30=0.0,f31=0.0;TcArgs a={0};TcArgs za={0};wr32(0x817fdf90u,0x817fe000u);wr32(0x817fe004u,0x817ff000u);wrf64(0x817fdff0u,0.0);
wrf32d(0x817fdff8u,px_hi(0.0));wrf32d(0x817fdff8u,px_lo(0.0));wrf64(0x817fdfe0u,0.0);wrf32d(0x817fdfe8u,px_hi(0.0));wrf32d(0x817fdfe8u,px_lo(0.0));
wr32(0x817fdfc4u,0u);wr32(0x817fdfc8u,0u);wr32(0x817fdfccu,0u);wr32(0x817fdfd0u,0u);wr32(0x817fdfd4u,0u);wr32(0x817fdfd8u,0u);wr32(0x817fdfdcu,0u);
r3=rd32(param_r3+0x250u);r12=rd32(r3);wr32(0x817fdfa0u,0x43300000u);r12=rd32(r12+0x10u);wr32(0x817fdfa8u,0x43300000u);r31=0x80398d90u;a=za;a.r[0]=r3;
a.r[1]=param_r4;(void)tc_call(r12,&a);r25=param_r3;r26=0u;while((s32)r26<(s32)rd32(param_r3+0x10u)){a=za;a.r[0]=rd32(r25+0x2c0u);(void)tc_call(0x802beef0u,&a);
r25=r25+4u;r26=r26+1u;}r25=param_r3;r26=0u;do{a=za;a.r[0]=rd32(r25+0x418u);(void)tc_call(0x802beef0u,&a);r26=r26+1u;r25=r25+4u;}while((s32)r26<15);r25=param_r3;
r26=0u;do{a=za;a.r[0]=rd32(r25+0x2f0u);(void)tc_call(0x802beef0u,&a);r4=tc_lastr4();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;r26=r26+1u;r25=r25+4u;
}while((s32)r26<74);f30=(f64)rdf32(0x80348960u);r25=param_r3;f31=(f64)rdf32(0x803489a0u);r26=0u;do{f1=(f64)rdf32(r25+0x210u);if(!(f1>f30)){
f1=(f64)rdf32(r25+0x220u);if(f1>f30){f0=(f64)(f32)px_psub(f1,(f64)rdf32(rd32(param_r3+4u)+0x30u));wrf32d(r25+0x220u,f0);if((f0<f30)||(f0==f30)){
wrf32d(r25+0x220u,f30);}}}else if((u32)rd8(param_r3+r26+0x80u)==0u||(u32)rd8(rd32(r25+0x2acu)+0x1cu)==0u){wrf32d(r25+0x210u,f30);wrf32d(r25+0x220u,f30);
r3=rd32(r25+0x2acu);if((u32)rd8(r3+0x1cu)!=0u){a=za;a.r[0]=r3;f1=tc_callf(0x802c0ffcu,&a);r4=tc_lastr4();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;}}else{
f0=(f64)(f32)px_psub(f1,(f64)rdf32(rd32(param_r3+4u)+0x30u));wrf32d(r25+0x210u,f0);if((f0<f30)||(f0==f30)||rd32(param_r3+0x14u)==0x11u){a=za;
a.r[0]=rd32(r25+0x2acu);f1=tc_callf(0x802c0ffcu,&a);r4=tc_lastr4();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wrf32d(r25+0x210u,f30);wrf32d(r25+0x220u,f31);}}
r26=r26+1u;r25=r25+4u;}while((s32)r26<4);r0=rd32(param_r3+0x14u);if(r0<=0x13u){r0=(r0<<2u)&0xfffffffcu;r3=rd32(r0-0x7fc66720u);sw_=r3;switch(sw_){
case 0x802c40c4u:if(rd32(rd32(param_r3+4u)+0x18u)==0u){r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==0u&&rd32(r4+4u)==0u){fl_=3u;break;}r3=r3+1u;
if(rd32(r4+8u)==0u&&rd32(r4+0xcu)==0u){fl_=1u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=2u;break;}}do{if(fl_==3u){fl_=0u;fl_=4u;break;}if(fl_==2u){
fl_=0u;}else if(fl_==1u){fl_=0u;break;}r3=0xffffffffu;fl_=5u;break;}while(0);if(fl_==5u){fl_=0u;}else if(fl_==4u){fl_=0u;}wr32(param_r3+0x18u,r3);
r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=0x803998d0u;a.r[2]=1u;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();
wr8(r3+0xcfu,(u8)(((u32)rd8(r3+0xcfu)&0xfeu)|1u));r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=0x803998d8u;a.r[2]=1u;a.f[0]=f1;
r3=tc_call(rd32(rd32(r3)+0x3cu),&a);wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));}else{r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==2u&&rd32(r4+4u)==0u){
fl_=8u;break;}r3=r3+1u;if(rd32(r4+8u)==2u&&rd32(r4+0xcu)==0u){fl_=7u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){r3=0xffffffffu;fl_=6u;break;}}
if(fl_==8u){fl_=0u;}else if(fl_==7u){fl_=0u;}else if(fl_==6u){fl_=0u;}wr32(param_r3+0x18u,r3);r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;
a.r[1]=0x803998d0u;a.r[2]=1u;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));
r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=0x803998d8u;a.r[2]=1u;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);
wr8(r3+0xcfu,(u8)(((u32)rd8(r3+0xcfu)&0xfeu)|1u));}r27=rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2f0u);a=za;a.r[0]=r27;
f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wr32(r27+0x14u,1u);if(param_r4==0u)break;wr32(param_r3+0x14u,1u);a=za;a.r[0]=param_r3;
a.r[1]=param_r4;f1=tc_callf(0x802c3ca0u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;case 0x802c428cu:
if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2f0u)+0x14u)==1u)break;a=za;a.r[0]=param_r3;(void)tc_call(0x802c3970u,&a);a=za;
r3=tc_call(0x8027a840u,&a);r0=(((0u-r3)|r3)>>0x1fu)&1u;wr8(param_r3+0x8cu,(u8)r0);if(r0==0u){r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){
if(rd32(r4)==0xdu&&rd32(r4+4u)==8u){fl_=11u;break;}r3=r3+1u;if(rd32(r4+8u)==0xdu&&rd32(r4+0xcu)==8u){fl_=9u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){
fl_=10u;break;}}do{if(fl_==11u){fl_=0u;fl_=12u;break;}if(fl_==10u){fl_=0u;}else if(fl_==9u){fl_=0u;break;}r3=0xffffffffu;fl_=13u;break;}while(0);if(fl_==13u){
fl_=0u;}else if(fl_==12u){fl_=0u;}r3=param_r3+((r3<<2u)&0xfffffffcu);r27=rd32(r3+0x2f0u);a=za;a.r[0]=r27;(void)tc_call(0x802bed24u,&a);wr32(r27+0x14u,1u);
r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==0xeu&&rd32(r4+4u)==6u){fl_=16u;break;}r3=r3+1u;if(rd32(r4+8u)==0xeu&&rd32(r4+0xcu)==6u){fl_=14u;break;}
r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=15u;break;}}do{if(fl_==16u){fl_=0u;fl_=17u;break;}if(fl_==15u){fl_=0u;}else if(fl_==14u){fl_=0u;break;}
r3=0xffffffffu;fl_=18u;break;}while(0);if(fl_==18u){fl_=0u;}else if(fl_==17u){fl_=0u;}r3=param_r3+((r3<<2u)&0xfffffffcu);r27=rd32(r3+0x2f0u);a=za;a.r[0]=r27;
(void)tc_call(0x802bed24u,&a);wr32(r27+0x14u,1u);}else{r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==0xdu&&rd32(r4+4u)==6u){fl_=21u;break;}r3=r3+1u;
if(rd32(r4+8u)==0xdu&&rd32(r4+0xcu)==6u){fl_=19u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=20u;break;}}do{if(fl_==21u){fl_=0u;fl_=22u;break;}
if(fl_==20u){fl_=0u;}else if(fl_==19u){fl_=0u;break;}r3=0xffffffffu;fl_=23u;break;}while(0);if(fl_==23u){fl_=0u;}else if(fl_==22u){fl_=0u;}
r3=param_r3+((r3<<2u)&0xfffffffcu);r27=rd32(r3+0x2f0u);a=za;a.r[0]=r27;(void)tc_call(0x802bed24u,&a);wr32(r27+0x14u,1u);r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){
if(rd32(r4)==0xeu&&rd32(r4+4u)==8u){fl_=26u;break;}r3=r3+1u;if(rd32(r4+8u)==0xeu&&rd32(r4+0xcu)==8u){fl_=24u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){
fl_=25u;break;}}do{if(fl_==26u){fl_=0u;fl_=27u;break;}if(fl_==25u){fl_=0u;}else if(fl_==24u){fl_=0u;break;}r3=0xffffffffu;fl_=28u;break;}while(0);if(fl_==28u){
fl_=0u;}else if(fl_==27u){fl_=0u;}r3=param_r3+((r3<<2u)&0xfffffffcu);r27=rd32(r3+0x2f0u);a=za;a.r[0]=r27;(void)tc_call(0x802bed24u,&a);wr32(r27+0x14u,1u);}a=za;
a.r[0]=param_r3;f1=tc_callf(0x802c3b70u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;r3=0u;r12=rd32(rd32(param_r3+4u)+0x14u);if(r12!=0u){a=za;a.r[0]=5u;a.f[0]=f1;
r3=tc_call(r12,&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;}if(r3==0u){a=za;f1=tc_callf(0x802c1e5cu,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;}
wr32(param_r3+0x14u,2u);break;case 0x802c5858u:break;case 0x802c44f4u:r4=rd32(param_r3+0x18u);
if(rd32(rd32(param_r3+((r4<<2u)&0xfffffffcu)+0x2f0u)+0x14u)!=1u&&r4!=5u){r25=0x80399880u;r31=0u;do{r26=r25;r27=0u;do{r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;
a.r[0]=r3;a.r[1]=rd32(r26);a.r[2]=1u;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();r27=r27+1u;r26=r26+4u;
wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));}while((s32)r27<4);r31=r31+1u;r25=r25+0x10u;}while((s32)r31<4);wr32(param_r3+0x18u,5u);r27=rd32(param_r3+0x42cu);
a=za;a.r[0]=r27;f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wr32(r27+0x14u,1u);}r0=rd32(param_r3+0x230u)-1u;wr32(param_r3+0x230u,r0);
if((s32)r0>0)break;r25=0u;do{a=za;a.r[0]=r25;(void)tc_call(0x8027a0b0u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;r25=r25+1u;}while((s32)r25<4);
wr32(param_r3+0x14u,4u);f1=(f64)rdf32(0x803489a4u);f0=(f64)(f32)px_pdiv(f1,(f64)rdf32(rd32(rd32(0x80547490u)+4u)+0x30u));f0=px_ctiw(f0,ppc_fctiwz(f0));
wrf64(0x817fdfb0u,f0);wr32(param_r3+0x234u,rd32(0x817fdfb4u));break;case 0x802c45ecu:
if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2f0u)+0x14u)==1u)break;if((s32)rd32(param_r3+0x234u)>0){r25=0u;do{a=za;a.r[0]=r25;
a.r[1]=0x817fdf98u;r3=tc_call(0x8027a174u,&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;if(r3!=0xffffffffu)break;r25=r25+1u;}while((s32)r25<4);
if((s32)r25<4){wr32(param_r3+0x234u,rd32(param_r3+0x234u)-1u);break;}wr32(param_r3+0x234u,0u);}wr32(param_r3+0x14u,5u);wr32(param_r3+0x1cu,0u);
wr32(param_r3+0x9cu,0u);a=za;a.r[0]=0x802c6104u;r3=tc_call(0x80278eb0u,&a);wr32(param_r3+0x20cu,r3);r3=rd32(param_r3+0x2acu);wr8(param_r3+0x92u,0u);
wr8(param_r3+0x93u,0u);wr8(r3+0x44u,1u);wr8(rd32(param_r3+0x2b0u)+0x44u,1u);wr8(rd32(param_r3+0x2b4u)+0x44u,1u);wr8(rd32(param_r3+0x2b8u)+0x44u,1u);a=za;
r3=tc_call(0x80278ea8u,&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;r0=(((0u-r3)|r3)>>0x1fu)&1u;wr8(param_r3+0x91u,(u8)r0);if(r0!=0u)break;a=za;
a.r[0]=param_r3+0x5e8u;(void)tc_call(0x80226a70u,&a);a=za;a.r[0]=param_r3+0x5e8u;(void)tc_call(0x80226e98u,&a);a=za;a.r[0]=param_r3+0x5e8u;a.r[1]=0x10624dd3u;
a.r[3]=((ppc_mulhwu(0x10624dd3u,(rd32(0x800000f8u)>>2u)&0x3fffffffu)>>6u)&0x3ffffffu)*0x64u;a.r[4]=0x802c6038u;f1=tc_callf(0x8022697cu,&a);r6=0u;r7=0u;r8=0u;
r9=0u;r10=0u;f2=0.0;break;case 0x802c470cu:
if((u32)rd8(param_r3+0x91u)==0u||rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x418u)+0x14u)==1u)break;if(rd32(param_r3+0x1cu)==0u){r25=0u;do{
r5=0x803486e8u;r3=r25+6u;r4=0u;ctr=0x25u;for(;;){if(r3==rd32(r5)&&rd32(r5+4u)==7u){fl_=31u;break;}r4=r4+1u;if(r3==rd32(r5+8u)&&rd32(r5+0xcu)==7u){fl_=29u;break;
}r5=r5+0x10u;r4=r4+1u;ctr=ctr-1u;if(ctr==0u){fl_=30u;break;}}do{if(fl_==31u){fl_=0u;fl_=32u;break;}if(fl_==30u){fl_=0u;}else if(fl_==29u){fl_=0u;break;}
r4=0xffffffffu;fl_=33u;break;}while(0);if(fl_==33u){fl_=0u;}else if(fl_==32u){fl_=0u;}r26=rd32(param_r3+((r4<<2u)&0xfffffffcu)+0x2f0u);a=za;a.r[0]=r26;
(void)tc_call(0x802bed24u,&a);r25=r25+1u;wr32(r26+0x14u,1u);}while((s32)r25<5);a=za;a.r[0]=param_r3;(void)tc_call(0x802ca110u,&a);
wr32(rd32(param_r3+0x450u)+0x18u,2u);r25=rd32(param_r3+0x450u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;
wr32(r25+0x14u,1u);}r3=0u;if((u32)rd8(param_r3+0x80u)!=0u){r3=1u;if((u32)rd8(param_r3+0x81u)!=0u){r3=2u;if((u32)rd8(param_r3+0x82u)!=0u){r3=3u;
if((u32)rd8(param_r3+0x83u)!=0u){r3=4u;}}}}if((s32)r3>=4){wr8(param_r3+0x93u,1u);}if((u32)rd8(param_r3+0x93u)==0u){r3=rd32(param_r3+0x1cu)+1u;
c0gt=(s32)r3>(s32)rd32(param_r3+0x61cu);wr32(param_r3+0x1cu,r3);if(!c0gt)break;wr32(param_r3+0x14u,7u);a=za;r3=tc_call(0x80278eacu,&a);f1=tc_lastf();r6=0u;
r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;if(r3==0u){a=za;a.r[0]=param_r3+0x5e8u;(void)tc_call(0x80226a70u,&a);a=za;a.r[0]=param_r3+0x5e8u;a.r[1]=1u;
(void)tc_call(0x80226e98u,&a);a=za;a.r[0]=param_r3+0x5e8u;a.r[1]=0x10624dd3u;
a.r[3]=((ppc_mulhwu(0x10624dd3u,(rd32(0x800000f8u)>>2u)&0x3fffffffu)>>6u)&0x3ffffffu)*0x64u;a.r[4]=0x802c6038u;f1=tc_callf(0x8022697cu,&a);r6=0u;r7=0u;r8=0u;
r9=0u;r10=0u;f2=0.0;}wr8(param_r3+0x92u,1u);break;}if(rd32(param_r3+0x14u)==6u){r3=rd32(param_r3+0x1cu)+1u;c0gt=(s32)r3>(s32)rd32(param_r3+0x61cu);
wr32(param_r3+0x1cu,r3);if(!c0gt)break;wr32(param_r3+0x14u,7u);a=za;r3=tc_call(0x80278eacu,&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;if(r3==0u){
a=za;a.r[0]=param_r3+0x5e8u;(void)tc_call(0x80226a70u,&a);a=za;a.r[0]=param_r3+0x5e8u;a.r[1]=1u;(void)tc_call(0x80226e98u,&a);a=za;a.r[0]=param_r3+0x5e8u;
a.r[1]=0x10624dd3u;a.r[3]=((ppc_mulhwu(0x10624dd3u,(rd32(0x800000f8u)>>2u)&0x3fffffffu)>>6u)&0x3ffffffu)*0x64u;a.r[4]=0x802c6038u;f1=tc_callf(0x8022697cu,&a);
r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;}wr8(param_r3+0x92u,1u);break;}a=za;a.r[0]=rd32(param_r3+((rd32(param_r3+0x88u)<<2u)&0xfffffffcu)+0x2acu);
r3=tc_call(0x802c0f84u,&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;do{if(r3!=0u){a=za;
a.r[0]=rd32(param_r3+((rd32(param_r3+0x88u)<<2u)&0xfffffffcu)+0x2acu);a.r[1]=5u;r3=tc_call(0x802c0cdcu,&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;
if(r3==0u)break;}r0=rd32(param_r3+0x620u);wr32(param_r3+0x14u,6u);wr32(param_r3+0x1cu,r0);}while(0);r3=rd32(param_r3+0x620u);r0=rd32(param_r3+0x9cu)+1u;
wr32(param_r3+0x9cu,r0);if((s32)r0<=(s32)r3)break;wr32(param_r3+0x1cu,r3);wr32(param_r3+0x14u,6u);break;case 0x802c49d4u:if((u32)rd8(param_r3+0x92u)==0u)break;
a=za;a.r[0]=rd32(param_r3+0x20cu);(void)tc_call(0x80278eb0u,&a);a=za;a.r[0]=rd32(param_r3+0x2bcu);(void)tc_call(0x802c1380u,&a);r25=0u;do{
r3=rd32(param_r3+0x250u);f1=(f64)rdf32(0x80348978u);a=za;a.r[0]=r3;a.r[1]=r25;a.f[0]=f1;a.f[1]=f1;(void)tc_call(rd32(rd32(r3)+0x30u),&a);r25=r25+1u;
}while((s32)r25<8);wr32(param_r3+0x18u,6u);r25=rd32(param_r3+0x430u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;
wr32(r25+0x14u,1u);r3=0u;wr32(param_r3+0x14u,8u);wr32(rd32(param_r3+0x450u)+0x18u,0u);r12=rd32(rd32(param_r3+4u)+0x14u);if(r12!=0u){a=za;a.r[0]=5u;a.r[1]=0x15u;
a.f[0]=f1;r3=tc_call(r12,&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;}if(r3!=0u)break;a=za;a.r[0]=0x15u;f1=tc_callf(0x802c1e5cu,&a);r6=0u;r7=0u;
r8=0u;r9=0u;r10=0u;f2=0.0;break;case 0x802c4a98u:r4=rd32(param_r3+0x18u);if(rd32(rd32(param_r3+((r4<<2u)&0xfffffffcu)+0x418u)+0x14u)==1u)break;if(r4!=0xdu){
if(r4==6u){r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=rd32(0x80399774u);a.r[2]=1u;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();
wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=rd32(0x80399778u);a.r[2]=1u;a.f[0]=f1;
r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));}}else{r4=0x803486e8u;
r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==0x11u&&rd32(r4+4u)==0xcu){fl_=36u;break;}r3=r3+1u;if(rd32(r4+8u)==0x11u&&rd32(r4+0xcu)==0xcu){fl_=34u;break;}r4=r4+0x10u;
r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=35u;break;}}do{if(fl_==36u){fl_=0u;fl_=37u;break;}if(fl_==35u){fl_=0u;}else if(fl_==34u){fl_=0u;break;}r3=0xffffffffu;
fl_=38u;break;}while(0);if(fl_==38u){fl_=0u;}else if(fl_==37u){fl_=0u;}r3=param_r3+((r3<<2u)&0xfffffffcu);r25=rd32(r3+0x2f0u);a=za;a.r[0]=r25;
(void)tc_call(0x802bed24u,&a);wr32(r25+0x14u,1u);r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==0x12u&&rd32(r4+4u)==0xcu){fl_=41u;break;}r3=r3+1u;
if(rd32(r4+8u)==0x12u&&rd32(r4+0xcu)==0xcu){fl_=39u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=40u;break;}}do{if(fl_==41u){fl_=0u;fl_=42u;break;}
if(fl_==40u){fl_=0u;}else if(fl_==39u){fl_=0u;break;}r3=0xffffffffu;fl_=43u;break;}while(0);if(fl_==43u){fl_=0u;}else if(fl_==42u){fl_=0u;}
r3=param_r3+((r3<<2u)&0xfffffffcu);r25=rd32(r3+0x2f0u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);wr32(r25+0x14u,1u);r6=rd32(param_r3+0x238u);
r3=rd32(r6+0x10u);a=za;a.r[0]=r3;a.r[1]=rd32(0x8039977cu);a.r[2]=1u;a.r[3]=r6;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();r6=0u;r7=0u;r8=0u;
r9=0u;r10=0u;f2=0.0;wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));}wr32(param_r3+0x14u,2u);break;case 0x802c4c50u:
if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2f0u)+0x14u)==1u)break;if((u32)rd8(param_r3+0x8cu)!=0u){r25=param_r3;r26=0u;do{a=za;
a.r[0]=rd32(r25+0x2acu);f1=tc_callf(0x802c0ffcu,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;r26=r26+1u;r25=r25+4u;}while((s32)r26<4);}wr32(param_r3+0x14u,2u);
break;case 0x802c4ca4u:if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x418u)+0x14u)==1u)break;r3=rd32(param_r3);wr32(param_r3+0x6cu,0u);
c0eq=r3==1u;wr32(param_r3+0x70u,0u);wr32(param_r3+0x74u,0u);wr32(param_r3+0x78u,0u);if(c0eq){if(c0eq){wr32(param_r3+0x18u,0xau);r25=rd32(param_r3+0x440u);a=za;
a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r3=0u;wr32(r25+0x14u,1u);wr32(param_r3+0x18u,1u);r12=rd32(rd32(param_r3+4u)+0x14u);if(r12!=0u){a=za;a.r[0]=5u;a.r[1]=7u;
a.f[0]=f1;r3=tc_call(r12,&a);}if(r3==0u){a=za;a.r[0]=7u;(void)tc_call(0x802c1e5cu,&a);}wr32(param_r3+0x14u,8u);}}else{r26=2u;r25=0x80399730u;do{
r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=rd32(r25);a.r[2]=1u;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();r26=r26+1u;
r25=r25+4u;wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));}while((s32)r26<7);wr32(param_r3+0x14u,2u);}a=za;a.r[0]=param_r3;f1=tc_callf(0x802c731cu,&a);r6=0u;
r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;case 0x802c4da0u:if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2c0u)+0x14u)==1u)break;
wr32(param_r3+0x18u,7u);r25=rd32(param_r3+0x434u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wr32(r25+0x14u,1u);
wr32(param_r3+0x14u,0xcu);break;case 0x802c4de4u:if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x418u)+0x14u)==1u)break;a=za;a.r[0]=param_r3;
(void)tc_call(0x802c731cu,&a);a=za;a.r[0]=param_r3;f1=tc_callf(0x802ca110u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wr32(param_r3+0x14u,2u);break;
case 0x802c4e1cu:if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2f0u)+0x14u)==1u)break;r5=rd32(param_r3+0xb8u);if((s32)r5<0){a=za;
a.r[0]=param_r3;(void)tc_call(0x802c731cu,&a);wr32(param_r3+0x18u,0xdu);r25=rd32(param_r3+0x44cu);a=za;a.r[0]=r25;(void)tc_call(0x802bed24u,&a);
wr32(r25+0x14u,1u);wr32(param_r3+0x14u,8u);}else{f1=rdf64(0x80348990u);wr32(0x817fdfa4u,rd32(param_r3+0x458u)^0x80000000u);f0=rdf64(0x817fdfa0u);
wr32(param_r3+0x45cu,1u);f0=(f64)(f32)px_psub(f0,f1);wr32(param_r3+0x14u,0x13u);wrf32d(param_r3+0x79cu,f0);if(r5!=3u){r12=rd32(rd32(param_r3+4u)+0x14u);
if(r12!=0u){f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfb0u,f0);a=za;a.r[0]=3u;a.r[1]=rd32(0x817fdfb4u);a.r[2]=r5;a.f[0]=f1;(void)tc_call(r12,&a);}}}r25=0u;do{
r3=rd32(param_r3+0x250u);f1=(f64)rdf32(0x80348978u);a=za;a.r[0]=r3;a.r[1]=r25;a.f[0]=f1;a.f[1]=f1;f1=tc_callf(rd32(rd32(r3)+0x30u),&a);r6=0u;r7=0u;r8=0u;r9=0u;
r10=0u;f2=0.0;r25=r25+1u;}while((s32)r25<8);break;case 0x802c4f14u:if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x418u)+0x14u)==1u)break;
r6=rd32(param_r3+0x238u);r3=rd32(r6+0x10u);a=za;a.r[0]=r3;a.r[1]=rd32(0x8039977cu);a.r[2]=1u;a.r[3]=r6;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);
wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));if(rd32(rd32(param_r3+4u)+0x18u)==0u){r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==1u&&rd32(r4+4u)==1u){
fl_=46u;break;}r3=r3+1u;if(rd32(r4+8u)==1u&&rd32(r4+0xcu)==1u){fl_=44u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=45u;break;}}do{if(fl_==46u){
fl_=0u;fl_=47u;break;}if(fl_==45u){fl_=0u;}else if(fl_==44u){fl_=0u;break;}r3=0xffffffffu;fl_=48u;break;}while(0);if(fl_==48u){fl_=0u;}else if(fl_==47u){fl_=0u;
}wr32(param_r3+0x18u,r3);}else{r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==3u&&rd32(r4+4u)==1u){fl_=51u;break;}r3=r3+1u;
if(rd32(r4+8u)==3u&&rd32(r4+0xcu)==1u){fl_=49u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=50u;break;}}do{if(fl_==51u){fl_=0u;fl_=52u;break;}
if(fl_==50u){fl_=0u;}else if(fl_==49u){fl_=0u;break;}r3=0xffffffffu;fl_=53u;break;}while(0);if(fl_==53u){fl_=0u;}else if(fl_==52u){fl_=0u;}
wr32(param_r3+0x18u,r3);}r25=rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2f0u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;
r10=0u;f2=0.0;wr32(r25+0x14u,1u);r0=rd32(param_r3+0x18u);wr32(param_r3+0x14u,0x10u);r0=(r0<<2u)&0xfffffffcu;r3=rd32(param_r3+4u);
f0=(f64)rdf32(rd32(param_r3+r0+0x2f0u)+4u);wrf32d(param_r3+0x79cu,f0);r12=rd32(r3+0x14u);if(r12==0u)break;f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfb0u,f0);
a=za;a.r[0]=2u;a.r[1]=rd32(0x817fdfb4u);a.f[0]=f1;f1=tc_callf(r12,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;case 0x802c50a0u:
if(rd32(rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2c0u)+0x14u)==1u)break;r0=rd32(param_r3+0xb8u);f1=rdf64(0x80348990u);
wr32(0x817fdfacu,rd32(param_r3+0x458u)^0x80000000u);f0=rdf64(0x817fdfa8u);wr32(param_r3+0x45cu,1u);f0=(f64)(f32)px_psub(f0,f1);wr8(param_r3+0x9au,1u);
wr32(param_r3+0x14u,0x13u);wrf32d(param_r3+0x79cu,f0);if(r0==3u)break;r12=rd32(rd32(param_r3+4u)+0x14u);if(r12==0u)break;f0=px_ctiw(f0,ppc_fctiwz(f0));
wrf64(0x817fdfb0u,f0);a=za;a.r[0]=3u;a.r[1]=rd32(0x817fdfb4u);a.r[2]=1u;a.f[0]=f1;f1=tc_callf(r12,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;
case 0x802c5124u:if((s32)rd32(param_r3)<=2){r31=rd32(param_r3+((rd32(param_r3+0x18u)<<2u)&0xfffffffcu)+0x2f0u);}if(rd32(r31+0x14u)==1u){
f1=(f64)(f32)px_psub((f64)rdf32(r31+4u),(f64)rdf32(r31+0xcu));f30=(f64)(f32)px_pdiv(f1,(f64)rdf32(param_r3+0x79cu));if(rd32(param_r3+0xb8u)==3u)break;
if((u32)rd8(param_r3+0x97u)!=0u){f0=(f64)(f32)px_pmul((f64)rdf32(0x803489a8u),f30);f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfb0u,f0);a=za;
a.r[0]=rd32(0x817fdfb4u)&0xffffu;(void)tc_call(0x802449ecu,&a);}a=za;a.f[0]=f30;f1=tc_callf(0x802c23ecu,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;}
r0=rd32(param_r3+0xb8u);wr32(param_r3+0x14u,0x11u);if(r0==3u)break;if((u32)rd8(param_r3+0x97u)!=0u){a=za;(void)tc_call(0x802449ecu,&a);}a=za;
a.f[0]=(f64)rdf32(0x80348960u);f1=tc_callf(0x802c23ecu,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;case 0x802c51d4u:r0=rd32(param_r3+0xb8u);
wr32(param_r3+0x14u,0x12u);if(r0!=3u){a=za;(void)tc_call(0x802c220cu,&a);if((u32)rd8(param_r3+0x97u)!=0u){a=za;a.r[0]=param_r3+0x634u;
(void)tc_call(0x8024666cu,&a);a=za;a.r[0]=rd32(param_r3+0x794u);a.r[1]=rd32(param_r3+0x798u);(void)tc_call(0x80243e14u,&a);a=za;a.r[0]=rd32(param_r3+0x62cu);
a.r[1]=rd32(param_r3+0x630u);(void)tc_call(0x80249734u,&a);a=za;a.r[0]=(u32)rd16(param_r3+0x624u);(void)tc_call(0x802449ecu,&a);a=za;
a.r[0]=(u32)rd16(param_r3+0x626u);(void)tc_call(0x802449f4u,&a);a=za;a.r[0]=(u32)rd16(param_r3+0x628u);(void)tc_call(0x802449fcu,&a);}wr8(param_r3+0x97u,0u);}
f2=rdf64(0x80348990u);f0=(f64)rdf32(0x803489acu);wr32(0x817fdfa4u,rd32(param_r3+0x84u)^0x80000000u);
f0=(f64)(f32)px_pmul(f0,(f64)(f32)px_psub(rdf64(0x817fdfa0u),f2));f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfb0u,f0);a=za;a.r[0]=rd32(0x817fdfb4u)&0xffu;
(void)tc_call(0x8027c6fcu,&a);a=za;(void)tc_call(0x8027aa5cu,&a);a=za;a.r[0]=rd32(param_r3+0x2bcu);(void)tc_call(0x802c1380u,&a);a=za;
a.r[0]=rd32(param_r3+0x2bcu);(void)tc_call(0x802c15e0u,&a);r25=param_r3;r26=0u;do{a=za;a.r[0]=rd32(r25+0x2acu);(void)tc_call(0x802c0ffcu,&a);a=za;
a.r[0]=rd32(r25+0x2acu);f1=tc_callf(0x802c0a14u,&a);f2=0.0;r26=r26+1u;r25=r25+4u;}while((s32)r26<4);if(rd32(param_r3+0xb8u)!=3u){
r12=rd32(rd32(param_r3+4u)+0x14u);if(r12!=0u){a=za;a.r[0]=4u;a.f[0]=f1;f1=tc_callf(r12,&a);f2=0.0;}}r3=0u;r8=0u;do{r10=0x803486e8u;r7=r3+0x1fu;r9=0u;ctr=0x25u;
for(;;){if(r7==rd32(r10)&&rd32(r10+4u)==0x11u){fl_=56u;break;}r9=r9+1u;if(r7==rd32(r10+8u)&&rd32(r10+0xcu)==0x11u){fl_=54u;break;}r10=r10+0x10u;r9=r9+1u;
ctr=ctr-1u;if(ctr==0u){fl_=55u;break;}}do{if(fl_==56u){fl_=0u;fl_=57u;break;}if(fl_==55u){fl_=0u;}else if(fl_==54u){fl_=0u;break;}r9=0xffffffffu;fl_=58u;break;
}while(0);if(fl_==58u){fl_=0u;}else if(fl_==57u){fl_=0u;}r10=0x803486e8u;r7=r3+0x1fu;r6=rd32(param_r3+((r9<<2u)&0xfffffffcu)+0x2f0u);r9=0u;wr32(r6+0x14u,0u);
ctr=0x25u;for(;;){if(r7==rd32(r10)&&rd32(r10+4u)==0x12u){fl_=61u;break;}r9=r9+1u;if(r7==rd32(r10+8u)&&rd32(r10+0xcu)==0x12u){fl_=59u;break;}r10=r10+0x10u;
r9=r9+1u;ctr=ctr-1u;if(ctr==0u){fl_=60u;break;}}do{if(fl_==61u){fl_=0u;fl_=62u;break;}if(fl_==60u){fl_=0u;}else if(fl_==59u){fl_=0u;break;}r9=0xffffffffu;
fl_=63u;break;}while(0);if(fl_==63u){fl_=0u;}else if(fl_==62u){fl_=0u;}r10=0x803486e8u;r7=r3+0x1fu;r6=rd32(param_r3+((r9<<2u)&0xfffffffcu)+0x2f0u);r9=0u;
wr32(r6+0x14u,0u);ctr=0x25u;for(;;){if(r7==rd32(r10)&&rd32(r10+4u)==0xfu){fl_=66u;break;}r9=r9+1u;if(r7==rd32(r10+8u)&&rd32(r10+0xcu)==0xfu){fl_=64u;break;}
r10=r10+0x10u;r9=r9+1u;ctr=ctr-1u;if(ctr==0u){fl_=65u;break;}}do{if(fl_==66u){fl_=0u;fl_=67u;break;}if(fl_==65u){fl_=0u;}else if(fl_==64u){fl_=0u;break;}
r9=0xffffffffu;fl_=68u;break;}while(0);if(fl_==68u){fl_=0u;}else if(fl_==67u){fl_=0u;}r3=r3+1u;r6=rd32(param_r3+((r9<<2u)&0xfffffffcu)+0x2f0u);
wr32(r6+0x14u,0u);}while((s32)r3<4);wr8(param_r3+0x94u,0u);break;case 0x802c5448u:wr32(param_r3+0x14u,2u);break;case 0x802c5454u:
if((u32)rd8(param_r3+0x95u)!=0u){a=za;a.r[0]=param_r3;a.r[1]=param_r4;f1=tc_callf(0x802c3ca0u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wr8(param_r3+0x95u,0u);}
if((u32)rd8(param_r3+0x96u)!=0u){a=za;a.r[0]=param_r3;(void)tc_call(0x802c3970u,&a);a=za;r3=tc_call(0x8027a840u,&a);r0=(((0u-r3)|r3)>>0x1fu)&1u;
wr8(param_r3+0x8cu,(u8)r0);if(r0==0u){r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==0xdu&&rd32(r4+4u)==8u){fl_=71u;break;}r3=r3+1u;
if(rd32(r4+8u)==0xdu&&rd32(r4+0xcu)==8u){fl_=69u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=70u;break;}}do{if(fl_==71u){fl_=0u;fl_=72u;break;}
if(fl_==70u){fl_=0u;}else if(fl_==69u){fl_=0u;break;}r3=0xffffffffu;fl_=73u;break;}while(0);if(fl_==73u){fl_=0u;}else if(fl_==72u){fl_=0u;}
r3=param_r3+((r3<<2u)&0xfffffffcu);r25=rd32(r3+0x2f0u);a=za;a.r[0]=r25;(void)tc_call(0x802bed24u,&a);wr32(r25+0x14u,1u);r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){
if(rd32(r4)==0xeu&&rd32(r4+4u)==6u){fl_=76u;break;}r3=r3+1u;if(rd32(r4+8u)==0xeu&&rd32(r4+0xcu)==6u){fl_=74u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){
fl_=75u;break;}}do{if(fl_==76u){fl_=0u;fl_=77u;break;}if(fl_==75u){fl_=0u;}else if(fl_==74u){fl_=0u;break;}r3=0xffffffffu;fl_=78u;break;}while(0);if(fl_==78u){
fl_=0u;}else if(fl_==77u){fl_=0u;}r3=param_r3+((r3<<2u)&0xfffffffcu);r25=rd32(r3+0x2f0u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;
r10=0u;f2=0.0;wr32(r25+0x14u,1u);}else{r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){if(rd32(r4)==0xdu&&rd32(r4+4u)==6u){fl_=81u;break;}r3=r3+1u;
if(rd32(r4+8u)==0xdu&&rd32(r4+0xcu)==6u){fl_=79u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){fl_=80u;break;}}do{if(fl_==81u){fl_=0u;fl_=82u;break;}
if(fl_==80u){fl_=0u;}else if(fl_==79u){fl_=0u;break;}r3=0xffffffffu;fl_=83u;break;}while(0);if(fl_==83u){fl_=0u;}else if(fl_==82u){fl_=0u;}
r3=param_r3+((r3<<2u)&0xfffffffcu);r25=rd32(r3+0x2f0u);a=za;a.r[0]=r25;(void)tc_call(0x802bed24u,&a);wr32(r25+0x14u,1u);r4=0x803486e8u;r3=0u;ctr=0x25u;for(;;){
if(rd32(r4)==0xeu&&rd32(r4+4u)==8u){fl_=86u;break;}r3=r3+1u;if(rd32(r4+8u)==0xeu&&rd32(r4+0xcu)==8u){fl_=84u;break;}r4=r4+0x10u;r3=r3+1u;ctr=ctr-1u;if(ctr==0u){
fl_=85u;break;}}do{if(fl_==86u){fl_=0u;fl_=87u;break;}if(fl_==85u){fl_=0u;}else if(fl_==84u){fl_=0u;break;}r3=0xffffffffu;fl_=88u;break;}while(0);if(fl_==88u){
fl_=0u;}else if(fl_==87u){fl_=0u;}r3=param_r3+((r3<<2u)&0xfffffffcu);r25=rd32(r3+0x2f0u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r6=0u;r7=0u;r8=0u;r9=0u;
r10=0u;f2=0.0;wr32(r25+0x14u,1u);}wr8(param_r3+0x96u,0u);}r4=rd32(param_r3+0x45cu);if(r4!=1u||rd32(param_r3+0x454u)!=rd32(param_r3+0x458u)){
if(r4!=2u||rd32(param_r3+0x454u)!=0u){r0=0u;}else{r0=1u;}}else{r0=1u;}if(r0==0u){r0=rd32(param_r3+0xb8u);f2=rdf64(0x80348990u);f0=(f64)rdf32(param_r3+0x79cu);
wr32(0x817fdfacu,(rd32(param_r3+0x458u)-rd32(param_r3+0x454u))^0x80000000u);f1=(f64)(f32)px_psub(rdf64(0x817fdfa8u),f2);f30=(f64)(f32)px_pdiv(f1,f0);
if(r0==3u)break;if((u32)rd8(param_r3+0x97u)!=0u){f0=(f64)(f32)px_pmul((f64)rdf32(0x803489a8u),f30);f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdfb0u,f0);a=za;
a.r[0]=rd32(0x817fdfb4u)&0xffffu;(void)tc_call(0x802449ecu,&a);}a=za;a.f[0]=f30;f1=tc_callf(0x802c23ecu,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;}
if((u32)rd8(param_r3+0x98u)!=0u){if((u32)rd8(param_r3+0x92u)==0u)break;a=za;a.r[0]=rd32(param_r3+0x20cu);(void)tc_call(0x80278eb0u,&a);wr8(param_r3+0x98u,0u);}
if((u32)rd8(param_r3+0x99u)!=0u){a=za;a.r[0]=rd32(param_r3+0x42cu);f1=tc_callf(0x802bed24u,&a);wr32(rd32(param_r3+0x42cu)+0x14u,0u);
r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=rd32(0x80399774u);a.r[2]=1u;a.f[0]=f1;r3=tc_call(rd32(rd32(r3)+0x3cu),&a);f1=tc_lastf();
wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));r3=rd32(rd32(param_r3+0x238u)+0x10u);a=za;a.r[0]=r3;a.r[1]=rd32(0x80399778u);a.r[2]=1u;a.f[0]=f1;
r3=tc_call(rd32(rd32(r3)+0x3cu),&a);wr8(r3+0xcfu,(u8)((u32)rd8(r3+0xcfu)&0xfeu));r3=rd32(param_r3+0x450u);if(rd32(r3+0x14u)==1u){a=za;a.r[0]=r3;
(void)tc_call(0x802bed24u,&a);wr32(rd32(param_r3+0x450u)+0x14u,0u);}}r0=rd32(param_r3+0x618u);wr32(param_r3+0x14u,0x11u);r3=0u;
if(r0!=0u||(u32)rd8(param_r3+0x460u)==0u){r3=1u;}a=za;a.r[0]=r3;(void)tc_call(0x8023f300u,&a);a=za;f1=tc_callf(0x8023f180u,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;
f2=0.0;if(rd32(param_r3+0xb8u)==3u)break;if((u32)rd8(param_r3+0x97u)!=0u){a=za;(void)tc_call(0x802449ecu,&a);}a=za;a.f[0]=(f64)rdf32(0x80348960u);
f1=tc_callf(0x802c23ecu,&a);r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;break;default:a=za;a.r[0]=r3;a.r[1]=r4;a.f[0]=f1;r3=tc_call(sw_,&a);r0=0u;r4=tc_lastr4();
r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;r11=0u;r12=0u;f0=0.0;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f9=0.0;f10=0.0;f11=0.0;f12=0.0;f13=0.0;ctr=0u;return;
}}r5=rd32(param_r3+0x6cu);if(r5!=0u){r4=1u;if(rd32(param_r3+0x14u)!=2u||rd32(rd32(param_r3+0x448u)+0x14u)==1u||rd32(rd32(param_r3+0x424u)+0x14u)==1u){r4=0u;}
if(r4!=0u){if(r5!=0u&&r5!=rd32(param_r3+0x74u)){r25=rd32(param_r3+((r5<<2u)&0xfffffffcu)+0x418u);a=za;a.r[0]=r25;f1=tc_callf(0x802bed24u,&a);r5=0u;r6=0u;r7=0u;
r8=0u;r9=0u;r10=0u;f2=0.0;wr32(r25+0x14u,1u);wr32(param_r3+0x74u,rd32(param_r3+0x6cu));}wr32(param_r3+0x6cu,0u);}}r3=rd32(param_r3+0x70u);if(r3!=0u){
r5=0x803486e8u;r0=1u;r8=0u;ctr=0x25u;for(;;){if(rd32(r5)==4u&&rd32(r5+4u)==2u){fl_=91u;break;}r8=r8+1u;if(rd32(r5+8u)==4u&&rd32(r5+0xcu)==2u){fl_=89u;break;}
r5=r5+0x10u;r8=r8+1u;ctr=ctr-1u;if(ctr==0u){fl_=90u;break;}}do{if(fl_==91u){fl_=0u;fl_=92u;break;}if(fl_==90u){fl_=0u;}else if(fl_==89u){fl_=0u;break;}
r8=0xffffffffu;fl_=93u;break;}while(0);if(fl_==93u){fl_=0u;}else if(fl_==92u){fl_=0u;}r5=0x803486e8u;r7=0u;ctr=0x25u;for(;;){if(rd32(r5)==5u&&rd32(r5+4u)==3u){
fl_=96u;break;}r7=r7+1u;if(rd32(r5+8u)==5u&&rd32(r5+0xcu)==3u){fl_=94u;break;}r5=r5+0x10u;r7=r7+1u;ctr=ctr-1u;if(ctr==0u){fl_=95u;break;}}do{if(fl_==96u){
fl_=0u;fl_=97u;break;}if(fl_==95u){fl_=0u;}else if(fl_==94u){fl_=0u;break;}r7=0xffffffffu;fl_=98u;break;}while(0);if(fl_==98u){fl_=0u;}else if(fl_==97u){fl_=0u;
}r5=0x803486e8u;r6=0u;ctr=0x25u;for(;;){if(rd32(r5)==4u&&rd32(r5+4u)==0x13u){fl_=101u;break;}r6=r6+1u;if(rd32(r5+8u)==4u&&rd32(r5+0xcu)==0x13u){fl_=99u;break;}
r5=r5+0x10u;r6=r6+1u;ctr=ctr-1u;if(ctr==0u){fl_=100u;break;}}do{if(fl_==101u){fl_=0u;fl_=102u;break;}if(fl_==100u){fl_=0u;}else if(fl_==99u){fl_=0u;break;}
r6=0xffffffffu;fl_=103u;break;}while(0);if(fl_==103u){fl_=0u;}else if(fl_==102u){fl_=0u;}r9=0x803486e8u;r5=0u;ctr=0x25u;for(;;){
if(rd32(r9)==5u&&rd32(r9+4u)==0x14u){fl_=106u;break;}r5=r5+1u;if(rd32(r9+8u)==5u&&rd32(r9+0xcu)==0x14u){fl_=104u;break;}r9=r9+0x10u;r5=r5+1u;ctr=ctr-1u;
if(ctr==0u){fl_=105u;break;}}do{if(fl_==106u){fl_=0u;fl_=107u;break;}if(fl_==105u){fl_=0u;}else if(fl_==104u){fl_=0u;break;}r5=0xffffffffu;fl_=108u;break;
}while(0);if(fl_==108u){fl_=0u;}else if(fl_==107u){fl_=0u;}do{
if((rd32(param_r3+0x14u)==2u&&rd32(rd32(param_r3+((r8<<2u)&0xfffffffcu)+0x2f0u)+0x14u)!=1u&&rd32(rd32(param_r3+((r7<<2u)&0xfffffffcu)+0x2f0u)+0x14u)!=1u)&&(rd32(rd32(param_r3+((r6<<2u)&0xfffffffcu)+0x2f0u)+0x14u)!=1u&&rd32(rd32(param_r3+((r5<<2u)&0xfffffffcu)+0x2f0u)+0x14u)!=1u))break;
r0=0u;}while(0);if(r0!=0u){if(r3!=0u&&r3!=rd32(param_r3+0x78u)){r3=param_r3+((r3<<2u)&0xfffffffcu);r25=rd32(r3+0x2f0u);a=za;a.r[0]=r25;
f1=tc_callf(0x802bed24u,&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;wr32(r25+0x14u,1u);wr32(param_r3+0x78u,rd32(param_r3+0x70u));}wr32(param_r3+0x70u,0u);}}
if(param_r4!=0u){a=za;a.r[0]=param_r3;a.r[1]=param_r4;f1=tc_callf(0x802c613cu,&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;}r3=rd32(param_r3+0x238u);a=za;
a.r[0]=r3;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;f1=tc_callf(rd32(rd32(r3)+0x2cu),&a);r3=rd32(param_r3+0x238u);a=za;
a.r[0]=r3;a.r[1]=param_r3+0x258u;a.f[0]=f1;f1=tc_callf(rd32(rd32(r3)+0x24u),&a);if(rd32(rd32(param_r3+4u)+0x20u)==0u){r25=param_r3;r26=0u;do{
r3=rd32(r25+0x23cu);a=za;a.r[0]=r3;a.r[1]=param_r3+0x258u;a.f[0]=f1;f1=tc_callf(rd32(rd32(r3)+0x24u),&a);r26=r26+1u;r25=r25+4u;}while((s32)r26<4);}
r3=rd32(param_r3+0x68u);if((s32)r3<=2){wr32(param_r3+0x68u,r3+1u);}return;}
