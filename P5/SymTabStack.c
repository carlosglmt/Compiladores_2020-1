typedef struct _symtab symtab;

struct _symtab{
    symbol *root;
    int num;
    symtab *next;
};

typedef struct _symstack symstack;

struct _symstack{
    symtab *root;
    int num;
};

symstack *crearSymStack();
void borrarSymStack();
void insertarSymTab(symtab *sym);
symtab* getCima(symstack *ss);
symtab* sacarSymTab(symstack *ss);