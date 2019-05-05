#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20

struct Student {
    char name[100];
    int score;
};

struct Student students[SIZE];
int indexes[SIZE];
int length = 0;
int size = 0;

void output() {
    printf("=====BEGIN=====\n");
    for (int i = 0; i < length; i++) {
        if (indexes[i] == 0) {
            continue;
        }
        printf("%s %d\n", students[i].name, students[i].score);
    }
    printf("=====END=====\n");
}

void put(struct Student * p, const char * name, int score) {
    strcpy(p->name, name);
    p->score = score;
}

void sort() {
    printf("-----BEGIN-----\n");
    int flags[20];
    struct Student temp;
    for (int i = 0; i < 20; i++) {
        flags[i] = indexes[i];
    }
    for (int i = 0; i < size; i++) {
        int flag_num = -1;
        for (int j = 0; j < length; j++) {
            if (flag_num == -1 && flags[j] != 0) {
                temp = students[flags[j] - 1];
                flag_num = j;
            }
            if (flags[j] != 0 && students[flags[j] - 1].score > temp.score) {
                temp = students[flags[j] - 1];
                flag_num = j;
            }
        }
        printf("%s %d\n", temp.name, temp.score);
        flags[flag_num] = 0;
    }
    printf("-----END-----\n");
}

int main() {
    put(&students[0], "A", 60);
    put(&students[1], "B", 50);
    put(&students[2], "C", 70);
    put(&students[3], "D", 75);
    put(&students[4], "E", 80);
    put(&students[5], "F", 15);
    put(&students[6], "G", 40);
    put(&students[7], "H", 52);
    indexes[0] = 1;
    indexes[1] = 0;
    indexes[2] = 3;
    indexes[3] = 0;
    indexes[4] = 5;
    indexes[5] = 6;
    indexes[6] = 7;
    indexes[7] = 8;
    length = 8;
    size = 6;

    sort();

    // output();
    return 0;
}

// E 80
// C 70
// A 60
// H 52
// G 40
// F 15

// struct Array {
//     // struct Student * items;
//     struct Student items[100];
//     int length;
//     int size;
// };

// void Array(struct Array* this) {
//     this->size = 100;
//     this->items = malloc(sizeof (struct Student) * (this->size));
//     this->length = 0;
// }

// void Array_free(struct Array* this) {
//     this->size = 0;
//     this->length = 0;
//     free(this->items);
// }

// void Array_expand(struct Array* this) {
//     this->size *= 2;
//     struct Student * newItems = malloc(sizeof (struct Student) * (this->size));
//     for (int i = 0; i < this->length; i++) {
//         newItems[i] = this->items[i];
//     }
//     free(this->items);
//     this->items = newItems;
// }

// void Array_push(struct Array* this, struct Student item) {
//     if (this->length == this->size) {
//         Array_expand(this);
//     }
//     this->items[this->length] = item;
//     this->length++;
// }

// void Array_pop(struct Array* this) {
//     this->length--;
// }

// void Array_display(struct Array* this) {
//     printf("[");
//     for (int i = 0; i < this->length; i++) {
//         printf(i == 0 ? "%d" : " %d", this->items[i]);
//     }
//     printf("]\n");
// }

// void Array_remove(struct Array* this, int index, int deleteCount) {
//     if (index + deleteCount > this->length) {
//         deleteCount = this->length - index;
//     }
//     int from = index + deleteCount;
//     int to = index;
//     int n = this->length - from;
//     for (int i = 0; i < n; i++) {
//         this->items[to + i] = this->items[from + i];
//     }
//     this->length -= deleteCount;
// }

// void Array_insert(struct Array* this, int index, struct Array* other) {
//     while (this->length + other->length > this->size) {
//         Array_expand(this);
//     }
//     int from = this->length - 1;
//     int to = this->length + other->length - 1;
//     int n = other->length;
//     for (int i = 0; i < n; i++) {
//         this->items[to - i] = this->items[from - i];
//     }
//     for (int i = 0; i < n; i++) {
//         this->items[index + i] = other->items[i];
//     }
//     this->length += n;
// }

// void Array_sort(struct Array* this, int(*cmp)(struct Student * a, struct Student * b)) {
//     struct Student temp;
//     for (int i = 0; i < this->length; i++) {
//         for (int j = 0; j < this->length - i; j++) {
//             struct Student * pa = &(this->items[i]);
//             struct Student * pb = &(this->items[j]);
//             int flag = (*cmp)(pa, pb);
//             if (flag > 0) {
//                 temp = *pa;
//                 *pa = *pb;
//                 *pb = temp;
//             }
//         }
//     }
// }

// int cmp_by_score(struct Student * a, struct Student * b) {
//     return a->score - b->score;
// }

// int cmp_by_name(struct Student * a, struct Student * b) {
//     return strcmp(a->name, b->name);
// }

// int main() {
//     struct Array list;
//     Array(&list);
//     Array_push(&list, 5);
//     Array_push(&list, 4);
//     Array_push(&list, 3);
//     Array_push(&list, 2);
//     Array_push(&list, 1);

//     struct Array list2;
//     Array(&list2);
//     Array_push(&list2, 9);
//     Array_push(&list2, 6);
//     Array_push(&list2, 9);

//     Array_remove(&list, 0, 1);
//     Array_insert(&list, 1, &list2);

//     Array_sort(&list, &cmp_by_score);
//     Array_sort(&list, &cmp_by_name);

//     qsort(list.items, list.length, sizeof(struct Student), &cmp_by_name);

//     Array_display(&list);

//     Array_free(&list);
//     Array_free(&list2);
//     return 0;
// }