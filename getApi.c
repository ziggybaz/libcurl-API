#include <stdio.h>
#include <curl/curl.h>
#include <string.h>

int main (void)
{
  curl_global_init();
  
  curl_global_cleanup();
  return 0;
}
