#pragma once
#ifndef LIST_H
#define LIST_H

struct list {
    char data;
    list* next;
};

inline bool IsLast(list* elem) {
    
    return elem->next == NULL;
}

#endif 