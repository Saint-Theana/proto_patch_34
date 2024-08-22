#include <memory>

#include "tools/stream.h"

#define LOG(level, ...) common::milog::MiLogStream(common::milog::MiLogDefault::default_log_obj_, level, __FILE__, __FUNCTION__, __LINE__)(__VA_ARGS__);
#define ERROR(...) LOG(common::milog::MiLogLevel::ERROR, __VA_ARGS__)
#define WARN(...) LOG(common::milog::MiLogLevel::WARN, __VA_ARGS__)
#define NOTICE(...) LOG(common::milog::MiLogLevel::NOTICE, __VA_ARGS__)
#define FATAL(...) LOG(common::milog::MiLogLevel::FATAL, __VA_ARGS__)
#define INFO(...) LOG(common::milog::MiLogLevel::INFO, __VA_ARGS__)
#define DEBUG(...) LOG(common::milog::MiLogLevel::DEBUG, __VA_ARGS__)


namespace common {
  
  namespace milog {
    class MiLog {
    public:
      typedef tools::FixedBuffer<16384> WriteBuffer;
      typedef tools::StringStream<WriteBuffer> StringStream;
    };

    class MiLogStream {
    public:
      MiLogStream(MiLog& log, unsigned int level, const char *file, const char *func, int line);
      ~MiLogStream();

      bool operator()(const char *format, ...);
    private:
      MiLog *log_;
      std::shared_ptr<MiLog::StringStream> ostr_ptr_;
      MiLog::StringStream *ostr_;
    };

    struct MiLogDefault {
      static MiLog default_log_obj_;
    };

    enum MiLogLevel {
      DEBUG = 1,
      INFO = 2,
      WARNING = 3,
      ERROR = 4,
      NOTICE = 5,
      FATAL = 6
    };
  }
}