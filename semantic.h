#define MAX 10
#define UNDEF 0
#define INT_TYPE 1
#define REAL_TYPE 2
#define CHAR_TYPE 3

typedef struct list_t{
    char st_name[MAX];
    int st_type;
    struct list_t *next;
}list_t;

void insert(char *name,int len,int type,int l)