#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KEY_SIZE 30
#define TABLE_SIZE 100009
#define empty(item) (strlen(item.key)==0)
#define equal(item1,item2)(!strcmp(item1.key,item.key))

typedef struct {
	char key[KEY_SIZE];
	char pass[KEY_SIZE];
}element;

typedef struct list{
	element item;
	struct list* link;
}list;

list* chain_hash_table[TABLE_SIZE];

void init_table(list* ht[]);
long long transform(char* key);
int hash_function(char* key);

int hash_chain_add(element item, list* ht[]);
hash_chain_search(element item, list* ht[]);

int main() {
	int n, m;
	char s[21];
	element e;
	init_table(chain_hash_table); 
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		strcpy(e.key, s);
		scanf("%s", s);
		strcpy(e.pass, s);
		hash_chain_add(e, chain_hash_table);
	}
	for (int i = 0; i < m; i++) {
		scanf("%s", s);
		strcpy(e.key, s);
		hash_chain_search(e, chain_hash_table);
	}
	return 0;
}

void init_table(list* ht[]) {
	for (int i = 0; i < TABLE_SIZE; i++) {
		ht[i] = NULL; 
	}
}

long long transform(char* key) {
	long long number = 0;
	while (*key)
		number = (31 * number + *key++) % 1000000007;
	return number;
}
int hash_function(char* key) {
	return transform(key) % TABLE_SIZE;
}

int hash_chain_add(element item, list* ht[]) {
	int hash_value = hash_function(item.key);

	list* node_before = NULL;
	list* node = ht[hash_value];

	while (node) {
		if (strcmp(node->item.key, item.key) == 0) return 0;
		node_before = node;
		node = node->link;
	}

	list* ptr = (list*)malloc(sizeof(list));
	ptr->item = item;
	ptr->link = NULL;

	if (node_before) node_before->link = ptr;
	else ht[hash_value] = ptr; 
}
 hash_chain_search(element item, list* ht[]) {
	list* node;
	int hash_value = hash_function(item.key);

	node = ht[hash_value];
	while (node) {
		if (strcmp(node->item.key, item.key) == 0)
		{
			printf("%s\n", node->item.pass);
			break;
		}
		node = node->link;
	}
}
