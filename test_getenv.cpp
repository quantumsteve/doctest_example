#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include <cstdlib>
#include <string>

TEST_CASE("check environment variable SOURCE_DIR") {
  std::string source_dir = std::getenv("SOURCE_DIR");
  CHECK(source_dir != "");
}

