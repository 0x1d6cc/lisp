#include <stdlib.h>
#include "lisp/hashmap.h"

struct entry {
  const char* key;
  void* value;
};


