#include "str.h"

/*
 * Get the size of the string
 */
size_t str_length(const char *str) {
  size_t i = 0;
  if (str != NULL) {
    while (str[i] != '\0') {
      ++i;
    }
  }
  else {
    i = 0;
  }
  return i;
}

/*
 * Compare the two strings
 */
int str_compare(const char *str1, const char *str2) {
  size_t i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
    if (str1[i] != str2[i]) {
      return str1[i] - str2[i];
    }
    ++i;
  }
  return str1[i] - str2[i];
}

/*
 * Search for the needle in the haystack
 */
const char *str_search(const char *haystack, const char *needle) {
  size_t i = 0;
  while (haystack[i] != '\0') {
    size_t j = 0;
    while (needle[j] && haystack[i+j] && needle[j] == haystack[i+j]) {
      ++j;
    }
    if (needle[j] == '\0') {
      return haystack+i;
    }
    ++i;
  }
  return NULL;
}
