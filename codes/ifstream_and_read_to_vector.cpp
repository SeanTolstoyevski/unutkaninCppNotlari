#include <filesystem>
#include <fstream>
#include <ios>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main(int argCount, char *argList[]) {
  const std::string usageText = R"(
    program_name  filename
    orn.
    a.exe myfile.txt)";

  if (argCount < 2) {
    std::cout << "parametreler hatali\n\n";
    std::cout << usageText << "\n";
    return 1;
  }

  std::string filePath{argList[1]};
  if (!std::filesystem::exists(filePath)) {
    std::cout << "dosya bulunamadi: " << filePath << "\n";
    return 1;
  }
  std::cout << filePath << " dosyasi aciliyor...\n";

  std::ifstream ifFile(filePath, std::ifstream::binary); //
 std::noskipws(ifFile);

  if (!ifFile) {
    std::cout << "dosya acilamiyor!\n";
    return 1;
  }

  std::vector<unsigned char> fileBuffer(
      std::istream_iterator<unsigned char>(ifFile), {} // end
  );
  std::cout << "dosya basariyla vector'e kopyalandi\n";
  std::cout << "vector'un size'i: " << fileBuffer.size() << "\n"
            << "dosyanin size'i: " << std::filesystem::file_size(filePath)
            << "\n";

  std::cout << "dosya icerigi: \n";
  std::cout << std::string(fileBuffer.begin(), fileBuffer.end());

  return 0;
}
