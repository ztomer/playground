

#include <stdio.h>
#include <string.h>


/******** Generic part ****************************************/
#define G_GEN_ENUM(__PREFIX,__ENUM) __PREFIX ##_##__ENUM,
#define G_GEN_STRING(__PREFIX, __STRING) #__STRING,

#define G_GEN_ENUM_TYPE(__PREFIX, __FOR_EACH)   \
  typedef enum __PREFIX {                       \
    __FOR_EACH( G_GEN_ENUM, __PREFIX )          \
    __PREFIX ##_NUM,                            \
    __PREFIX ##_INVALID                         \
  } __PREFIX;


#define G_GEN_STRING_ARRAY(__STRUCT_NAME, __PREFIX, __FOR_EACH) \
  static const char* __STRUCT_NAME [ __PREFIX##_NUM ] = {       \
    __FOR_EACH(G_GEN_STRING, __PREFIX)                          \
  };

#define G_GEN_STR_TO_ENUM(__PREFIX, __STRUCT_NAME)            \
  __PREFIX __STRUCT_NAME##_to_enum(const char* const in_str); \
  __PREFIX __STRUCT_NAME##_to_enum(const char* const in_str){ \
    __PREFIX str_idx=0;                                       \
    for (;str_idx < __PREFIX##_NUM; str_idx++){               \
      if (strncmp( __STRUCT_NAME [str_idx], in_str,           \
                   strlen(__STRUCT_NAME [str_idx])) == 0 )    \
        return str_idx;                                       \
    }                                                         \
    return ( __PREFIX ##_INVALID);                            \
  }

#define G_GEN_ENUM_TO_STR(__PREFIX, __STRUCT_NAME)        \
  const char* __PREFIX ## _to_str( __PREFIX enum_name);   \
  const char* __PREFIX ## _to_str( __PREFIX enum_name) {  \
    if (enum_name >= __PREFIX ##_NUM)                     \
      return(NULL);                                       \
    return __STRUCT_NAME [enum_name];                     \
  }


#define GEN_STR_ENUM_TUPLE(__PREFIX, __STRUCT_NAME, __FOR_EACH) \
  G_GEN_ENUM_TYPE(__PREFIX, __FOR_EACH)                         \
  G_GEN_STRING_ARRAY(__STRUCT_NAME,__PREFIX,  __FOR_EACH)       \
  G_GEN_STR_TO_ENUM(__PREFIX, __STRUCT_NAME)                    \
  G_GEN_ENUM_TO_STR(__PREFIX, __STRUCT_NAME)

/****************************************************************/

#define FOR_EACH_TEST(__GENERATOR, __PREFIX)    \
  __GENERATOR( __PREFIX , hello)                \
  __GENERATOR( __PREFIX , blah)                 \
  __GENERATOR( __PREFIX , dododo)               \
  __GENERATOR( __PREFIX , gogo) 


GEN_STR_ENUM_TUPLE(E_TEST, test_str, FOR_EACH_TEST)


int main() {

  printf("-=-----------------------------------------------===\n");

  int a = test_str_to_enum("dododo");
  printf("enum: %d\n", a);
  printf("string: %s\n", E_TEST_to_str(3));
  printf("-=-----------------------------------------------===\n");
  return 0;
}
