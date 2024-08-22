#pragma once

namespace tools {
  template <unsigned int size>
  struct FixedBuffer {
    void *data_;
    void *cur_;
  };

  template <typename T>
  struct StringStream {
    T buffer_;
  };
}