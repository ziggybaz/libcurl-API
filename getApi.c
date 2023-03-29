#include <stdio.h>
#include <curl/curl.h>
#include <string.h>

int main (void)
{
  CURL *curl;
  CURLcode response;
  
  curl_global_init(CURL_GLOBAL_ALL);
  
  curl = curl_easy_init();
  if(curl){
    curl_easy_setopt(curl, CURLOPT_URL, "eneter your http url here for posting");
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "enter data to be posted here");
    response = curl_easy_perform(curl);
    
    if(response != CURLE_OK)
      fprintf(stderr, "Sorry your post request failed: %s\n", curl_easy_stderror(response));
    
    curl_easy_cleanup(curl);
    }
  
  curl_global_cleanup();
  return 0;
}
