typedef struct _typetab typetab;

struct _typetab{
    type *root;
    int num;
    type *next;
};

typedef struct _typestack _typestack;

struct _typestack{
    typetab *root;
    int num;
};

typestack *crearTypeStack();
void borrarTypeStack(typestack *ts);
void insertarTypeTab(typetab *sym);
typetab* getCimaType(typestack *ts);
typetab* sacarTypeTab(typestack *ts);