#include <string>
#include "url.hpp"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  try {
    Url url{std::string{reinterpret_cast<const char*>(data), size}};
  } catch (Url::parse_error&) {
      
  }
  return 0;
}