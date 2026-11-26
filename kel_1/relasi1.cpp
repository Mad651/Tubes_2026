#include "relasi1.h"
#include <iostream>
using namespace std;

void create_list_rel1(List_rel1_ &L) {
  L.first = nullptr;
  L.last = nullptr;
}

void insert_last_rel1(List_rel1 &L, adr_rel1 P) {
  if (L.first == nullptr) {
  L.last = P;
  } else {
    P->prev = L.last;
    L.last->next = P;
    L.last = P;
  }
}

void delete_first_rel1(List_rel1 &L, adr_rel1 &P) {
  if (P != nullptr) {

