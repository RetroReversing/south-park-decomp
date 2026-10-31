typedef struct Node { void *next0; char p4[0xC]; f32 pos[3]; char p1C[0x8C]; f32 weight; f32 distance; } Node;
typedef struct State { char p0[8]; void *cfg; char pC[0x1C]; f32 accum; char p30[0xC]; s32 flags; Node *head; f32 total; s32 reset; } State;
typedef struct Cfg { char p0[8]; f32 value; char pC[0x10]; u8 mode; } Cfg;
extern void *func_80262378(void);
extern void D_80214438(void *, void *); extern void D_80214454(void *, void *); extern void D_80211B2C(void *, void *);
extern void D_802131C4(f32 *, void *, void *); extern f32 func_8029AA80(f32); extern f32 D_800A9A98;
void *func_802608E0(void *unused, State *arg1, void *arg2) {
 Node *node; Node *current; f32 sum; f32 delta[3]; void *result;
 result=func_80262378();
 if(result!=NULL) {
  arg1->reset=0; ((Node*)result)->distance=0.0f; ((Node*)result)->weight=0.0f;
  ((Node*)result)->pos[0]=((Cfg*)arg1->cfg)->value;
  D_80214438(arg2,(char*)result+0x10);
  if(arg1->flags&4) D_80214454(arg2,(char*)result+0x1C);
  else { D_80211B2C(arg2,(char*)result+0x28); D_80211B2C(arg2,(char*)result+0x68); }
  node=*(Node**)result; ((Node*)result)->distance=0.0f; ((Node*)result)->weight=0.0f;
  if(node!=NULL) { D_802131C4(delta,(char*)result+0x10,(char*)node+0x10); node->distance=func_8029AA80(delta[0]*delta[0]+delta[1]*delta[1]+delta[2]*delta[2]); arg1->total+=node->distance; }
  if(((Cfg*)arg1->cfg)->mode==0) { sum=0.0f; if(arg1->total>0.0f) { current=arg1->head; if(current!=NULL) do { current->weight=sum/arg1->total; sum+=current->distance; current=current->next0; } while(current!=NULL); } }
  else if(node!=NULL) arg1->accum+=node->distance*D_800A9A98;
  ((Node*)result)->weight=arg1->accum;
 }
 return result;
}
