#include "utility/Triggerable.hpp"

namespace acore::utility
{

    Triggerable::Triggerable(int fd, std::uint32_t epoll_event) noexcept :
        _fd(fd),
        _epoll_event(epoll_event)
    {}

    int Triggerable::getNativeHandle() const noexcept
    {
        return (_fd);
    }
}
