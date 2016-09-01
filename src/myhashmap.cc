#include <inttypes.h>
#include "8f1ed77f6232b810ebeb496bb2be924e/hashmap.h"
#include <experimental/string_view>

typedef HashMap<int64_t, int64_t> hash_t;
typedef HashMap<std::experimental::string_view, int64_t> str_hash_t;
#define SETUP hash_t hash; str_hash_t str_hash;
#define INSERT_INT_INTO_HASH(key, value) hash.Add(key, value)
#define DELETE_INT_FROM_HASH(key) hash.Remove(key)
#define INSERT_STR_INTO_HASH(key, value) str_hash.Add(key, value)
#define DELETE_STR_FROM_HASH(key) str_hash.Remove(key)
#include "template.c"
