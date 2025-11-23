#pragma once
#ifndef HEADER_H
#define HEADER_H

struct list {
    char data;
    list* next;
};

inline bool IsLast(list* elem) {
    
    return elem->next == NULL;
}

#endif 