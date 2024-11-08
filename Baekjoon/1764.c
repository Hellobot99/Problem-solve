#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KEY_SIZE 30
#define TABLE_SIZE 100009
#define empty(item) (strlen(item.key)==0)
#define equal(item1,item2)(!strcmp(item1.key,item.key))

typedef struct {
	char key[KEY_SIZE];
}element;

typedef struct list {
	element item;
	struct list* link;
}list;

int compare(const void* a, const void* b) {
	const char* str1 = *(const char**)a;  // a를 char**로 캐스팅 후 역참조
	const char* str2 = *(const char**)b;  // b를 char**로 캐스팅 후 역참조
	return strcmp(str1, str2);            // 두 문자열을 비교
}
list* chain_hash_table[TABLE_SIZE];

void init_table(list* ht[]);
long long transform(char* key);
int hash_function(char* key);

int hash_chain_add(element item, list* ht[]);
int hash_chain_search(element item, list* ht[]);

int main() {
	int n, m,count=0,a;
	char s[21];
	
	element e;
	init_table(chain_hash_table);
	scanf("%d %d", &n, &m);
	if (n > m)a = n;
	else a = m;
	char** arr = (char**)malloc(sizeof(char*) * a+1);
	for (int i = 0; i < a; i++) {
		arr[i] = (char*)malloc(sizeof(char) * 21);
	}
	
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		strcpy(e.key, s);
		hash_chain_add(e, chain_hash_table);
	}
	for (int i = 0; i < m; i++) {
		scanf("%s", s);
		strcpy(e.key, s);
		if (hash_chain_search(e, chain_hash_table)) {
			strcpy(arr[count], s);
			count++;
		}
	}

	qsort(arr, count, sizeof(char*), compare);

	printf("%d\n", count);

	for (int i = 0; i < count; i++) {
		printf("%s\n", arr[i]);
	}
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
int hash_chain_search(element item, list* ht[]) {
	list* node;
	int hash_value = hash_function(item.key);

	node = ht[hash_value];
	while (node) {
		if (strcmp(node->item.key, item.key) == 0)
		{
			return 1;
		}
		node = node->link;
	}
	return 0;
}
