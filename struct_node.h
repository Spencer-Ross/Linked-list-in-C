//definitions
#define MYNULL -1

//node structure
struct node {
	int data;
	int next;
	int valid;
};

//SpencerRoss

//function prototypes:
void init(struct node*);
int add(struct node*, int);
void print(struct node*);
int delete(struct node*, int);
int search(struct node*, int);
int get_node(struct node*);
void release_node(struct node*, int);