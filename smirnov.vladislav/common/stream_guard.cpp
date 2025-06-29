#include "stream_guard.hpp"

smirnov::Iofmtguard::Iofmtguard(std::basic_ios< char >& stream):
  stream_(stream),
  precision_(stream.precision()),
  width_(stream.width()),
  fill_(stream.fill()),
  flags_(stream.flags())
{}

smirnov::Iofmtguard::~Iofmtguard()
{
  stream_.precision(precision_);
  stream_.width(width_);
  stream_.fill(fill_);
  stream_.flags(flags_);
}
