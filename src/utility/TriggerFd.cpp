#include <unistd.h>
#include "utility/TriggerFd.hpp"

namespace acore::utility
{
    TriggerFd::TriggerFd(TriggerFd::WatchType watchMode, int fd, bool closeOnDestruct) noexcept :
        Triggerable(fd, static_cast<int>(watchMode)),
        _closeOnDestruct(closeOnDestruct)
    {}

    TriggerFd::~TriggerFd()
    {
        if (_closeOnDestruct)
            close(_fd);
    }

    TriggerFd::WatchType TriggerFd::getWatchType() const noexcept
    {
        return (static_cast<WatchType>(_epoll_event));
    }
}