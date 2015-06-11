#define INCREMENT 10

typedef struct ArrayList{
        
        int size;
        void **pElements;
        int reservedSize;
        
        void (*set)();
        void (*add)();
        int(*Size)();
        void (*remov)();
        void(*clear)();
        struct ArrayList* (* clone)();
        struct ArrayList* (*Get)();
        int (*contains)();
        void(*push)();
        int(*indexOf)();
        int(*isEmpty)();
        struct ArrayList* (*pop)();
        
        }ArrayList;
        
        
        
        
ArrayList* newArrayList(void);
void add(ArrayList*,void*);
void deleteArrayList(ArrayList*);
int Size(ArrayList*);
ArrayList* get(ArrayList* , int);
int contains(ArrayList*, void*);
int resizeUp(ArrayList*);
void set(ArrayList*, int,void*);
void remov(ArrayList*,int);
void clear(ArrayList*);
ArrayList* clone(ArrayList*);
void expand(ArrayList*,int);
void push(ArrayList*, int, void*);
int indexOf(ArrayList*, void*);
int isEmpty(ArrayList*);
void contract(ArrayList*,int);
ArrayList* pop(ArrayList*,int);
