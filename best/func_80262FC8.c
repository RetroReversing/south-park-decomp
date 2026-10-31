extern s32 D_8021563C(void);
typedef struct { s16 value; s16 weight; } E;
typedef struct { s16 count; E items[128]; } Table;
s16 func_80262FC8(Table *t) {
int __repair_literal;

 E *p,*start; s32 sum=0,acc,n;
 if(t->count==0) return -1;
__repair_literal = 4;

 *(s16*)((char*)t + 2 + t->count*__repair_literal)=-1;
 start=p=t->items;
 if(t->items[0].value!=-1) { do { sum+=p->weight; p++; } while(p->value!=-1); }
 n=D_8021563C()%sum; acc=0;
 p=start;
 if(p->value!=-1) { do { acc+=p->weight; if(acc<n) p++; else break; } while(p->value!=-1); }
 return p->value;
}
