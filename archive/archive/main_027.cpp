#include <curl/curl.h>
#include <iostream>
#include <string>

static size_t WriteCallback(void *contents, size_t size, size_t nmemb,
                            void *userp) {
  (static_cast<std::string *>(userp)->append(static_cast<char *>(contents),
                                             size * nmemb));
  return size * nmemb;
}

int main(void) {
  
  CURL *curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();
  if (curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://www.google.com");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    
    if (res == CURLE_OK) {
      std::cout << readBuffer << std::endl;
    } else {
      std::cerr << "some errro occured ..." << '\n';
    }
  }
  
  curl_global_cleanup();
  return EXIT_SUCCESS;
}
