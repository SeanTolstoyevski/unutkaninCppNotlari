#define WIN32_LEAN_AND_MEAN

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <fstream>
#include <httplib.h>
#include <iostream>
#include <string>

bool downloadFile(const std::string &url, const std::string &path) {
  httplib::SSLClient client{url};
  client.enable_server_certificate_verification(false);

  std::ofstream file(path, std::ios::binary | std::ios::trunc);
  if (!file) { return false; }

  auto response =
      client.Get("/files/papers/N4860.pdf", [&](const char *data, size_t data_length) -> bool {
        file.write(data, data_length);
        return true;
      });

  return response;
}

int main() {
  std::string url = "isocpp.org";
  std::string path = "downloaded_file";

  if (downloadFile(url, path)) {
    std::cout << "File downloaded successfully." << std::endl;
  } else {
    std::cout << "Failed to download the file." << std::endl;
  }

  return 0;
}
